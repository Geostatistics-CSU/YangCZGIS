/********************************************************************************
** Form generated from reading UI file 'ColorGradientWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORGRADIENTWIDGET_H
#define UI_COLORGRADIENTWIDGET_H

#include <./src/service/ColorGradientPreview.h>
#include <./src/service/ColorWidget.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorGradientWidgetClass
{
public:
    QSpinBox *num_Color;
    QGroupBox *groupBox;
    ColorGradientPreview *PreviewWidget;
    QPushButton *bt_confirm;
    QPushButton *bt_cancel;
    QComboBox *cmbField;
    QGroupBox *groupBox_2;
    QPushButton *Bt_BeginColor;
    ColorWidget *begincolor_widget;
    QGroupBox *groupBox_3;
    ColorWidget *endcolor_widget;
    QPushButton *Bt_EndColor;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *ColorGradientWidgetClass)
    {
        if (ColorGradientWidgetClass->objectName().isEmpty())
            ColorGradientWidgetClass->setObjectName(QString::fromUtf8("ColorGradientWidgetClass"));
        ColorGradientWidgetClass->resize(417, 496);
        num_Color = new QSpinBox(ColorGradientWidgetClass);
        num_Color->setObjectName(QString::fromUtf8("num_Color"));
        num_Color->setGeometry(QRect(50, 210, 321, 31));
        groupBox = new QGroupBox(ColorGradientWidgetClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 250, 321, 111));
        PreviewWidget = new ColorGradientPreview(groupBox);
        PreviewWidget->setObjectName(QString::fromUtf8("PreviewWidget"));
        PreviewWidget->setGeometry(QRect(10, 20, 301, 80));
        bt_confirm = new QPushButton(ColorGradientWidgetClass);
        bt_confirm->setObjectName(QString::fromUtf8("bt_confirm"));
        bt_confirm->setGeometry(QRect(50, 440, 81, 31));
        bt_cancel = new QPushButton(ColorGradientWidgetClass);
        bt_cancel->setObjectName(QString::fromUtf8("bt_cancel"));
        bt_cancel->setGeometry(QRect(290, 440, 81, 31));
        cmbField = new QComboBox(ColorGradientWidgetClass);
        cmbField->setObjectName(QString::fromUtf8("cmbField"));
        cmbField->setGeometry(QRect(50, 400, 321, 22));
        groupBox_2 = new QGroupBox(ColorGradientWidgetClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 10, 321, 71));
        Bt_BeginColor = new QPushButton(groupBox_2);
        Bt_BeginColor->setObjectName(QString::fromUtf8("Bt_BeginColor"));
        Bt_BeginColor->setGeometry(QRect(220, 20, 93, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/GIS_todo/Dev20\345\233\276\346\240\207 (1)/Dev20/ColorMixer_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        Bt_BeginColor->setIcon(icon);
        Bt_BeginColor->setIconSize(QSize(40, 40));
        begincolor_widget = new ColorWidget(groupBox_2);
        begincolor_widget->setObjectName(QString::fromUtf8("begincolor_widget"));
        begincolor_widget->setGeometry(QRect(10, 20, 201, 40));
        groupBox_3 = new QGroupBox(ColorGradientWidgetClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 100, 321, 71));
        endcolor_widget = new ColorWidget(groupBox_3);
        endcolor_widget->setObjectName(QString::fromUtf8("endcolor_widget"));
        endcolor_widget->setGeometry(QRect(10, 20, 201, 40));
        Bt_EndColor = new QPushButton(groupBox_3);
        Bt_EndColor->setObjectName(QString::fromUtf8("Bt_EndColor"));
        Bt_EndColor->setGeometry(QRect(220, 20, 93, 41));
        Bt_EndColor->setIcon(icon);
        Bt_EndColor->setIconSize(QSize(40, 40));
        label = new QLabel(ColorGradientWidgetClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 180, 231, 16));
        label_2 = new QLabel(ColorGradientWidgetClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 370, 201, 16));

        retranslateUi(ColorGradientWidgetClass);

        QMetaObject::connectSlotsByName(ColorGradientWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ColorGradientWidgetClass)
    {
        ColorGradientWidgetClass->setWindowTitle(QCoreApplication::translate("ColorGradientWidgetClass", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ColorGradientWidgetClass", "Color Preview", nullptr));
        bt_confirm->setText(QCoreApplication::translate("ColorGradientWidgetClass", "Confirm", nullptr));
        bt_cancel->setText(QCoreApplication::translate("ColorGradientWidgetClass", "Cancel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ColorGradientWidgetClass", "Start Color", nullptr));
        Bt_BeginColor->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("ColorGradientWidgetClass", "End Color", nullptr));
        Bt_EndColor->setText(QString());
        label->setText(QCoreApplication::translate("ColorGradientWidgetClass", "Set the number of sorts:", nullptr));
        label_2->setText(QCoreApplication::translate("ColorGradientWidgetClass", "Choose the attribute:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorGradientWidgetClass: public Ui_ColorGradientWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORGRADIENTWIDGET_H
