/********************************************************************************
** Form generated from reading UI file 'Lyr3DSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYR3DSELECTDIALOG_H
#define UI_LYR3DSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Lyr3DSelectDialogClass
{
public:
    QLabel *label;
    QPushButton *btnBrowse;
    QPushButton *btnComfirm;
    QPushButton *btnCancel;
    QComboBox *cmbPath;

    void setupUi(QDialog *Lyr3DSelectDialogClass)
    {
        if (Lyr3DSelectDialogClass->objectName().isEmpty())
            Lyr3DSelectDialogClass->setObjectName(QString::fromUtf8("Lyr3DSelectDialogClass"));
        Lyr3DSelectDialogClass->resize(409, 157);
        QFont font;
        font.setPointSize(11);
        Lyr3DSelectDialogClass->setFont(font);
        label = new QLabel(Lyr3DSelectDialogClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 101, 21));
        btnBrowse = new QPushButton(Lyr3DSelectDialogClass);
        btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));
        btnBrowse->setGeometry(QRect(330, 40, 41, 23));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        btnBrowse->setFont(font1);
        btnComfirm = new QPushButton(Lyr3DSelectDialogClass);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));
        btnComfirm->setGeometry(QRect(70, 100, 81, 23));
        btnCancel = new QPushButton(Lyr3DSelectDialogClass);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(260, 100, 81, 23));
        cmbPath = new QComboBox(Lyr3DSelectDialogClass);
        cmbPath->setObjectName(QString::fromUtf8("cmbPath"));
        cmbPath->setGeometry(QRect(130, 40, 191, 22));

        retranslateUi(Lyr3DSelectDialogClass);

        QMetaObject::connectSlotsByName(Lyr3DSelectDialogClass);
    } // setupUi

    void retranslateUi(QDialog *Lyr3DSelectDialogClass)
    {
        Lyr3DSelectDialogClass->setWindowTitle(QCoreApplication::translate("Lyr3DSelectDialogClass", "Lyr3DSelectDialog", nullptr));
        label->setText(QCoreApplication::translate("Lyr3DSelectDialogClass", "Select Data\357\274\232", nullptr));
        btnBrowse->setText(QCoreApplication::translate("Lyr3DSelectDialogClass", "...", nullptr));
        btnComfirm->setText(QCoreApplication::translate("Lyr3DSelectDialogClass", "Confirm", nullptr));
        btnCancel->setText(QCoreApplication::translate("Lyr3DSelectDialogClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lyr3DSelectDialogClass: public Ui_Lyr3DSelectDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYR3DSELECTDIALOG_H
