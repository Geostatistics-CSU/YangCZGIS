/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YCZSoftware_VSClass
{
public:
    QAction *actionOpen;
    QAction *actionImportXYZ;
    QAction *actionImportShp;
    QAction *actionOpen3DWindow;
    QAction *actionGYCZ;
    QAction *actionNormalKriging;
    QAction *actionUniversalKriging;
    QAction *actionCoKriging;
    QAction *actionRegressionKriging;
    QAction *actionYCZF;
    QAction *actionCoYCZ;
    QAction *actionSTYCZ;
    QAction *actionSTCoYCZ;
    QAction *actionNonlinearYCZ;
    QAction *actionPan;
    QAction *actionZoomOut;
    QAction *actionZoomFull;
    QAction *actionMeasure;
    QAction *actionZoomIn;
    QAction *actionUnset;
    QAction *actionShowTable;
    QAction *actionSerchSQL;
    QAction *actionFeatureInfo;
    QAction *actionEmitPoint;
    QAction *actionClearSelect;
    QAction *actionSelectPoint;
    QAction *actionSelectVector;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionCreatRster;
    QAction *actionCheckAccuracy;
    QAction *actionTo_be_developed;
    QAction *actionHistogram;
    QAction *actionQQ_Plot;
    QAction *actionBox_Plot;
    QAction *actionLog_Transform;
    QAction *actionAmoeba_G;
    QAction *actionCorrelation_Analysis;
    QAction *actionInverse_Log_Transform;
    QAction *actionOrdinary_YCZ;
    QAction *actionHTMSCAN;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuImport;
    QMenu *menu3D;
    QMenu *menuYCZ;
    QMenu *menuKriging;
    QMenu *menu;
    QMenu *menuHelp;
    QMenu *menuESDA;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *YCZSoftware_VSClass)
    {
        if (YCZSoftware_VSClass->objectName().isEmpty())
            YCZSoftware_VSClass->setObjectName(QString::fromUtf8("YCZSoftware_VSClass"));
        YCZSoftware_VSClass->resize(1056, 393);
        YCZSoftware_VSClass->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(9);
        YCZSoftware_VSClass->setFont(font);
        YCZSoftware_VSClass->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../ycz_l.png"), QSize(), QIcon::Normal, QIcon::Off);
        YCZSoftware_VSClass->setWindowIcon(icon);
        YCZSoftware_VSClass->setIconSize(QSize(20, 20));
        actionOpen = new QAction(YCZSoftware_VSClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setFont(font);
        actionOpen->setPriority(QAction::NormalPriority);
        actionImportXYZ = new QAction(YCZSoftware_VSClass);
        actionImportXYZ->setObjectName(QString::fromUtf8("actionImportXYZ"));
        actionImportXYZ->setFont(font);
        actionImportShp = new QAction(YCZSoftware_VSClass);
        actionImportShp->setObjectName(QString::fromUtf8("actionImportShp"));
        actionImportShp->setFont(font);
        actionOpen3DWindow = new QAction(YCZSoftware_VSClass);
        actionOpen3DWindow->setObjectName(QString::fromUtf8("actionOpen3DWindow"));
        actionOpen3DWindow->setFont(font);
        actionGYCZ = new QAction(YCZSoftware_VSClass);
        actionGYCZ->setObjectName(QString::fromUtf8("actionGYCZ"));
        actionNormalKriging = new QAction(YCZSoftware_VSClass);
        actionNormalKriging->setObjectName(QString::fromUtf8("actionNormalKriging"));
        actionUniversalKriging = new QAction(YCZSoftware_VSClass);
        actionUniversalKriging->setObjectName(QString::fromUtf8("actionUniversalKriging"));
        actionCoKriging = new QAction(YCZSoftware_VSClass);
        actionCoKriging->setObjectName(QString::fromUtf8("actionCoKriging"));
        actionRegressionKriging = new QAction(YCZSoftware_VSClass);
        actionRegressionKriging->setObjectName(QString::fromUtf8("actionRegressionKriging"));
        actionYCZF = new QAction(YCZSoftware_VSClass);
        actionYCZF->setObjectName(QString::fromUtf8("actionYCZF"));
        actionCoYCZ = new QAction(YCZSoftware_VSClass);
        actionCoYCZ->setObjectName(QString::fromUtf8("actionCoYCZ"));
        actionSTYCZ = new QAction(YCZSoftware_VSClass);
        actionSTYCZ->setObjectName(QString::fromUtf8("actionSTYCZ"));
        actionSTCoYCZ = new QAction(YCZSoftware_VSClass);
        actionSTCoYCZ->setObjectName(QString::fromUtf8("actionSTCoYCZ"));
        actionNonlinearYCZ = new QAction(YCZSoftware_VSClass);
        actionNonlinearYCZ->setObjectName(QString::fromUtf8("actionNonlinearYCZ"));
        actionPan = new QAction(YCZSoftware_VSClass);
        actionPan->setObjectName(QString::fromUtf8("actionPan"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("D:/GIS_todo/ArcGIS\345\233\276\346\240\207/ArcGIS/PanTool32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPan->setIcon(icon1);
        actionZoomOut = new QAction(YCZSoftware_VSClass);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/ZoomOut_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon2);
        actionZoomFull = new QAction(YCZSoftware_VSClass);
        actionZoomFull->setObjectName(QString::fromUtf8("actionZoomFull"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/FullExtent_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomFull->setIcon(icon3);
        actionMeasure = new QAction(YCZSoftware_VSClass);
        actionMeasure->setObjectName(QString::fromUtf8("actionMeasure"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/RulerHorizontal_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMeasure->setIcon(icon4);
        actionZoomIn = new QAction(YCZSoftware_VSClass);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/ZoomIn_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon5);
        actionUnset = new QAction(YCZSoftware_VSClass);
        actionUnset->setObjectName(QString::fromUtf8("actionUnset"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/Pointer_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnset->setIcon(icon6);
        actionShowTable = new QAction(YCZSoftware_VSClass);
        actionShowTable->setObjectName(QString::fromUtf8("actionShowTable"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/Table_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowTable->setIcon(icon7);
        actionSerchSQL = new QAction(YCZSoftware_VSClass);
        actionSerchSQL->setObjectName(QString::fromUtf8("actionSerchSQL"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/TableProperties_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSerchSQL->setIcon(icon8);
        actionFeatureInfo = new QAction(YCZSoftware_VSClass);
        actionFeatureInfo->setObjectName(QString::fromUtf8("actionFeatureInfo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/Info_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFeatureInfo->setIcon(icon9);
        actionEmitPoint = new QAction(YCZSoftware_VSClass);
        actionEmitPoint->setObjectName(QString::fromUtf8("actionEmitPoint"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/GeoPoint_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmitPoint->setIcon(icon10);
        actionClearSelect = new QAction(YCZSoftware_VSClass);
        actionClearSelect->setObjectName(QString::fromUtf8("actionClearSelect"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/No_Border_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearSelect->setIcon(icon11);
        actionSelectPoint = new QAction(YCZSoftware_VSClass);
        actionSelectPoint->setObjectName(QString::fromUtf8("actionSelectPoint"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/Point_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectPoint->setIcon(icon12);
        actionSelectVector = new QAction(YCZSoftware_VSClass);
        actionSelectVector->setObjectName(QString::fromUtf8("actionSelectVector"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/SelectAll_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectVector->setIcon(icon13);
        actionNew = new QAction(YCZSoftware_VSClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        actionNew->setFont(font1);
        actionSave = new QAction(YCZSoftware_VSClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSaveAs = new QAction(YCZSoftware_VSClass);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionExit = new QAction(YCZSoftware_VSClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(YCZSoftware_VSClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCreatRster = new QAction(YCZSoftware_VSClass);
        actionCreatRster->setObjectName(QString::fromUtf8("actionCreatRster"));
        actionCheckAccuracy = new QAction(YCZSoftware_VSClass);
        actionCheckAccuracy->setObjectName(QString::fromUtf8("actionCheckAccuracy"));
        actionTo_be_developed = new QAction(YCZSoftware_VSClass);
        actionTo_be_developed->setObjectName(QString::fromUtf8("actionTo_be_developed"));
        actionHistogram = new QAction(YCZSoftware_VSClass);
        actionHistogram->setObjectName(QString::fromUtf8("actionHistogram"));
        actionQQ_Plot = new QAction(YCZSoftware_VSClass);
        actionQQ_Plot->setObjectName(QString::fromUtf8("actionQQ_Plot"));
        actionBox_Plot = new QAction(YCZSoftware_VSClass);
        actionBox_Plot->setObjectName(QString::fromUtf8("actionBox_Plot"));
        actionLog_Transform = new QAction(YCZSoftware_VSClass);
        actionLog_Transform->setObjectName(QString::fromUtf8("actionLog_Transform"));
        actionAmoeba_G = new QAction(YCZSoftware_VSClass);
        actionAmoeba_G->setObjectName(QString::fromUtf8("actionAmoeba_G"));
        actionCorrelation_Analysis = new QAction(YCZSoftware_VSClass);
        actionCorrelation_Analysis->setObjectName(QString::fromUtf8("actionCorrelation_Analysis"));
        actionInverse_Log_Transform = new QAction(YCZSoftware_VSClass);
        actionInverse_Log_Transform->setObjectName(QString::fromUtf8("actionInverse_Log_Transform"));
        actionOrdinary_YCZ = new QAction(YCZSoftware_VSClass);
        actionOrdinary_YCZ->setObjectName(QString::fromUtf8("actionOrdinary_YCZ"));
        actionHTMSCAN = new QAction(YCZSoftware_VSClass);
        actionHTMSCAN->setObjectName(QString::fromUtf8("actionHTMSCAN"));
        centralwidget = new QWidget(YCZSoftware_VSClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        YCZSoftware_VSClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(YCZSoftware_VSClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1056, 25));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font2.setPointSize(10);
        menubar->setFont(font2);
        menubar->setFocusPolicy(Qt::NoFocus);
        menubar->setContextMenuPolicy(Qt::DefaultContextMenu);
        menubar->setLayoutDirection(Qt::LeftToRight);
        menubar->setStyleSheet(QString::fromUtf8(""));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setGeometry(QRect(329, 335, 120, 200));
        menuImport = new QMenu(menuFile);
        menuImport->setObjectName(QString::fromUtf8("menuImport"));
        menuImport->setFont(font);
        menu3D = new QMenu(menubar);
        menu3D->setObjectName(QString::fromUtf8("menu3D"));
        menuYCZ = new QMenu(menubar);
        menuYCZ->setObjectName(QString::fromUtf8("menuYCZ"));
        menuKriging = new QMenu(menubar);
        menuKriging->setObjectName(QString::fromUtf8("menuKriging"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuESDA = new QMenu(menubar);
        menuESDA->setObjectName(QString::fromUtf8("menuESDA"));
        YCZSoftware_VSClass->setMenuBar(menubar);
        statusbar = new QStatusBar(YCZSoftware_VSClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        YCZSoftware_VSClass->setStatusBar(statusbar);
        toolBar = new QToolBar(YCZSoftware_VSClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(26, 26));
        YCZSoftware_VSClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menuESDA->menuAction());
        menubar->addAction(menuKriging->menuAction());
        menubar->addAction(menuYCZ->menuAction());
        menubar->addAction(menu3D->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(menuImport->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuImport->addAction(actionImportXYZ);
        menuImport->addAction(actionImportShp);
        menu3D->addAction(actionOpen3DWindow);
        menuYCZ->addAction(actionOrdinary_YCZ);
        menuYCZ->addAction(actionGYCZ);
        menuYCZ->addAction(actionCoYCZ);
        menuYCZ->addAction(actionSTYCZ);
        menuYCZ->addAction(actionSTCoYCZ);
        menuYCZ->addAction(actionNonlinearYCZ);
        menuKriging->addAction(actionNormalKriging);
        menuKriging->addAction(actionUniversalKriging);
        menuKriging->addAction(actionCoKriging);
        menuKriging->addAction(actionRegressionKriging);
        menu->addAction(actionLog_Transform);
        menu->addAction(actionInverse_Log_Transform);
        menu->addSeparator();
        menu->addAction(actionCorrelation_Analysis);
        menu->addSeparator();
        menu->addAction(actionYCZF);
        menuHelp->addAction(actionAbout);
        menuESDA->addAction(actionHistogram);
        menuESDA->addAction(actionQQ_Plot);
        menuESDA->addAction(actionBox_Plot);
        menuESDA->addSeparator();
        menuESDA->addAction(actionAmoeba_G);
        menuESDA->addAction(actionHTMSCAN);
        menuESDA->addSeparator();
        toolBar->addAction(actionImportShp);
        toolBar->addSeparator();
        toolBar->addAction(actionUnset);
        toolBar->addAction(actionPan);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionZoomFull);
        toolBar->addSeparator();
        toolBar->addAction(actionShowTable);
        toolBar->addAction(actionEmitPoint);
        toolBar->addAction(actionFeatureInfo);
        toolBar->addAction(actionClearSelect);

        retranslateUi(YCZSoftware_VSClass);

        QMetaObject::connectSlotsByName(YCZSoftware_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *YCZSoftware_VSClass)
    {
        YCZSoftware_VSClass->setWindowTitle(QCoreApplication::translate("YCZSoftware_VSClass", "YCZSoftware_VS", nullptr));
        actionOpen->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Open", nullptr));
        actionImportXYZ->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Import csv/txt data", nullptr));
#if QT_CONFIG(tooltip)
        actionImportXYZ->setToolTip(QCoreApplication::translate("YCZSoftware_VSClass", "\345\257\274\345\205\245csv/txt", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImportShp->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Import layer data", nullptr));
        actionOpen3DWindow->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Open 3D Window", nullptr));
        actionGYCZ->setText(QCoreApplication::translate("YCZSoftware_VSClass", "GYangCZ", nullptr));
        actionNormalKriging->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Normal Kriging", nullptr));
        actionUniversalKriging->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Universal Kriging", nullptr));
        actionCoKriging->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Co-Kriging", nullptr));
        actionRegressionKriging->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Regression Kriging", nullptr));
        actionYCZF->setText(QCoreApplication::translate("YCZSoftware_VSClass", "YCZ Filter", nullptr));
        actionCoYCZ->setText(QCoreApplication::translate("YCZSoftware_VSClass", "CoYangCZ", nullptr));
        actionSTYCZ->setText(QCoreApplication::translate("YCZSoftware_VSClass", "STYangCZ", nullptr));
        actionSTCoYCZ->setText(QCoreApplication::translate("YCZSoftware_VSClass", "STCoYangCZ", nullptr));
        actionNonlinearYCZ->setText(QCoreApplication::translate("YCZSoftware_VSClass", "NYangCZ", nullptr));
        actionPan->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Pan", nullptr));
#if QT_CONFIG(tooltip)
        actionPan->setToolTip(QCoreApplication::translate("YCZSoftware_VSClass", "Pan", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomOut->setText(QCoreApplication::translate("YCZSoftware_VSClass", "ZoomOut", nullptr));
        actionZoomFull->setText(QCoreApplication::translate("YCZSoftware_VSClass", "ZoomFull", nullptr));
        actionMeasure->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Measure", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("YCZSoftware_VSClass", "ZoomIn", nullptr));
        actionUnset->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Unset", nullptr));
        actionShowTable->setText(QCoreApplication::translate("YCZSoftware_VSClass", "ShowTable", nullptr));
        actionSerchSQL->setText(QCoreApplication::translate("YCZSoftware_VSClass", "SerchSQL", nullptr));
        actionFeatureInfo->setText(QCoreApplication::translate("YCZSoftware_VSClass", "FeatureInfo", nullptr));
        actionEmitPoint->setText(QCoreApplication::translate("YCZSoftware_VSClass", "EmitPoint", nullptr));
        actionClearSelect->setText(QCoreApplication::translate("YCZSoftware_VSClass", "ClearSelect", nullptr));
        actionSelectPoint->setText(QCoreApplication::translate("YCZSoftware_VSClass", "SelectPoint", nullptr));
        actionSelectVector->setText(QCoreApplication::translate("YCZSoftware_VSClass", "SelectVector", nullptr));
        actionNew->setText(QCoreApplication::translate("YCZSoftware_VSClass", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Save", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("YCZSoftware_VSClass", "SaveAs", nullptr));
        actionExit->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("YCZSoftware_VSClass", "Exit", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("YCZSoftware_VSClass", "About", nullptr));
        actionCreatRster->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Creat Rster", nullptr));
        actionCheckAccuracy->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Check Accuracy", nullptr));
        actionTo_be_developed->setText(QCoreApplication::translate("YCZSoftware_VSClass", "To be developed", nullptr));
        actionHistogram->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Histogram", nullptr));
        actionQQ_Plot->setText(QCoreApplication::translate("YCZSoftware_VSClass", "QQ Plot", nullptr));
        actionBox_Plot->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Box Plot", nullptr));
        actionLog_Transform->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Log Transform", nullptr));
        actionAmoeba_G->setText(QCoreApplication::translate("YCZSoftware_VSClass", "AMOEBA", nullptr));
        actionCorrelation_Analysis->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Correlation Analysis", nullptr));
        actionInverse_Log_Transform->setText(QCoreApplication::translate("YCZSoftware_VSClass", "Inverse Log Transform", nullptr));
        actionOrdinary_YCZ->setText(QCoreApplication::translate("YCZSoftware_VSClass", "OYangCZ", nullptr));
        actionHTMSCAN->setText(QCoreApplication::translate("YCZSoftware_VSClass", "HTMSCAN", nullptr));
        menuFile->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "Project", nullptr));
        menuImport->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "Import", nullptr));
        menu3D->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "3DAnalyst", nullptr));
        menuYCZ->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "YangCZ", nullptr));
        menuKriging->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "Kriging", nullptr));
        menu->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "Tool", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "Help", nullptr));
        menuESDA->setTitle(QCoreApplication::translate("YCZSoftware_VSClass", "ESDA", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("YCZSoftware_VSClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YCZSoftware_VSClass: public Ui_YCZSoftware_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
