#include "Canvas3DService.h"

#include <QMessageBox>
#include <QOpenglFunctions_4_5_Core>


Canvas3D::Canvas3D(Entity3D entity, QWidget* parent)
	: QOpenGLWidget(parent)
	, ui(new Ui::Canvas3DServiceClass())
	// === 更新/新增内容开始 ===
	, m_gridVAOs(GridPart::Count)
	, m_gridVBOs(GridPart::Count)
	, m_gridPartsVertices(GridPart::Count)
	, m_axesVBO(QOpenGLBuffer::VertexBuffer) // 初始化坐标轴VBO
	// === 更新/新增内容结束 ===
{
	ui->setupUi(this);
	setNormalizeParamWithEntity(entity);
	entity.setNormalizeVer(_mCenterX, _mCenterY, _mCenterZ, _mScale);
	entity.setCubeNormalizeVer(_mCenterX, _mCenterY, _mCenterZ, _mScale, 2.0);
	entity.setVerticesColor(QVector4D(0.0f, 0.0f, 1.0f, 1.0f));
	_mEntities.push_back(entity);

	_mTransSpeed = 1.0f;
	_mRotSpeed = M_PI / 180.0f / 3.0f;
	_mZoomSpeed = 0.1f;
	_mRotX = 0.0f;
	_mRotY = 0.0f;
	_mZoom = 1.0f;
	_mTransX = 0.0f;
	_mTransY = 0.0f;
	_mLastZoom = 1.0f;
	_mViewPos = QVector3D{ 0.0f, 0.0f, 3.0f };
	_mViewAt = QVector3D{ 0.0f, 0.0f, 0.0f };
	_mViewUp = QVector3D{ 0.0f, 1.0f, 0.0f };
	_mAspect = this->width() / (double)this->height();
	_mFov = 45;
	_mZNear = 0.001;
	_mZFar = 100;
	_mRotation = QQuaternion();
	_mRotationCenter = QVector3D(0.0f, 0.0f, 0.0f);
	_mIsFirstMouseEvent = true;

	// === 新增内容开始 ===
	// 初始化样式参数
	m_gridBorderColor = QVector4D(0.3f, 0.3f, 0.3f, 1.0f); // 深灰色边框
	m_gridInnerColor = QVector4D(0.8f, 0.8f, 0.8f, 1.0f);  // 浅灰色格网
	m_gridBorderWidth = 2.0f;
	m_gridInnerWidth = 1.0f;
	m_axesWidth = 3.0f;
	m_gridDivisions = 10; // 初始化格网分段数

	// 初始化色带参数
	m_showLegend = false;
	m_legendField = "Elevation (m)";  // 默认属性名称
	m_legendStartColor = QVector4D(0.0f, 0.0f, 1.0f, 1.0f);  // 蓝色
	m_legendEndColor = QVector4D(1.0f, 0.0f, 0.0f, 1.0f);    // 红色
	// === 新增内容结束 ===
}

Canvas3D::~Canvas3D()
{
	makeCurrent();
	// === 更新/新增内容开始 ===
	//for (auto& vbo : m_gridVBOs) {
	//	if (vbo.isCreated()) {
	//		vbo.destroy();
	//	}
	//}
	//if (m_axesVBO.isCreated()) {
	//	m_axesVBO.destroy();
	//}

	for (auto& vao : _mVAOs) {
		vao.reset();
	}
	for (auto& vao : m_gridVAOs) {
		if (vao) vao.reset();
	}
	if (m_axesVAO) m_axesVAO.reset();

	// 2. 销毁 VBOs 和 EBOs
	for (auto& vbo : _mVBOs) {
		if (vbo.isCreated()) {
			vbo.destroy();
		}
	}
	for (auto& ebo : _mEBOs) {
		if (ebo.isCreated()) {
			ebo.destroy();
		}
	}
	for (auto& vbo : m_gridVBOs) {
		if (vbo.isCreated()) {
			vbo.destroy();
		}
	}
	if (m_axesVBO.isCreated()) {
		m_axesVBO.destroy();
	}

	// 3. doneCurrent() 是一个好习惯
	doneCurrent();
	// m_gridVAOs 和 m_axesVAO 是智能指针，会自动释放
	// === 更新/新增内容结束 ===
	delete ui;
}

