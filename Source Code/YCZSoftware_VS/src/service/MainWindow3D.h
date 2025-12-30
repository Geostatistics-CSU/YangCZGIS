#pragma once

#include <QMainWindow>
#include <qgsdockwidget.h>
#include <json.h>
#include <QColorDialog>
#include <QSplitter>

#include "ui_MainWindow3D.h"
#include "Canvas3DService.h"
#include "FileLoadingService.h"
#include "ColorGradientWidget.h"
#include "CubeDialog.h"
#include "ColorLegendWidget.h"

class MainWindow3D : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow3D(Entity3D entity3d, Json::Value config, QWidget *parent = nullptr);
	~MainWindow3D();
	
	void updateColorLegend(bool show, const QString& field,
		const QVector4D& startColor, const QVector4D& endColor,
		int steps, double minValue, double maxValue);

private:
	Ui::MainWindow3DClass ui;
	Json::Value _mConfig;

	QgsDockWidget* _mLayerDock;
	QSplitter* _mMainSplitter;
	//QTabWidget* _mCenterTabWidget;
	Canvas3D* _mCanvas3D;
	ColorLegendWidget* _mColorLegendWidget;

	QList<Entity3D> entities;
	

	void initUi();
	bool onActionImport3DTriggered();
	void onActionColor();
	void onActionGrade();
	void onActionCube();

	void GradeColor(QColor begin_color, QColor end_color, int steps, QString name);
};
