/********************************************************************************
** Form generated from reading UI file 'histogramdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMDIALOG_H
#define UI_HISTOGRAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <./src/service/histogramview.h>

QT_BEGIN_NAMESPACE

class Ui_HistogramDialog
{
public:
    QComboBox *cmb_layer;
    QComboBox *cmb_field;
    QPushButton *bt_draw;
    QPushButton *bt_close;
    QGroupBox *groupBox;
    HistogramView *HistogramWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *sb_number;

    void setupUi(QDialog *HistogramDialog)
    {
        if (HistogramDialog->objectName().isEmpty())
            HistogramDialog->setObjectName(QString::fromUtf8("HistogramDialog"));
        HistogramDialog->resize(453, 455);
        QFont font;
        font.setPointSize(11);
        HistogramDialog->setFont(font);
        cmb_layer = new QComboBox(HistogramDialog);
        cmb_layer->setObjectName(QString::fromUtf8("cmb_layer"));
        cmb_layer->setGeometry(QRect(130, 30, 251, 22));
        cmb_field = new QComboBox(HistogramDialog);
        cmb_field->setObjectName(QString::fromUtf8("cmb_field"));
        cmb_field->setGeometry(QRect(130, 70, 251, 22));
        bt_draw = new QPushButton(HistogramDialog);
        bt_draw->setObjectName(QString::fromUtf8("bt_draw"));
        bt_draw->setGeometry(QRect(60, 410, 88, 31));
        bt_close = new QPushButton(HistogramDialog);
        bt_close->setObjectName(QString::fromUtf8("bt_close"));
        bt_close->setGeometry(QRect(290, 410, 88, 31));
        groupBox = new QGroupBox(HistogramDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 150, 331, 241));
        HistogramWidget = new HistogramView(groupBox);
        HistogramWidget->setObjectName(QString::fromUtf8("HistogramWidget"));
        HistogramWidget->setGeometry(QRect(10, 20, 311, 211));
        label = new QLabel(HistogramDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 30, 41, 16));
        label_2 = new QLabel(HistogramDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 70, 51, 16));
        label_3 = new QLabel(HistogramDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 110, 81, 16));
        sb_number = new QSpinBox(HistogramDialog);
        sb_number->setObjectName(QString::fromUtf8("sb_number"));
        sb_number->setGeometry(QRect(130, 110, 251, 22));

        retranslateUi(HistogramDialog);

        QMetaObject::connectSlotsByName(HistogramDialog);
    } // setupUi

    void retranslateUi(QDialog *HistogramDialog)
    {
        HistogramDialog->setWindowTitle(QCoreApplication::translate("HistogramDialog", "Dialog", nullptr));
        bt_draw->setText(QCoreApplication::translate("HistogramDialog", "Draw", nullptr));
        bt_close->setText(QCoreApplication::translate("HistogramDialog", "Close", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HistogramDialog", "Histogram", nullptr));
        label->setText(QCoreApplication::translate("HistogramDialog", "Data:", nullptr));
        label_2->setText(QCoreApplication::translate("HistogramDialog", "Value:", nullptr));
        label_3->setText(QCoreApplication::translate("HistogramDialog", "Segments:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistogramDialog: public Ui_HistogramDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMDIALOG_H
