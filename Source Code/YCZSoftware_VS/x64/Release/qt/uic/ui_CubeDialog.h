/********************************************************************************
** Form generated from reading UI file 'CubeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUBEDIALOG_H
#define UI_CUBEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CubeDialog
{
public:
    QComboBox *cmbType;
    QDoubleSpinBox *dsbSize;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *CubeDialog)
    {
        if (CubeDialog->objectName().isEmpty())
            CubeDialog->setObjectName(QString::fromUtf8("CubeDialog"));
        CubeDialog->resize(400, 222);
        cmbType = new QComboBox(CubeDialog);
        cmbType->setObjectName(QString::fromUtf8("cmbType"));
        cmbType->setGeometry(QRect(60, 50, 281, 22));
        dsbSize = new QDoubleSpinBox(CubeDialog);
        dsbSize->setObjectName(QString::fromUtf8("dsbSize"));
        dsbSize->setGeometry(QRect(60, 120, 281, 22));
        btnOK = new QPushButton(CubeDialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(60, 170, 88, 23));
        btnCancel = new QPushButton(CubeDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(260, 170, 88, 23));
        label = new QLabel(CubeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 221, 16));
        label_2 = new QLabel(CubeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 90, 281, 16));

        retranslateUi(CubeDialog);

        QMetaObject::connectSlotsByName(CubeDialog);
    } // setupUi

    void retranslateUi(QDialog *CubeDialog)
    {
        CubeDialog->setWindowTitle(QCoreApplication::translate("CubeDialog", "Choose modeling type", nullptr));
        btnOK->setText(QCoreApplication::translate("CubeDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("CubeDialog", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("CubeDialog", "Choose the model type:", nullptr));
        label_2->setText(QCoreApplication::translate("CubeDialog", "Set the size of model(input units):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CubeDialog: public Ui_CubeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUBEDIALOG_H