void Canvas3D::createGridGeometry()
{
	Entity3D entity = _mEntities.at(0);

	// 1. 获取原始边界并计算边距
	const float paddingFactor = 0.05f;
	float minX = entity.getMinX(), maxX = entity.getMaxX();
	float minY = entity.getMinY(), maxY = entity.getMaxY();
	float minZ = entity.getMinZ(), maxZ = entity.getMaxZ();
	float rangeX = maxX - minX, rangeY = maxY - minY, rangeZ = maxZ - minZ;
	float xPadding = rangeX * paddingFactor, yPadding = rangeY * paddingFactor, zPadding = rangeZ * paddingFactor;

	// --- 修改开始: 将计算结果存入成员变量 ---
	m_gridMinX = minX - xPadding;
	m_gridMaxX = maxX + xPadding;
	m_gridMinY = minY - yPadding;
	m_gridMaxY = maxY + yPadding;
	m_gridMinZ = minZ - 2 * zPadding;
	m_gridMaxZ = maxZ + 2 * zPadding;
	m_gridRangeX = m_gridMaxX - m_gridMinX;
	m_gridRangeY = m_gridMaxY - m_gridMinY;
	m_gridRangeZ = m_gridMaxZ - m_gridMinZ;
	// --- 修改结束 ---

	for (auto& part : m_gridPartsVertices) {
		part.clear();
	}

	// 定义8个角点 (使用成员变量)
	QVector3D corners[8];
	corners[0] = { m_gridMinX, m_gridMinY, m_gridMinZ }; corners[1] = { m_gridMaxX, m_gridMinY, m_gridMinZ };
	corners[2] = { m_gridMaxX, m_gridMaxY, m_gridMinZ }; corners[3] = { m_gridMinX, m_gridMaxY, m_gridMinZ };
	corners[4] = { m_gridMinX, m_gridMinY, m_gridMaxZ }; corners[5] = { m_gridMaxX, m_gridMinY, m_gridMaxZ };
	corners[6] = { m_gridMaxX, m_gridMaxY, m_gridMaxZ }; corners[7] = { m_gridMinX, m_gridMaxY, m_gridMaxZ };

	auto createFace = [&](GridPart part, const QVector<int>& borderIndices,
		const QVector3D& uVec, const QVector3D& vVec, const QVector3D& origin) {
			// ... 此函数内部逻辑完全不变 ...
			for (size_t i = 0; i < borderIndices.size(); i += 2) {
				Vertex v1, v2;
				v1.position = corners[borderIndices[i]]; v2.position = corners[borderIndices[i + 1]];
				v1.color = v2.color = m_gridBorderColor;
				m_gridPartsVertices[part].append(v1); m_gridPartsVertices[part].append(v2);
			}
			for (int i = 1; i < m_gridDivisions; ++i) {
				float step = static_cast<float>(i) / m_gridDivisions;
				Vertex v1, v2, v3, v4;
				v1.position = origin + vVec * step; v2.position = origin + vVec * step + uVec;
				v1.color = v2.color = m_gridInnerColor;
				m_gridPartsVertices[part].append(v1); m_gridPartsVertices[part].append(v2);
				v3.position = origin + uVec * step; v4.position = origin + uVec * step + vVec;
				v3.color = v4.color = m_gridInnerColor;
				m_gridPartsVertices[part].append(v3); m_gridPartsVertices[part].append(v4);
			}
		};

	createFace(Back, { 0,1, 1,2, 2,3, 3,0 }, { m_gridRangeX, 0, 0 }, { 0, m_gridRangeY, 0 }, corners[0]);
	createFace(Front, { 4,5, 5,6, 6,7, 7,4 }, { m_gridRangeX, 0, 0 }, { 0, m_gridRangeY, 0 }, corners[4]);
	createFace(Bottom, { 0,1, 1,5, 5,4, 4,0 }, { m_gridRangeX, 0, 0 }, { 0, 0, m_gridRangeZ }, corners[0]);
	createFace(Top, { 3,2, 2,6, 6,7, 7,3 }, { m_gridRangeX, 0, 0 }, { 0, 0, m_gridRangeZ }, corners[3]);
	createFace(Left, { 0,3, 3,7, 7,4, 4,0 }, { 0, m_gridRangeY, 0 }, { 0, 0, m_gridRangeZ }, corners[0]);
	createFace(Right, { 1,2, 2,6, 6,5, 5,1 }, { 0, m_gridRangeY, 0 }, { 0, 0, m_gridRangeZ }, corners[1]);

	// 统一进行归一化
	for (auto& partVertices : m_gridPartsVertices) {
		for (auto& vertex : partVertices) {
			vertex.position.setX((vertex.position.x() - _mCenterX) * _mScale);
			vertex.position.setY((vertex.position.y() - _mCenterY) * _mScale);
			vertex.position.setZ((vertex.position.z() - _mCenterZ) * _mScale);
		}
	}
}

