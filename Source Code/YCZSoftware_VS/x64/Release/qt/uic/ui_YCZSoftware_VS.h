/********************************************************************************
** Form generated from reading UI file 'YCZSoftware_VS.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YCZSOFTWARE_VS_H
#define UI_YCZSOFTWARE_VS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YCZSoftware_VSClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *YCZSoftware_VSClass)
    {
        if (YCZSoftware_VSClass->objectName().isEmpty())
            YCZSoftware_VSClass->setObjectName(QString::fromUtf8("YCZSoftware_VSClass"));
        YCZSoftware_VSClass->resize(600, 400);
        menuBar = new QMenuBar(YCZSoftware_VSClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        YCZSoftware_VSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(YCZSoftware_VSClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        YCZSoftware_VSClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(YCZSoftware_VSClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        YCZSoftware_VSClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(YCZSoftware_VSClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        YCZSoftware_VSClass->setStatusBar(statusBar);

        retranslateUi(YCZSoftware_VSClass);

        QMetaObject::connectSlotsByName(YCZSoftware_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *YCZSoftware_VSClass)
    {
        YCZSoftware_VSClass->setWindowTitle(QCoreApplication::translate("YCZSoftware_VSClass", "YCZSoftware_VS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YCZSoftware_VSClass: public Ui_YCZSoftware_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YCZSOFTWARE_VS_H
