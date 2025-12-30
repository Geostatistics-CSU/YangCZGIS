/********************************************************************************
** Form generated from reading UI file 'inverselogdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVERSELOGDIALOG_H
#define UI_INVERSELOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InverseLogDialog
{
public:
    QComboBox *cmb_field;
    QComboBox *cmb_layer;
    QPushButton *bt_draw;
    QLabel *label;
    QPushButton *bt_close;
    QLabel *label_2;
    QDoubleSpinBox *dsb_number;
    QLabel *label_3;

    void setupUi(QDialog *InverseLogDialog)
    {
        if (InverseLogDialog->objectName().isEmpty())
            InverseLogDialog->setObjectName(QString::fromUtf8("InverseLogDialog"));
        InverseLogDialog->resize(400, 212);
        QFont font;
        font.setPointSize(11);
        InverseLogDialog->setFont(font);
        cmb_field = new QComboBox(InverseLogDialog);
        cmb_field->setObjectName(QString::fromUtf8("cmb_field"));
        cmb_field->setGeometry(QRect(110, 70, 251, 22));
        cmb_layer = new QComboBox(InverseLogDialog);
        cmb_layer->setObjectName(QString::fromUtf8("cmb_layer"));
        cmb_layer->setGeometry(QRect(110, 30, 251, 22));
        bt_draw = new QPushButton(InverseLogDialog);
        bt_draw->setObjectName(QString::fromUtf8("bt_draw"));
        bt_draw->setGeometry(QRect(60, 160, 88, 21));
        label = new QLabel(InverseLogDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 41, 16));
        bt_close = new QPushButton(InverseLogDialog);
        bt_close->setObjectName(QString::fromUtf8("bt_close"));
        bt_close->setGeometry(QRect(270, 160, 88, 23));
        label_2 = new QLabel(InverseLogDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 70, 51, 16));
        dsb_number = new QDoubleSpinBox(InverseLogDialog);
        dsb_number->setObjectName(QString::fromUtf8("dsb_number"));
        dsb_number->setGeometry(QRect(110, 110, 251, 22));
        dsb_number->setDecimals(5);
        label_3 = new QLabel(InverseLogDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 110, 41, 20));

        retranslateUi(InverseLogDialog);

        QMetaObject::connectSlotsByName(InverseLogDialog);
    } // setupUi

    void retranslateUi(QDialog *InverseLogDialog)
    {
        InverseLogDialog->setWindowTitle(QCoreApplication::translate("InverseLogDialog", "Dialog", nullptr));
        bt_draw->setText(QCoreApplication::translate("InverseLogDialog", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("InverseLogDialog", "Data:", nullptr));
        bt_close->setText(QCoreApplication::translate("InverseLogDialog", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("InverseLogDialog", "Field:", nullptr));
        label_3->setText(QCoreApplication::translate("InverseLogDialog", "Offset:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InverseLogDialog: public Ui_InverseLogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVERSELOGDIALOG_H