void Canvas3D::initializeGL()
{
	initializeOpenGLFunctions();
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glEnable(GL_DEPTH_TEST);
	// 启用线条平滑
	glEnable(GL_LINE_SMOOTH);

	// --- 实体模型 VAO/VBO 初始化 (这部分保持不变) ---
	std::shared_ptr<QOpenGLVertexArrayObject> VAO{ new QOpenGLVertexArrayObject{} };
	QOpenGLBuffer VBO{ QOpenGLBuffer::VertexBuffer };
	QOpenGLBuffer EBO{ QOpenGLBuffer::IndexBuffer };
	_mVAOs.push_back(VAO);
	_mVBOs.push_back(VBO);
	_mEBOs.push_back(EBO);
	VAO->create();
	VAO->bind();
	VBO.create();
	VBO.bind();
	EBO.create();
	EBO.bind();

	_mShaderProgram.create();
	_mShaderProgram.addShaderFromSourceFile(QOpenGLShader::Vertex, "./resource/shader/gl.vert");
	_mShaderProgram.addShaderFromSourceFile(QOpenGLShader::Fragment, "./resource/shader/gl.frag");
	_mShaderProgram.link();

	Entity3D firstEntity = _mEntities.at(0);
	QVector<Vertex> vertices = firstEntity.getNormalizeVer();
	QVector<uint> indices = firstEntity.getIndices();
	int verNum = vertices.count();

	EBO.allocate(indices.data(), sizeof(uint) * indices.count());
	VBO.allocate(vertices.data(), sizeof(Vertex) * verNum);
	_mShaderProgram.enableAttributeArray(0);
	_mShaderProgram.setAttributeBuffer(0, GL_FLOAT, offsetof(Vertex, position), 3, sizeof(Vertex));
	_mShaderProgram.enableAttributeArray(1);
	_mShaderProgram.setAttributeBuffer(1, GL_FLOAT, offsetof(Vertex, color), 4, sizeof(Vertex));
	VAO->release();
	VBO.release();
	EBO.release();

	std::shared_ptr<QOpenGLVertexArrayObject> cubeVAO{ new QOpenGLVertexArrayObject{} };
	QOpenGLBuffer cubeVBO{ QOpenGLBuffer::VertexBuffer };
	QOpenGLBuffer cubeEBO{ QOpenGLBuffer::IndexBuffer };
	_mVAOs.push_back(cubeVAO);
	_mVBOs.push_back(cubeVBO);
	_mEBOs.push_back(cubeEBO);
	cubeVAO->create();
	cubeVAO->bind();
	cubeVBO.create();
	cubeVBO.bind();
	cubeEBO.create();
	cubeEBO.bind();
	QVector<Vertex> cubevertices = firstEntity.getCubeNormalizeVer();
	QVector<uint> cubeindices = firstEntity.getCubeIndices();
	_mShaderProgram.enableAttributeArray(0);
	_mShaderProgram.setAttributeBuffer(0, GL_FLOAT, offsetof(Vertex, position), 3, sizeof(Vertex));
	_mShaderProgram.enableAttributeArray(1);
	_mShaderProgram.setAttributeBuffer(1, GL_FLOAT, offsetof(Vertex, color), 4, sizeof(Vertex));
	int verCubeNum = cubevertices.count();
	cubeEBO.allocate(cubeindices.data(), sizeof(uint) * cubeindices.count());
	cubeVBO.allocate(cubevertices.data(), sizeof(Vertex) * verCubeNum);
	cubeVAO->release();
	cubeVBO.release();
	cubeEBO.release();

	// --- 格网VAO/VBO初始化 (这部分保持不变) ---
	createGridGeometry();
	for (int i = 0; i < GridPart::Count; ++i) {
		if (m_gridPartsVertices[i].isEmpty()) continue;

		m_gridVAOs[i] = std::make_shared<QOpenGLVertexArrayObject>();
		m_gridVAOs[i]->create();
		m_gridVAOs[i]->bind();

		m_gridVBOs[i].create();
		m_gridVBOs[i].bind();
		m_gridVBOs[i].allocate(m_gridPartsVertices[i].constData(), m_gridPartsVertices[i].size() * sizeof(Vertex));

		_mShaderProgram.enableAttributeArray(0);
		_mShaderProgram.setAttributeBuffer(0, GL_FLOAT, offsetof(Vertex, position), 3, sizeof(Vertex));
		_mShaderProgram.enableAttributeArray(1);
		_mShaderProgram.setAttributeBuffer(1, GL_FLOAT, offsetof(Vertex, color), 4, sizeof(Vertex));

		m_gridVAOs[i]->release();
		m_gridVBOs[i].release();
	}

	// --- 坐标轴VAO/VBO初始化 (已更新) ---
	m_axesVAO = std::make_shared<QOpenGLVertexArrayObject>();
	m_axesVAO->create();
	m_axesVAO->bind();
	m_axesVBO.create();
	m_axesVBO.bind();
	m_axesVBO.setUsagePattern(QOpenGLBuffer::DynamicDraw);
	// 更新为3D箭头所需的顶点空间: 3条线(6) + 3个金字塔箭头(3*4*3=36) = 42
	m_axesVBO.allocate(42 * sizeof(Vertex));
	_mShaderProgram.enableAttributeArray(0);
	_mShaderProgram.setAttributeBuffer(0, GL_FLOAT, offsetof(Vertex, position), 3, sizeof(Vertex));
	_mShaderProgram.enableAttributeArray(1);
	_mShaderProgram.setAttributeBuffer(1, GL_FLOAT, offsetof(Vertex, color), 4, sizeof(Vertex));
	m_axesVAO->release();
	m_axesVBO.release();
}


