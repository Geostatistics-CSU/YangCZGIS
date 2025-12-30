/********************************************************************************
** Form generated from reading UI file 'boxplotdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXPLOTDIALOG_H
#define UI_BOXPLOTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <./src/service/boxplotdraw.h>

QT_BEGIN_NAMESPACE

class Ui_BoxPlotDialog
{
public:
    QPushButton *bt_close;
    QComboBox *cmb_layer;
    QComboBox *cmb_field;
    QGroupBox *groupBox;
    BoxPlotDraw *BoxPlotWidget;
    QPushButton *bt_draw;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *BoxPlotDialog)
    {
        if (BoxPlotDialog->objectName().isEmpty())
            BoxPlotDialog->setObjectName(QString::fromUtf8("BoxPlotDialog"));
        BoxPlotDialog->resize(523, 583);
        QFont font;
        font.setPointSize(11);
        BoxPlotDialog->setFont(font);
        bt_close = new QPushButton(BoxPlotDialog);
        bt_close->setObjectName(QString::fromUtf8("bt_close"));
        bt_close->setGeometry(QRect(60, 490, 88, 31));
        cmb_layer = new QComboBox(BoxPlotDialog);
        cmb_layer->setObjectName(QString::fromUtf8("cmb_layer"));
        cmb_layer->setGeometry(QRect(30, 150, 121, 22));
        cmb_field = new QComboBox(BoxPlotDialog);
        cmb_field->setObjectName(QString::fromUtf8("cmb_field"));
        cmb_field->setGeometry(QRect(30, 220, 121, 22));
        groupBox = new QGroupBox(BoxPlotDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 20, 321, 551));
        BoxPlotWidget = new BoxPlotDraw(groupBox);
        BoxPlotWidget->setObjectName(QString::fromUtf8("BoxPlotWidget"));
        BoxPlotWidget->setGeometry(QRect(10, 20, 300, 521));
        bt_draw = new QPushButton(BoxPlotDialog);
        bt_draw->setObjectName(QString::fromUtf8("bt_draw"));
        bt_draw->setGeometry(QRect(60, 430, 88, 31));
        label = new QLabel(BoxPlotDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 120, 41, 16));
        label_2 = new QLabel(BoxPlotDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 190, 51, 16));

        retranslateUi(BoxPlotDialog);

        QMetaObject::connectSlotsByName(BoxPlotDialog);
    } // setupUi

    void retranslateUi(QDialog *BoxPlotDialog)
    {
        BoxPlotDialog->setWindowTitle(QCoreApplication::translate("BoxPlotDialog", "Dialog", nullptr));
        bt_close->setText(QCoreApplication::translate("BoxPlotDialog", "Close", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BoxPlotDialog", "Box Plot", nullptr));
        bt_draw->setText(QCoreApplication::translate("BoxPlotDialog", "Draw", nullptr));
        label->setText(QCoreApplication::translate("BoxPlotDialog", "Data:", nullptr));
        label_2->setText(QCoreApplication::translate("BoxPlotDialog", "Value:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoxPlotDialog: public Ui_BoxPlotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXPLOTDIALOG_H
