/********************************************************************************
** Form generated from reading UI file 'coanalysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COANALYSISDIALOG_H
#define UI_COANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoAnalysisDialog
{
public:
    QComboBox *cmb_layer;
    QComboBox *cmb_numbers;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *cmb_1;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cmb_5;
    QLabel *label_1;
    QLabel *label_5;
    QComboBox *cmb_3;
    QComboBox *cmb_2;
    QComboBox *cmb_4;
    QLabel *label_6;
    QComboBox *cmb_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pb_ok;
    QPushButton *pb_cancel;

    void setupUi(QDialog *CoAnalysisDialog)
    {
        if (CoAnalysisDialog->objectName().isEmpty())
            CoAnalysisDialog->setObjectName(QString::fromUtf8("CoAnalysisDialog"));
        CoAnalysisDialog->resize(411, 335);
        QFont font;
        font.setPointSize(11);
        CoAnalysisDialog->setFont(font);
        cmb_layer = new QComboBox(CoAnalysisDialog);
        cmb_layer->setObjectName(QString::fromUtf8("cmb_layer"));
        cmb_layer->setGeometry(QRect(110, 30, 261, 22));
        cmb_layer->setFont(font);
        cmb_numbers = new QComboBox(CoAnalysisDialog);
        cmb_numbers->addItem(QString());
        cmb_numbers->addItem(QString());
        cmb_numbers->addItem(QString());
        cmb_numbers->addItem(QString());
        cmb_numbers->addItem(QString());
        cmb_numbers->setObjectName(QString::fromUtf8("cmb_numbers"));
        cmb_numbers->setGeometry(QRect(110, 70, 261, 22));
        cmb_numbers->setFont(font);
        groupBox = new QGroupBox(CoAnalysisDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 100, 371, 191));
        groupBox->setFont(font);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 351, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cmb_1 = new QComboBox(gridLayoutWidget);
        cmb_1->setObjectName(QString::fromUtf8("cmb_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmb_1->sizePolicy().hasHeightForWidth());
        cmb_1->setSizePolicy(sizePolicy);
        cmb_1->setFont(font);

        gridLayout->addWidget(cmb_1, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        cmb_5 = new QComboBox(gridLayoutWidget);
        cmb_5->setObjectName(QString::fromUtf8("cmb_5"));
        cmb_5->setFont(font);

        gridLayout->addWidget(cmb_5, 4, 1, 1, 1);

        label_1 = new QLabel(gridLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setFont(font);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        cmb_3 = new QComboBox(gridLayoutWidget);
        cmb_3->setObjectName(QString::fromUtf8("cmb_3"));
        cmb_3->setFont(font);

        gridLayout->addWidget(cmb_3, 2, 1, 1, 1);

        cmb_2 = new QComboBox(gridLayoutWidget);
        cmb_2->setObjectName(QString::fromUtf8("cmb_2"));
        cmb_2->setFont(font);

        gridLayout->addWidget(cmb_2, 1, 1, 1, 1);

        cmb_4 = new QComboBox(gridLayoutWidget);
        cmb_4->setObjectName(QString::fromUtf8("cmb_4"));
        cmb_4->setFont(font);

        gridLayout->addWidget(cmb_4, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        cmb_6 = new QComboBox(gridLayoutWidget);
        cmb_6->setObjectName(QString::fromUtf8("cmb_6"));
        cmb_6->setFont(font);

        gridLayout->addWidget(cmb_6, 5, 1, 1, 1);

        label_7 = new QLabel(CoAnalysisDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 30, 72, 21));
        label_7->setFont(font);
        label_8 = new QLabel(CoAnalysisDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 70, 91, 20));
        label_8->setFont(font);
        pb_ok = new QPushButton(CoAnalysisDialog);
        pb_ok->setObjectName(QString::fromUtf8("pb_ok"));
        pb_ok->setGeometry(QRect(60, 300, 88, 23));
        pb_ok->setFont(font);
        pb_cancel = new QPushButton(CoAnalysisDialog);
        pb_cancel->setObjectName(QString::fromUtf8("pb_cancel"));
        pb_cancel->setGeometry(QRect(260, 300, 88, 23));
        pb_cancel->setFont(font);

        retranslateUi(CoAnalysisDialog);

        QMetaObject::connectSlotsByName(CoAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *CoAnalysisDialog)
    {
        CoAnalysisDialog->setWindowTitle(QCoreApplication::translate("CoAnalysisDialog", "Dialog", nullptr));
        cmb_numbers->setItemText(0, QCoreApplication::translate("CoAnalysisDialog", "2", nullptr));
        cmb_numbers->setItemText(1, QCoreApplication::translate("CoAnalysisDialog", "3", nullptr));
        cmb_numbers->setItemText(2, QCoreApplication::translate("CoAnalysisDialog", "4", nullptr));
        cmb_numbers->setItemText(3, QCoreApplication::translate("CoAnalysisDialog", "5", nullptr));
        cmb_numbers->setItemText(4, QCoreApplication::translate("CoAnalysisDialog", "6", nullptr));

        groupBox->setTitle(QCoreApplication::translate("CoAnalysisDialog", "Choose Fields", nullptr));
        label_4->setText(QCoreApplication::translate("CoAnalysisDialog", "Field4:", nullptr));
        label_2->setText(QCoreApplication::translate("CoAnalysisDialog", "Field2:", nullptr));
        label_3->setText(QCoreApplication::translate("CoAnalysisDialog", "Field3:", nullptr));
        label_1->setText(QCoreApplication::translate("CoAnalysisDialog", "Field1:", nullptr));
        label_5->setText(QCoreApplication::translate("CoAnalysisDialog", "Field5:", nullptr));
        label_6->setText(QCoreApplication::translate("CoAnalysisDialog", "Field6:", nullptr));
        label_7->setText(QCoreApplication::translate("CoAnalysisDialog", "Layer:", nullptr));
        label_8->setText(QCoreApplication::translate("CoAnalysisDialog", "Numbers:", nullptr));
        pb_ok->setText(QCoreApplication::translate("CoAnalysisDialog", "Confirm", nullptr));
        pb_cancel->setText(QCoreApplication::translate("CoAnalysisDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoAnalysisDialog: public Ui_CoAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COANALYSISDIALOG_H