// --- Please use this final, correct version to replace the old paintGL function ---
void Canvas3D::paintGL()
{
	// 0. State and clear
	glEnable(GL_DEPTH_TEST);
	glDepthMask(GL_TRUE);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	_mShaderProgram.bind();

	// 1. Setup main scene MVP
	QMatrix4x4 model;
	model.scale(_mZoom);
	model.rotate(_mRotation);
	model.translate(_mTransX, _mTransY, 0.0f);

	checkCameraPosition();
	QMatrix4x4 view;
	view.lookAt(_mViewPos, _mViewAt, _mViewUp);

	QMatrix4x4 projection;
	projection.perspective(_mFov, _mAspect, _mZNear, _mZFar);

	_mShaderProgram.setUniformValue("model", model);
	_mShaderProgram.setUniformValue("view", view);
	_mShaderProgram.setUniformValue("projection", projection);

	// 2. Render 3D scene (Entities and Grid)
	// (This part is unchanged)
	Entity3D entity = _mEntities.at(0);
	switch (entity.getGeometryType()) {
		// ... cases for Point, Polygon, Cube ...
	case Entity3D::Point: { const auto& VAO = _mVAOs[0]; QOpenGLVertexArrayObject::Binder bind(&*VAO); glPointSize(5.0f); glDrawElements(GL_POINTS, entity.getIndicesCount(), GL_UNSIGNED_INT, nullptr); break; }
	case Entity3D::Polygon: { const auto& VAO = _mVAOs[0]; QOpenGLVertexArrayObject::Binder bind(&*VAO); glDrawElements(GL_TRIANGLES, entity.getIndicesCount(), GL_UNSIGNED_INT, nullptr); break; }
	case Entity3D::Cube: { QVector<Vertex> cubevertices = _mEntities[0].getCubeNormalizeVer(); _mVBOs[1].bind(); _mVBOs[1].allocate(cubevertices.constData(), cubevertices.size() * sizeof(Vertex)); _mVBOs[1].release(); const auto& VAO = _mVAOs[1]; QOpenGLVertexArrayObject::Binder bind(&*VAO); glDrawElements(GL_TRIANGLES, entity.getCubeIndicesCount(), GL_UNSIGNED_INT, nullptr); break; }
	default: { const auto& VAO = _mVAOs[0]; QOpenGLVertexArrayObject::Binder bind(&*VAO); glPointSize(5.0f); glDrawElements(GL_POINTS, entity.getIndicesCount(), GL_UNSIGNED_INT, nullptr); } break;
	}
	QVector3D viewDir = (_mViewAt - _mViewPos).normalized();
	QVector3D local_normals[] = { { -1, 0, 0 }, { 1, 0, 0 }, { 0, -1, 0 }, { 0, 1, 0 }, { 0, 0, -1 }, { 0, 0, 1 } };
	for (int i = 0; i < 6; ++i) {
		QVector3D world_normal = _mRotation.rotatedVector(local_normals[i]);
		if (QVector3D::dotProduct(world_normal, viewDir) > 0) {
			if (m_gridVAOs[i] && !m_gridPartsVertices[i].isEmpty()) {
				QOpenGLVertexArrayObject::Binder binder(&*m_gridVAOs[i]);
				glLineWidth(m_gridBorderWidth); glDrawArrays(GL_LINES, 0, 8);
				glLineWidth(m_gridInnerWidth); int innerGridVertexCount = m_gridPartsVertices[i].size() - 8;
				if (innerGridVertexCount > 0) { glDrawArrays(GL_LINES, 8, innerGridVertexCount); }
			}
		}
	}

	// 3. Render axes widget (unchanged)
	{
		glClear(GL_DEPTH_BUFFER_BIT);
		// ... (all the code for the little XYZ widget in the corner remains the same)
		QMatrix4x4 axesModel; axesModel.rotate(_mRotation);
		QMatrix4x4 axesView; axesView.translate(-_mAspect * 0.8f, -0.8f, -2.0f);
		QMatrix4x4 axesProjection; axesProjection.ortho(-_mAspect, _mAspect, -1.0f, 1.0f, 0.1f, 100.0f);
		_mShaderProgram.setUniformValue("model", axesModel); _mShaderProgram.setUniformValue("view", axesView); _mShaderProgram.setUniformValue("projection", axesProjection);
		const float axisLength = 0.15f; const float arrowheadBase = 0.02f; const float arrowheadLength = 0.04f; QVector<Vertex> axesVertices; axesVertices.reserve(42); Vertex v; const float lineEndPos = axisLength - arrowheadLength;
		v.color = { 1,0,0,1 }; v.position = { 0,0,0 }; axesVertices.append(v); v.position = { lineEndPos,0,0 }; axesVertices.append(v);
		v.color = { 0,1,0,1 }; v.position = { 0,0,0 }; axesVertices.append(v); v.position = { 0,lineEndPos,0 }; axesVertices.append(v);
		v.color = { 0,0,1,1 }; v.position = { 0,0,0 }; axesVertices.append(v); v.position = { 0,0,lineEndPos }; axesVertices.append(v);
		auto addPyramidArrow = [&](int axis, const QVector4D& color) {
			QVector3D apex, p1, p2, p3, p4; float basePos = axisLength - arrowheadLength;
			if (axis == 0) {
				apex = { axisLength, 0, 0 }; p1 = { basePos, arrowheadBase, 0 }; p2 = { basePos, 0, arrowheadBase }; p3 = { basePos, -arrowheadBase, 0 }; p4 = { basePos, 0, -arrowheadBase };
			}
			else if (axis == 1) {
				apex = { 0, axisLength, 0 }; p1 = { arrowheadBase, basePos, 0 }; p2 = { 0, basePos, arrowheadBase }; p3 = { -arrowheadBase, basePos, 0 }; p4 = { 0, basePos, -arrowheadBase };
			}
			else { apex = { 0, 0, axisLength }; p1 = { arrowheadBase, 0, basePos }; p2 = { 0, arrowheadBase, basePos }; p3 = { -arrowheadBase, 0, basePos }; p4 = { 0, -arrowheadBase, basePos }; }
			Vertex v_apex, v_p1, v_p2, v_p3, v_p4; v_apex.position = apex; v_p1.position = p1; v_p2.position = p2; v_p3.position = p3; v_p4.position = p4; v_apex.color = v_p1.color = v_p2.color = v_p3.color = v_p4.color = color;
			axesVertices.append({ v_apex, v_p1, v_p2 }); axesVertices.append({ v_apex, v_p2, v_p3 }); axesVertices.append({ v_apex, v_p3, v_p4 }); axesVertices.append({ v_apex, v_p4, v_p1 });
			};
		addPyramidArrow(0, { 1,0,0,1 }); addPyramidArrow(1, { 0,1,0,1 }); addPyramidArrow(2, { 0,0,1,1 });
		m_axesVBO.bind(); m_axesVBO.write(0, axesVertices.constData(), axesVertices.size() * sizeof(Vertex)); m_axesVBO.release();
		QOpenGLVertexArrayObject::Binder binder(&*m_axesVAO); glLineWidth(m_axesWidth); glDrawArrays(GL_LINES, 0, 6); glDrawArrays(GL_TRIANGLES, 6, 36);
	}

	_mShaderProgram.release();

	// ===================================================================
	// 4. Paint grid labels using QPainter (Correct Silhouette Logic)
	// ===================================================================
	{
		QPainter painter(this);
		painter.setRenderHint(QPainter::Antialiasing);
		painter.setPen(Qt::darkGray);
		painter.setFont(QFont("Arial", 8));

		QMatrix4x4 mvp = projection * view * model;

		// --- Step 1: Define full box topology ---
		const QVector3D corners[] = {
			{m_gridMinX, m_gridMinY, m_gridMinZ}, {m_gridMaxX, m_gridMinY, m_gridMinZ},
			{m_gridMaxX, m_gridMaxY, m_gridMinZ}, {m_gridMinX, m_gridMaxY, m_gridMinZ},
			{m_gridMinX, m_gridMinY, m_gridMaxZ}, {m_gridMaxX, m_gridMinY, m_gridMaxZ},
			{m_gridMaxX, m_gridMaxY, m_gridMaxZ}, {m_gridMinX, m_gridMaxY, m_gridMaxZ}
		};

		enum Face { Left, Right, Bottom, Top, Back, Front };
		const QVector3D faceNormals[] = {
			{-1,0,0}, {1,0,0}, {0,-1,0}, {0,1,0}, {0,0,-1}, {0,0,1}
		};

		struct EdgeInfo { int v1, v2; Face f1, f2; };
		const EdgeInfo edges[] = {
			{0, 1, Bottom, Back}, {1, 2, Right, Back}, {2, 3, Top, Back}, {3, 0, Left, Back},
			{4, 5, Bottom, Front},{5, 6, Right, Front},{6, 7, Top, Front}, {7, 4, Left, Front},
			{0, 4, Left, Bottom}, {1, 5, Right, Bottom},{2, 6, Right, Top},   {3, 7, Left, Top}
		};

		// --- Step 2: Correctly determine face visibility in World Space ---
		QVector3D worldCameraDirection = (_mViewPos - _mViewAt).normalized();
		bool isFaceVisible[6];
		for (int i = 0; i < 6; ++i) {
			QVector3D worldNormal = _mRotation.rotatedVector(faceNormals[i]);
			isFaceVisible[i] = (QVector3D::dotProduct(worldNormal, worldCameraDirection) > 0);
		}

		// --- Step 3: Find silhouette edges and draw labels ---
		const float labelOffset = m_gridRangeY * 0.04f;
		bool axisTitleDrawn[3] = { false, false, false };

		auto drawLabel = [&](const QVector3D& originalPos, const QString& text) {
			QVector3D normalizedPos((originalPos.x() - _mCenterX) * _mScale, (originalPos.y() - _mCenterY) * _mScale, (originalPos.z() - _mCenterZ) * _mScale);
			QVector3D ndc = mvp.map(normalizedPos);
			if (ndc.z() < -1.0 || ndc.z() > 1.0) return; // Basic clip
			int x = static_cast<int>((ndc.x() + 1.0f) * 0.5f * width());
			int y = static_cast<int>((1.0f - ndc.y()) * 0.5f * height());
			painter.drawText(x - painter.fontMetrics().horizontalAdvance(text) / 2, y + painter.fontMetrics().ascent() / 2, text);
			};

		for (const auto& edge : edges) {
			if (isFaceVisible[edge.f1] != isFaceVisible[edge.f2]) { // The core silhouette logic
				QVector3D p1 = corners[edge.v1];
				QVector3D p2 = corners[edge.v2];

				QVector3D offsetDir = (faceNormals[edge.f1] + faceNormals[edge.f2]).normalized();

				// Determine axis and draw
				if (std::abs(p1.y() - p2.y()) < 1e-5 && std::abs(p1.z() - p2.z()) < 1e-5) { // X-axis
					for (int i = 1; i < m_gridDivisions; ++i) {
						if (i % 2 != 0) continue;
						QVector3D pos = p1 + (p2 - p1) * (static_cast<float>(i) / m_gridDivisions);
						drawLabel(pos + offsetDir * labelOffset, QString::number(pos.x(), 'f', 0));
					}
					if (!axisTitleDrawn[0]) {
						drawLabel(p1 + (p2 - p1) * 0.5 + offsetDir * labelOffset * 2.5, "X (m)");
						axisTitleDrawn[0] = true;
					}
				}
				else if (std::abs(p1.x() - p2.x()) < 1e-5 && std::abs(p1.z() - p2.z()) < 1e-5) { // Y-axis
					for (int i = 1; i < m_gridDivisions; ++i) {
						if (i % 2 != 0) continue;
						QVector3D pos = p1 + (p2 - p1) * (static_cast<float>(i) / m_gridDivisions);
						drawLabel(pos + offsetDir * labelOffset, QString::number(pos.y(), 'f', 0));
					}
					if (!axisTitleDrawn[1]) {
						drawLabel(p1 + (p2 - p1) * 0.5 + offsetDir * labelOffset * 2.5, "Y (m)");
						axisTitleDrawn[1] = true;
					}
				}
				else { // Z-axis
					for (int i = 1; i < m_gridDivisions; ++i) {
						if (i % 2 != 0) continue;
						QVector3D pos = p1 + (p2 - p1) * (static_cast<float>(i) / m_gridDivisions);
						drawLabel(pos + offsetDir * labelOffset, QString::number(pos.z(), 'f', 0));
					}
					if (!axisTitleDrawn[2]) {
						drawLabel(p1 + (p2 - p1) * 0.5 + offsetDir * labelOffset * 2.5, "Elevation (m)");
						axisTitleDrawn[2] = true;
					}
				}
			}
		}
		painter.end();
	}

	// 5. Paint axes widget labels (unchanged)
	{
		// ... (all the code for the "X, Y, Z" labels next to the corner widget)
		QMatrix4x4 axesModel; axesModel.rotate(_mRotation);
		QMatrix4x4 axesView; axesView.translate(-_mAspect * 0.8f, -0.8f, -2.0f);
		QMatrix4x4 axesProjection; axesProjection.ortho(-_mAspect, _mAspect, -1.0f, 1.0f, 0.1f, 100.0f);
		QMatrix4x4 mvp = axesProjection * axesView * axesModel;
		QPainter painter(this);
		painter.setRenderHint(QPainter::Antialiasing); painter.setPen(Qt::black); painter.setFont(QFont("Arial", 10, QFont::Bold));
		const float labelOffset = 0.04f; const float axisLength = 0.15f;
		QVector<QPair<QString, QVector3D>> labels;
		labels.append({ "X", {axisLength + labelOffset, 0, 0} });
		labels.append({ "Y", {0, axisLength + labelOffset, 0} });
		labels.append({ "Z", {0, 0, axisLength + labelOffset} });
		for (const auto& label : labels) {
			QVector3D ndc = mvp.map(label.second);
			int x = static_cast<int>((ndc.x() + 1.0f) * 0.5f * width());
			int y = static_cast<int>((1.0f - ndc.y()) * 0.5f * height());
			painter.drawText(x - painter.fontMetrics().horizontalAdvance(label.first) / 2, y + painter.fontMetrics().ascent() / 2, label.first);
		}
		painter.end();
	}

	glLineWidth(1.0f);

	// 在最后添加色带绘制
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);
	drawColorLegend(painter);
	painter.end();
}
// ... (其他函数 resizeGL, wheelEvent, mouseMoveEvent 等保持不变) ...

