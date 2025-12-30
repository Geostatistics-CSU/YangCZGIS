/********************************************************************************
** Form generated from reading UI file 'qqplotdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQPLOTDIALOG_H
#define UI_QQPLOTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <./src/service/qqplotdraw.h>

QT_BEGIN_NAMESPACE

class Ui_QQPlotDialog
{
public:
    QGroupBox *groupBox;
    QQPlotDraw *QQPlotWidget;
    QLabel *label_2;
    QPushButton *bt_draw;
    QLabel *label;
    QComboBox *cmb_field;
    QPushButton *bt_close;
    QComboBox *cmb_layer;

    void setupUi(QDialog *QQPlotDialog)
    {
        if (QQPlotDialog->objectName().isEmpty())
            QQPlotDialog->setObjectName(QString::fromUtf8("QQPlotDialog"));
        QQPlotDialog->resize(559, 423);
        QFont font;
        font.setPointSize(11);
        QQPlotDialog->setFont(font);
        groupBox = new QGroupBox(QQPlotDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(170, 20, 372, 380));
        QQPlotWidget = new QQPlotDraw(groupBox);
        QQPlotWidget->setObjectName(QString::fromUtf8("QQPlotWidget"));
        QQPlotWidget->setGeometry(QRect(10, 20, 350, 350));
        label_2 = new QLabel(QQPlotDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 51, 16));
        bt_draw = new QPushButton(QQPlotDialog);
        bt_draw->setObjectName(QString::fromUtf8("bt_draw"));
        bt_draw->setGeometry(QRect(70, 310, 88, 31));
        label = new QLabel(QQPlotDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 41, 16));
        cmb_field = new QComboBox(QQPlotDialog);
        cmb_field->setObjectName(QString::fromUtf8("cmb_field"));
        cmb_field->setGeometry(QRect(30, 150, 121, 22));
        bt_close = new QPushButton(QQPlotDialog);
        bt_close->setObjectName(QString::fromUtf8("bt_close"));
        bt_close->setGeometry(QRect(70, 370, 88, 31));
        cmb_layer = new QComboBox(QQPlotDialog);
        cmb_layer->setObjectName(QString::fromUtf8("cmb_layer"));
        cmb_layer->setGeometry(QRect(30, 80, 121, 22));

        retranslateUi(QQPlotDialog);

        QMetaObject::connectSlotsByName(QQPlotDialog);
    } // setupUi

    void retranslateUi(QDialog *QQPlotDialog)
    {
        QQPlotDialog->setWindowTitle(QCoreApplication::translate("QQPlotDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QQPlotDialog", "QQ Plot", nullptr));
        label_2->setText(QCoreApplication::translate("QQPlotDialog", "Value:", nullptr));
        bt_draw->setText(QCoreApplication::translate("QQPlotDialog", "Draw", nullptr));
        label->setText(QCoreApplication::translate("QQPlotDialog", "Data:", nullptr));
        bt_close->setText(QCoreApplication::translate("QQPlotDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QQPlotDialog: public Ui_QQPlotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQPLOTDIALOG_H
