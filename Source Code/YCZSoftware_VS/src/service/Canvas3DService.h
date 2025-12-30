#pragma once

#include <QOpenGLWidget>
#include <QOpenGLExtraFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QMouseEvent>

#include "../entity/Entity3D.h"
#include "ui_Canvas3DService.h"

#include <math.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Canvas3DServiceClass; };
QT_END_NAMESPACE


class Canvas3D : public QOpenGLWidget, protected QOpenGLExtraFunctions
{
	Q_OBJECT

public:
	Canvas3D(Entity3D entity, QWidget* parent = nullptr);
	~Canvas3D();

	void changColor(QVector4D newColor);
	void gradeColor(QVector4D startColor, QVector4D endColor, int steps, QString filed);

public slots:
	void cubeDraw(int index, double size);


protected:
	virtual void initializeGL() override;
	virtual void paintGL() override;
	virtual void resizeGL(int w, int h) override;

	void wheelEvent(QWheelEvent* event) override;
	void mouseMoveEvent(QMouseEvent* event) override;
	void mousePressEvent(QMouseEvent* event) override;

	void checkCameraPosition();
	void RGBToHSL(const QVector4D& color, float& H, float& S, float& L);
	QVector4D HSLToRGB(float Hue, float Saturation, float Lightness, float alpha);

private:
	Ui::Canvas3DServiceClass* ui;
	QOpenGLShaderProgram _mShaderProgram;
	QVector<std::shared_ptr<QOpenGLVertexArrayObject>> _mVAOs;
	QVector<QOpenGLBuffer> _mVBOs;
	QVector<QOpenGLBuffer> _mEBOs;
	QVector<Entity3D> _mEntities;

	QVector3D _mViewPos;
	QVector3D _mViewAt;
	QVector3D _mViewUp;

	double _mSizeCube;
	double _mAspect;
	double _mFov;
	double _mZNear;
	double _mZFar;

	double _mCenterX;
	double _mCenterY;
	double _mCenterZ;
	double _mScale;

	float _mRotSpeed;
	float _mTransSpeed;
	float _mZoomSpeed;
	float _mRotX;
	float _mRotY;
	float _mZoom;
	float _mTransX;
	float _mTransY;

	QPoint _mLastPos;
	float _mLastZoom;

	void setNormalizeParamWithEntity(Entity3D entity);

	QQuaternion _mRotation;
	QVector3D _mRotationCenter;

	QPoint _mLastRotatePos;
	QPoint _mLastPanPos;
	bool _mIsFirstMouseEvent;
signals:
	void legendChanged(bool show, const QString& field,
		const QVector4D& startColor, const QVector4D& endColor,
		int steps, double minValue, double maxValue);
private:
	// === 更新/新增内容开始 ===

	// 使用枚举来清晰地标识格网的各个部分
	enum GridPart {
		Left, Right, Bottom, Top, Back, Front,
		Count // 用于获取总数, 现在为6
	};

	// 新增结构体，用于存储格网标签信息
	struct GridLabel {
		QString text;
		QVector3D position; // 归一化后的3D位置
	};

	// 为格网的每个部分创建独立的VAO和VBO
	std::vector<std::shared_ptr<QOpenGLVertexArrayObject>> m_gridVAOs;
	std::vector<QOpenGLBuffer> m_gridVBOs;
	std::vector<QVector<Vertex>> m_gridPartsVertices;


	// 为坐标轴创建独立的VAO/VBO
	std::shared_ptr<QOpenGLVertexArrayObject> m_axesVAO;
	QOpenGLBuffer m_axesVBO;

	// 统一定义样式，方便修改
	QVector4D m_gridBorderColor;
	QVector4D m_gridInnerColor;
	float m_gridBorderWidth;
	float m_gridInnerWidth;
	float m_axesWidth;

	// === 新增内容: 存储格网的原始（非归一化）坐标范围 ===
	float m_gridMinX, m_gridMaxX, m_gridRangeX;
	float m_gridMinY, m_gridMaxY, m_gridRangeY;
	float m_gridMinZ, m_gridMaxZ, m_gridRangeZ;
	int m_gridDivisions; // 保存格网分段数

	// 创建几何体的辅助函数
	void createGridGeometry();

	// 色带相关成员
	bool m_showLegend = false;                   // 是否显示色带
	QString m_legendField;                       // 当前展示的属性名称
	QVector4D m_legendStartColor;                // 色带起始颜色
	QVector4D m_legendEndColor;                  // 色带结束颜色
	int m_legendSteps = 5;                       // 分类数量
	double m_legendMinValue = 0.0;               // 最小值
	double m_legendMaxValue = 1.0;               // 最大值

	// 绘制色带方法
	void drawColorLegend(QPainter& painter);

	// 辅助函数：计算渐变中的颜色（使用与地图相同的HSL插值）
	QVector4D getInterpolatedColor(float factor);
	// === 更新/新增内容结束 ===
};