void Canvas3D::resizeGL(int w, int h)
{
	_mAspect = h > 0 ? (w / (double)h) : 1.0;
	glViewport(0, 0, w, h);
}

void Canvas3D::wheelEvent(QWheelEvent* event)
{
	double delta = event->angleDelta().y() / 1000.0;
	double zoomFactor = 1.0 + (delta * _mZoomSpeed);
	_mZoom *= zoomFactor;
	update();
}

void Canvas3D::mouseMoveEvent(QMouseEvent* event)
{
	QPoint pos = event->pos();

	if (_mIsFirstMouseEvent) {
		_mLastRotatePos = pos;
		_mLastPanPos = pos;
		_mIsFirstMouseEvent = false;
		return;
	}

	const float dx = pos.x() - _mLastRotatePos.x();
	const float dy = pos.y() - _mLastRotatePos.y();

	if (event->buttons() & Qt::LeftButton) {
		const float sensitivity = 0.5f;
		QQuaternion yRot = QQuaternion::fromAxisAndAngle(QVector3D(0.0f, 1.0f, 0.0f), dx * sensitivity);
		QQuaternion xRot = QQuaternion::fromAxisAndAngle(QVector3D(1.0f, 0.0f, 0.0f), dy * sensitivity);
		_mRotation = (xRot * yRot) * _mRotation;
	}

	if (event->buttons() & Qt::RightButton) {
		const int width = this->width();
		const int height = this->height();
		const float rx = _mTransSpeed / (0.5f * width);
		const float ry = _mTransSpeed / (0.5f * height);
		_mTransX += dx * rx * _mZoom;
		_mTransY -= dy * ry * _mZoom;
	}

	_mLastRotatePos = pos;
	update();
}

