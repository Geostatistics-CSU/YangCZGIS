/********************************************************************************
** Form generated from reading UI file 'yangczfxydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YANGCZFXYDIALOG_H
#define UI_YANGCZFXYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YangCZFXYDialog
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QDoubleSpinBox *c_value;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *webkitdirectory;
    QToolButton *choosePath;
    QPushButton *input_cancel;
    QPushButton *input_confirm;
    QLabel *label_8;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QDoubleSpinBox *column_space;
    QSpinBox *row;
    QDoubleSpinBox *row_space;
    QLabel *label_3;
    QSpinBox *Column;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *YangCZFXYDialog)
    {
        if (YangCZFXYDialog->objectName().isEmpty())
            YangCZFXYDialog->setObjectName(QString::fromUtf8("YangCZFXYDialog"));
        YangCZFXYDialog->resize(631, 446);
        horizontalLayoutWidget_2 = new QWidget(YangCZFXYDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(180, 190, 261, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        c_value = new QDoubleSpinBox(horizontalLayoutWidget_2);
        c_value->setObjectName(QString::fromUtf8("c_value"));

        horizontalLayout_2->addWidget(c_value);

        horizontalLayoutWidget = new QWidget(YangCZFXYDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 280, 581, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        webkitdirectory = new QLineEdit(horizontalLayoutWidget);
        webkitdirectory->setObjectName(QString::fromUtf8("webkitdirectory"));

        horizontalLayout->addWidget(webkitdirectory);

        choosePath = new QToolButton(horizontalLayoutWidget);
        choosePath->setObjectName(QString::fromUtf8("choosePath"));

        horizontalLayout->addWidget(choosePath);

        input_cancel = new QPushButton(YangCZFXYDialog);
        input_cancel->setObjectName(QString::fromUtf8("input_cancel"));
        input_cancel->setGeometry(QRect(400, 390, 80, 20));
        input_confirm = new QPushButton(YangCZFXYDialog);
        input_confirm->setObjectName(QString::fromUtf8("input_confirm"));
        input_confirm->setGeometry(QRect(130, 390, 80, 20));
        label_8 = new QLabel(YangCZFXYDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 260, 54, 12));
        gridLayoutWidget = new QWidget(YangCZFXYDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 581, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        column_space = new QDoubleSpinBox(gridLayoutWidget);
        column_space->setObjectName(QString::fromUtf8("column_space"));

        gridLayout->addWidget(column_space, 1, 3, 1, 1);

        row = new QSpinBox(gridLayoutWidget);
        row->setObjectName(QString::fromUtf8("row"));

        gridLayout->addWidget(row, 0, 1, 1, 1);

        row_space = new QDoubleSpinBox(gridLayoutWidget);
        row_space->setObjectName(QString::fromUtf8("row_space"));
        row_space->setMaximum(99.989999999999995);
        row_space->setSingleStep(0.100000000000000);

        gridLayout->addWidget(row_space, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        Column = new QSpinBox(gridLayoutWidget);
        Column->setObjectName(QString::fromUtf8("Column"));

        gridLayout->addWidget(Column, 0, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(YangCZFXYDialog);

        QMetaObject::connectSlotsByName(YangCZFXYDialog);
    } // setupUi

    void retranslateUi(QDialog *YangCZFXYDialog)
    {
        YangCZFXYDialog->setWindowTitle(QCoreApplication::translate("YangCZFXYDialog", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("YangCZFXYDialog", "C", nullptr));
        label_5->setText(QCoreApplication::translate("YangCZFXYDialog", "Input Webkitdirectory", nullptr));
        choosePath->setText(QCoreApplication::translate("YangCZFXYDialog", "...", nullptr));
        input_cancel->setText(QCoreApplication::translate("YangCZFXYDialog", "Cancel", nullptr));
        input_confirm->setText(QCoreApplication::translate("YangCZFXYDialog", "OK", nullptr));
        label_8->setText(QCoreApplication::translate("YangCZFXYDialog", "Q value", nullptr));
        label_4->setText(QCoreApplication::translate("YangCZFXYDialog", "Column Space", nullptr));
        label_3->setText(QCoreApplication::translate("YangCZFXYDialog", "Row Space", nullptr));
        label_2->setText(QCoreApplication::translate("YangCZFXYDialog", "Column", nullptr));
        label->setText(QCoreApplication::translate("YangCZFXYDialog", "Row", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YangCZFXYDialog: public Ui_YangCZFXYDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YANGCZFXYDIALOG_H
