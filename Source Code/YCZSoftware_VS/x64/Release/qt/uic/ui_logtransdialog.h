/********************************************************************************
** Form generated from reading UI file 'logtransdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGTRANSDIALOG_H
#define UI_LOGTRANSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogTransDialog
{
public:
    QLabel *label_2;
    QLabel *label;
    QComboBox *cmb_field;
    QComboBox *cmb_layer;
    QPushButton *bt_draw;
    QPushButton *bt_close;

    void setupUi(QDialog *LogTransDialog)
    {
        if (LogTransDialog->objectName().isEmpty())
            LogTransDialog->setObjectName(QString::fromUtf8("LogTransDialog"));
        LogTransDialog->resize(400, 196);
        QFont font;
        font.setPointSize(11);
        LogTransDialog->setFont(font);
        label_2 = new QLabel(LogTransDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 51, 16));
        label = new QLabel(LogTransDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 41, 16));
        cmb_field = new QComboBox(LogTransDialog);
        cmb_field->setObjectName(QString::fromUtf8("cmb_field"));
        cmb_field->setGeometry(QRect(100, 80, 251, 22));
        cmb_layer = new QComboBox(LogTransDialog);
        cmb_layer->setObjectName(QString::fromUtf8("cmb_layer"));
        cmb_layer->setGeometry(QRect(100, 40, 251, 22));
        bt_draw = new QPushButton(LogTransDialog);
        bt_draw->setObjectName(QString::fromUtf8("bt_draw"));
        bt_draw->setGeometry(QRect(50, 140, 88, 21));
        bt_close = new QPushButton(LogTransDialog);
        bt_close->setObjectName(QString::fromUtf8("bt_close"));
        bt_close->setGeometry(QRect(260, 140, 88, 23));

        retranslateUi(LogTransDialog);

        QMetaObject::connectSlotsByName(LogTransDialog);
    } // setupUi

    void retranslateUi(QDialog *LogTransDialog)
    {
        LogTransDialog->setWindowTitle(QCoreApplication::translate("LogTransDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("LogTransDialog", "Field:", nullptr));
        label->setText(QCoreApplication::translate("LogTransDialog", "Data:", nullptr));
        bt_draw->setText(QCoreApplication::translate("LogTransDialog", "Confirm", nullptr));
        bt_close->setText(QCoreApplication::translate("LogTransDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogTransDialog: public Ui_LogTransDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGTRANSDIALOG_H
