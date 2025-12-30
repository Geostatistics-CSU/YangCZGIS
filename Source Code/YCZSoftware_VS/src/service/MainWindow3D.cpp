#include "MainWindow3D.h"
#include <QMessageBox>
#include "../macro.h"
#include <QVBoxLayout>

MainWindow3D::MainWindow3D(Entity3D entity3d, Json::Value config, QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->_mConfig = config;
	this->entities.push_back(entity3d);
	this->initUi();
}

MainWindow3D::~MainWindow3D()
{}


void MainWindow3D::initUi()
{
	QString iconDir = "./icon/3D/";

	ui.actionImport3D->setIcon(QIcon(iconDir + "Action_Open_32x32.png"));
	ui.actionUnset->setIcon(QIcon(iconDir + "SelectTool_32x32.png"));
	ui.actionPan->setIcon(QIcon(iconDir + "PanTool32.png"));
	ui.actionZoomIn->setIcon(QIcon(iconDir + "ZoomInTool32.png"));
	ui.actionZoomOut->setIcon(QIcon(iconDir + "ZoomOutTool32.png"));
	ui.actioncolor->setIcon(QIcon(iconDir + "Colors_32x32.png"));
	ui.actionmore->setIcon(QIcon(iconDir + "BlueWhiteRed_32x32.png"));
	ui.actioncube->setIcon(QIcon(iconDir + "3DFullStackedArea_32x32.png"));

	// set window size
	this->setGeometry(this->_mConfig[X_LOCATION].asInt(),
		this->_mConfig[Y_LOCATION].asInt(),
		this->_mConfig[WIDTH].asInt(),
		this->_mConfig[HEIGHT].asInt());

	this->setWindowTitle(this->_mConfig[TITLE].asCString());  // set title

	/*
	// create left dock
	this->_mLayerDock = new QgsDockWidget(this);
	this->_mLayerDock->setWindowTitle(this->_mConfig[LAYER_DOCK_3D_TITLE].asCString());
	this->_mLayerDock->setObjectName(this->_mConfig[LAYER_DOCK_3D_OBJ_NAME].asCString());
	this->addDockWidget(Qt::LeftDockWidgetArea, this->_mLayerDock);
	// Set minimum and maximum width for the dock
	this->_mLayerDock->setMinimumWidth(300);  // Adjust with your desired minimum width
	this->_mLayerDock->setMaximumWidth(1000);  // Adjust with your desired maximum width
	*/

	// create container of 3D canvas
	///this->_mCenterTabWidget = new QTabWidget(this);

	// create 3D canvas
	Json::Value canvas3DConfig = this->_mConfig[OSG_WIDGET];
	///this->_mCanvas3D = new Canvas3D(this->entities[0], this);

	// add 3D canvas to container
	///this->_mCenterTabWidget->addTab(this->_mCanvas3D, this->_mConfig[MAP_VIEW_TITLE].asCString());
	///this->setCentralWidget(this->_mCenterTabWidget);



	this->connect(ui.actionImport3D, &QAction::triggered, this, &MainWindow3D::onActionImport3DTriggered);
	this->connect(ui.actioncolor, &QAction::triggered, this, &MainWindow3D::onActionColor);
	this->connect(ui.actionmore, &QAction::triggered, this, &MainWindow3D::onActionGrade);
	this->connect(ui.actioncube, &QAction::triggered, this, &MainWindow3D::onActionCube);

	// 创建主分割器（垂直方向）
	_mMainSplitter = new QSplitter(Qt::Vertical, this);

	// 创建3D画布容器
	QWidget* canvasContainer = new QWidget(_mMainSplitter);
	QVBoxLayout* canvasLayout = new QVBoxLayout(canvasContainer);
	canvasLayout->setContentsMargins(0, 0, 0, 0);

	// 创建3D画布
	_mCanvas3D = new Canvas3D(this->entities[0], canvasContainer);
	canvasLayout->addWidget(_mCanvas3D);
	_mMainSplitter->addWidget(canvasContainer);

	// 创建色带部件
	_mColorLegendWidget = new ColorLegendWidget(_mMainSplitter);
	_mColorLegendWidget->setMinimumHeight(20); // 设置最小高度
	_mMainSplitter->addWidget(_mColorLegendWidget);

	// 设置分割器比例（地图占80%，色带占20%）
	QList<int> sizes;
	sizes << static_cast<int>(this->height() * 0.88)
		<< static_cast<int>(this->height() * 0.12);
	_mMainSplitter->setSizes(sizes);

	// 设置中心部件
	this->setCentralWidget(_mMainSplitter);
	// 连接Canvas3D的色带更新信号
	connect(_mCanvas3D, &Canvas3D::legendChanged,
		this, &MainWindow3D::updateColorLegend);
}

bool MainWindow3D::onActionImport3DTriggered()
{
	QStringList lyrFileList = FileLoadingService::open3DFileSelectDialog(this->_mConfig[OPEN_VEC_3D_DIALOG_TITLE].asCString(),
		this->_mConfig[VEC_3D_FILTER_NAME].asCString(), this);
	if (lyrFileList.size() <= 0) return false;
	for (QString path : lyrFileList) {
		path = path.trimmed();
		//this->_mCanvas3D->add3DObj(path);
	}
	return true;
}

void MainWindow3D::onActionColor()
{
	//ColorStyleWidget* color = new ColorStyleWidget(this);
	//color->show();
	QColor color = QColorDialog::getColor(Qt::red, this, tr(u8"颜色"));

	float red = color.redF();
	float green = color.greenF();
	float blue = color.blueF();
	float alpha = color.alphaF();

	QVector4D newColor(red, green, blue, alpha);

	if (color.isValid())
	{
		this->_mCanvas3D->changColor(newColor);
	}

}

void MainWindow3D::onActionGrade()
{
	QStringList fileds = this->entities[0].getFileds();

	ColorGradientWidget* color_grade = new ColorGradientWidget(fileds, this);
	color_grade->show();

	this->connect(color_grade, &ColorGradientWidget::sendGradColor,
		this, &MainWindow3D::GradeColor);
}

void MainWindow3D::onActionCube()
{
	CubeDialog* cube = new CubeDialog(this);
	cube->show();

	this->connect(cube, &CubeDialog::SendCube, _mCanvas3D, &Canvas3D::cubeDraw);
}

void MainWindow3D::GradeColor(QColor begin_color, QColor end_color, int steps, QString name)
{
	// 添加保护逻辑
	if (steps <= 0) {
		qWarning() << "Invalid steps received:" << steps;
		steps = 10; // 设置安全默认值
	}

	float red_s = begin_color.redF();
	float green_s = begin_color.greenF();
	float blue_s = begin_color.blueF();
	float alpha_s = begin_color.alphaF();
	QVector4D startColor(red_s, green_s, blue_s, alpha_s);

	float red_e = end_color.redF();
	float green_e = end_color.greenF();
	float blue_e = end_color.blueF();
	float alpha_e = end_color.alphaF();
	QVector4D endColor(red_e, green_e, blue_e, alpha_e);

	QString Field = name;
	// 传递属性名称到Canvas3D
	this->_mCanvas3D->gradeColor(startColor, endColor, steps, name);
}
void MainWindow3D::updateColorLegend(bool show, const QString& field,
	const QVector4D& startColor, const QVector4D& endColor,
	int steps, double minValue, double maxValue)
{
	_mColorLegendWidget->updateLegend(show, field, startColor, endColor, steps, minValue, maxValue);
}