void Canvas3D::mousePressEvent(QMouseEvent* event)
{
	_mLastRotatePos = event->pos();
	_mLastPanPos = event->pos();
}

void Canvas3D::checkCameraPosition()
{
	const float minDistance = 0.5f;
	const float maxDistance = 10.0f;
	const float currentDistance = (_mViewPos - _mViewAt).length();

	if (currentDistance < minDistance) {
		_mViewPos = _mViewAt + (_mViewPos - _mViewAt).normalized() * minDistance;
	}
	else if (currentDistance > maxDistance) {
		_mViewPos = _mViewAt + (_mViewPos - _mViewAt).normalized() * maxDistance;
	}
}

void Canvas3D::changColor(QVector4D newColor)
{
	// 获取默认属性名称和范围
	QString defaultField = "Value";
	double minValue = 0.0;
	double maxValue = 1.0;

	if (!_mEntities.isEmpty()) {
		QStringList fields = _mEntities[0].getFileds();
		if (!fields.isEmpty()) {
			defaultField = fields.first();
			minValue = _mEntities[0].getMinValue(defaultField);
			maxValue = _mEntities[0].getMaxValue(defaultField);
		}
	}

	// 发出信号（单色模式）
	emit legendChanged(true, defaultField, newColor, newColor, 1, minValue, maxValue);

	for (int i = 0; i < _mEntities.size(); ++i) {
		_mEntities[i].setVerticesColor(newColor);
		QVector<Vertex> vertices = _mEntities[i].getNormalizeVer();
		_mVBOs[0].bind();
		_mVBOs[0].allocate(vertices.constData(), vertices.size() * sizeof(Vertex));
		_mVBOs[0].release();
	}
	update();
}

