/********************************************************************************
** Form generated from reading UI file 'Canvas3DService.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANVAS3DSERVICE_H
#define UI_CANVAS3DSERVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Canvas3DServiceClass
{
public:

    void setupUi(QWidget *Canvas3DServiceClass)
    {
        if (Canvas3DServiceClass->objectName().isEmpty())
            Canvas3DServiceClass->setObjectName(QString::fromUtf8("Canvas3DServiceClass"));
        Canvas3DServiceClass->resize(600, 400);

        retranslateUi(Canvas3DServiceClass);

        QMetaObject::connectSlotsByName(Canvas3DServiceClass);
    } // setupUi

    void retranslateUi(QWidget *Canvas3DServiceClass)
    {
        Canvas3DServiceClass->setWindowTitle(QCoreApplication::translate("Canvas3DServiceClass", "Canvas3DService", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Canvas3DServiceClass: public Ui_Canvas3DServiceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVAS3DSERVICE_H
