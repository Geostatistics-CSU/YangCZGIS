/********************************************************************************
** Form generated from reading UI file 'MainWindow3D.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3D_H
#define UI_MAINWINDOW3D_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3DClass
{
public:
    QAction *actionImport3D;
    QAction *actionUnset;
    QAction *actionPan;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actioncolor;
    QAction *actionmore;
    QAction *actioncube;
    QWidget *centralWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow3DClass)
    {
        if (MainWindow3DClass->objectName().isEmpty())
            MainWindow3DClass->setObjectName(QString::fromUtf8("MainWindow3DClass"));
        MainWindow3DClass->resize(600, 400);
        actionImport3D = new QAction(MainWindow3DClass);
        actionImport3D->setObjectName(QString::fromUtf8("actionImport3D"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/Action_Open_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport3D->setIcon(icon);
        actionUnset = new QAction(MainWindow3DClass);
        actionUnset->setObjectName(QString::fromUtf8("actionUnset"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/SelectTool_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnset->setIcon(icon1);
        actionPan = new QAction(MainWindow3DClass);
        actionPan->setObjectName(QString::fromUtf8("actionPan"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("D:/GIS_todo/ArcGIS\345\233\276\346\240\207/ArcGIS/PanTool32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPan->setIcon(icon2);
        actionZoomIn = new QAction(MainWindow3DClass);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("D:/GIS_todo/ArcGIS\345\233\276\346\240\207/ArcGIS/ZoomInTool32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon3);
        actionZoomOut = new QAction(MainWindow3DClass);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("D:/GIS_todo/ArcGIS\345\233\276\346\240\207/ArcGIS/ZoomOutTool32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon4);
        actioncolor = new QAction(MainWindow3DClass);
        actioncolor->setObjectName(QString::fromUtf8("actioncolor"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/Colors_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncolor->setIcon(icon5);
        actionmore = new QAction(MainWindow3DClass);
        actionmore->setObjectName(QString::fromUtf8("actionmore"));
        actioncube = new QAction(MainWindow3DClass);
        actioncube->setObjectName(QString::fromUtf8("actioncube"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/3DFullStackedArea_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncube->setIcon(icon6);
        centralWidget = new QWidget(MainWindow3DClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow3DClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow3DClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(30, 30));
        MainWindow3DClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow3DClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow3DClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow3DClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        MainWindow3DClass->setMenuBar(menuBar);

        mainToolBar->addAction(actionImport3D);
        mainToolBar->addAction(actionUnset);
        mainToolBar->addAction(actionPan);
        mainToolBar->addAction(actionZoomIn);
        mainToolBar->addAction(actionZoomOut);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actioncolor);
        mainToolBar->addAction(actionmore);
        mainToolBar->addAction(actioncube);

        retranslateUi(MainWindow3DClass);

        QMetaObject::connectSlotsByName(MainWindow3DClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3DClass)
    {
        MainWindow3DClass->setWindowTitle(QCoreApplication::translate("MainWindow3DClass", "MainWindow3D", nullptr));
        actionImport3D->setText(QCoreApplication::translate("MainWindow3DClass", "Import 3D Data", nullptr));
        actionUnset->setText(QCoreApplication::translate("MainWindow3DClass", "Unset", nullptr));
#if QT_CONFIG(tooltip)
        actionUnset->setToolTip(QCoreApplication::translate("MainWindow3DClass", "Unset", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPan->setText(QCoreApplication::translate("MainWindow3DClass", "Pan", nullptr));
#if QT_CONFIG(tooltip)
        actionPan->setToolTip(QCoreApplication::translate("MainWindow3DClass", "Pan", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomIn->setText(QCoreApplication::translate("MainWindow3DClass", "ZoomIn", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("MainWindow3DClass", "ZoomIn", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow3DClass", "ZoomOut", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("MainWindow3DClass", "ZoomOut", nullptr));
#endif // QT_CONFIG(tooltip)
        actioncolor->setText(QCoreApplication::translate("MainWindow3DClass", "color", nullptr));
        actionmore->setText(QCoreApplication::translate("MainWindow3DClass", "more", nullptr));
        actioncube->setText(QCoreApplication::translate("MainWindow3DClass", "cube", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3DClass: public Ui_MainWindow3DClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3D_H