void Canvas3D::gradeColor(QVector4D startColor, QVector4D endColor, int steps, QString filed)
{
	// 更新色带参数
	Entity3D& entity = _mEntities[0];
	double minValue = entity.getMinValue(filed);
	double maxValue = entity.getMaxValue(filed);

	// 发出信号
	emit legendChanged(true, filed, startColor, endColor, steps, minValue, maxValue);

	for (int i = 0; i < _mEntities.size(); ++i) {
		int NumVertices = _mEntities[i].getVerticesCount();
		double MinV = _mEntities[i].getMinValue(filed);
		double MaxV = _mEntities[i].getMaxValue(filed);
		double long_s = (MaxV - MinV) / steps;

		float H_s, S_s, L_s;
		RGBToHSL(startColor, H_s, S_s, L_s);
		float H_e, S_e, L_e;
		RGBToHSL(endColor, H_e, S_e, L_e);
		float step1 = (H_e - H_s) / (steps - 1);
		float step2 = (S_e - S_s) / (steps - 1);
		float step3 = (L_e - L_s) / (steps - 1);

		for (int j = 0; j < NumVertices; ++j) {
			double Value = _mEntities[i].getValue(j, filed);
			int i_color = (Value - MinV) / long_s;
			if (Value == MaxV) {
				i_color = i_color - 1;
			}
			float H_n = H_s + step1 * i_color;
			float S_n = S_s + step2 * i_color;
			float L_n = L_s + step3 * i_color;
			QVector4D interpolatedColor = HSLToRGB(H_n, S_n, L_n, 1.0f);
			_mEntities[i].setOneColor(j, interpolatedColor);
		}

		QVector<Vertex> vertices = _mEntities[i].getNormalizeVer();
		_mVBOs[0].bind();
		_mVBOs[0].allocate(vertices.constData(), vertices.size() * sizeof(Vertex));
		_mVBOs[0].release();

		QVector<Vertex> cubevertices = _mEntities[i].getCubeNormalizeVer();
		_mVBOs[1].bind();
		_mVBOs[1].allocate(cubevertices.constData(), cubevertices.size() * sizeof(Vertex));
		_mVBOs[1].release();
	}
	update();
}

void Canvas3D::cubeDraw(int index, double size)
{
	for (int i = 0; i < _mEntities.size(); ++i) {
		_mEntities[i].setGeometryType(index);
	}
	_mSizeCube = size;
	_mEntities[0].setCubeNormalizeVer(_mCenterX, _mCenterY, _mCenterZ, _mScale, _mSizeCube);
	update();
}

void Canvas3D::setNormalizeParamWithEntity(Entity3D entity)
{
	double minx = entity.getMinX();
	double miny = entity.getMinY();
	double minz = entity.getMinZ();
	double maxx = entity.getMaxX();
	double maxy = entity.getMaxY();
	double maxz = entity.getMaxZ();
	_mCenterX = (maxx + minx) / 2;
	_mCenterY = (maxy + miny) / 2;
	_mCenterZ = (maxz + minz) / 2;
	double halfRangeX = maxx - _mCenterX;
	double halfRangeY = maxy - _mCenterY;
	double halfRangeZ = maxz - _mCenterZ;
	double halfRange = 0;
	if (halfRangeX > halfRangeY && halfRangeX > halfRangeZ) {
		halfRange = halfRangeX;
	}
	else if (halfRangeY > halfRangeZ && halfRangeY > halfRangeX) {
		halfRange = halfRangeY;
	}
	else {
		halfRange = halfRangeZ;
	}
	_mScale = 1 / halfRange;
}

QVector4D Canvas3D::HSLToRGB(float Hue, float Saturation, float Lightness, float alpha) {
	Saturation /= 100.0f;
	Lightness /= 100.0f;
	float C = (1 - std::abs(2 * Lightness - 1)) * Saturation;
	float hh = Hue / 60.0;
	float X = C * (1 - std::abs(std::fmod(hh, 2) - 1));
	float r = 0, g = 0, b = 0;
	if (hh >= 0 && hh < 1) { r = C; g = X; }
	else if (hh >= 1 && hh < 2) { r = X; g = C; }
	else if (hh >= 2 && hh < 3) { g = C; b = X; }
	else if (hh >= 3 && hh < 4) { g = X; b = C; }
	else if (hh >= 4 && hh < 5) { r = X; b = C; }
	else if (hh >= 5 && hh < 6) { r = C; b = X; }
	float m = Lightness - C / 2;
	r += m; g += m; b += m;
	return QVector4D(r, g, b, alpha);
}

void Canvas3D::RGBToHSL(const QVector4D& color, float& H, float& S, float& L) {
	float r = color.x();
	float g = color.y();
	float b = color.z();
	float max_rgb = std::max({ r, g, b });
	float min_rgb = std::min({ r, g, b });
	float d = max_rgb - min_rgb;
	if (d == 0) H = 0;
	else if (max_rgb == r) H = std::fmod((g - b) / d, 6);
	else if (max_rgb == g) H = (b - r) / d + 2;
	else H = (r - g) / d + 4;
	H *= 60;
	if (H < 0) H += 360;
	L = (max_rgb + min_rgb) / 2;
	S = (d == 0) ? 0 : d / (1 - std::abs(2 * L - 1));
	S *= 100;
	L *= 100;
}

// 添加色带绘制函数
void Canvas3D::drawColorLegend(QPainter& painter) {
	if (!m_showLegend) return;

	const int legendHeight = 30;  // 色带高度
	const int textHeight = 15;    // 文本高度
	const int padding = 10;       // 边距

	// 计算色带位置（底部居中，占宽度60%）
	int legendWidth = width() * 0.6;
	int legendX = (width() - legendWidth) / 2;
	int legendY = height() - (legendHeight + textHeight * 2 + padding);

	// 绘制属性名称（色带上方）
	painter.setPen(Qt::black);
	painter.setFont(QFont("Arial", 10, QFont::Bold));
	painter.drawText(legendX, legendY, legendWidth, textHeight,
		Qt::AlignCenter, m_legendField);

	// 绘制色带
	int colorBarY = legendY + textHeight;
	float segmentWidth = static_cast<float>(legendWidth) / m_legendSteps;

	for (int i = 0; i < m_legendSteps; ++i) {
		float factor = static_cast<float>(i) / (m_legendSteps - 1);

		// 使用与地图相同的HSL插值方法计算颜色
		QVector4D color = getInterpolatedColor(factor);

		// 绘制色块
		QRectF colorRect(legendX + i * segmentWidth, colorBarY, segmentWidth, legendHeight);
		painter.fillRect(colorRect, QColor::fromRgbF(color.x(), color.y(), color.z()));
	}

	// 绘制色带边框
	painter.setPen(Qt::black);
	painter.drawRect(legendX, colorBarY, legendWidth, legendHeight);

	// 绘制数值标签（色带下方）
	painter.setFont(QFont("Arial", 8));
	for (int i = 0; i <= m_legendSteps; i++) {
		float value = m_legendMinValue + (m_legendMaxValue - m_legendMinValue) *
			(i / static_cast<float>(m_legendSteps));

		int xPos = legendX + i * segmentWidth;
		if (i == m_legendSteps) xPos = legendX + legendWidth;

		// 绘制刻度
		painter.drawLine(xPos, colorBarY + legendHeight,
			xPos, colorBarY + legendHeight + 5);

		// 绘制数值
		QString valueText = QString::number(value, 'f', 1);
		QRect textRect(xPos - 20, colorBarY + legendHeight + 5,
			40, textHeight);
		painter.drawText(textRect, Qt::AlignCenter, valueText);
	}
}
// 添加辅助函数 - 使用与地图相同的HSL插值方法
QVector4D Canvas3D::getInterpolatedColor(float factor) {
	// 使用与地图渲染相同的HSL插值算法
	float H_s, S_s, L_s;
	RGBToHSL(m_legendStartColor, H_s, S_s, L_s);
	float H_e, S_e, L_e;
	RGBToHSL(m_legendEndColor, H_e, S_e, L_e);

	float H_n = H_s + factor * (H_e - H_s);
	float S_n = S_s + factor * (S_e - S_s);
	float L_n = L_s + factor * (L_e - L_s);

	return HSLToRGB(H_n, S_n, L_n, 1.0f);
}