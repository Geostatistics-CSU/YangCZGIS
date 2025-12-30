/********************************************************************************
** Form generated from reading UI file 'htmscanservicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTMSCANSERVICEDIALOG_H
#define UI_HTMSCANSERVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HTMSCANServiceDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_11;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_19;
    QComboBox *cmbObVal;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineOutputPath;
    QPushButton *btnBrowseOutput;
    QLabel *label;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_10;
    QLabel *label_11;
    QDoubleSpinBox *dsb_sig;
    QSpinBox *sb_mon;
    QLabel *label_l;
    QDoubleSpinBox *dsb_l;
    QWidget *widget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cmbObPath;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_16;
    QComboBox *cmb_x;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_17;
    QComboBox *cmb_y;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_18;
    QComboBox *cmb_z;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *groupBox;
    QComboBox *cmb_choose;
    QWidget *layoutWidget_3;
    QHBoxLayout *PathNei;
    QLineEdit *lineNeiPath;
    QPushButton *btnBrowseNei;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_s_2;
    QComboBox *cmb_s;

    void setupUi(QDialog *HTMSCANServiceDialog)
    {
        if (HTMSCANServiceDialog->objectName().isEmpty())
            HTMSCANServiceDialog->setObjectName(QString::fromUtf8("HTMSCANServiceDialog"));
        HTMSCANServiceDialog->resize(737, 477);
        QFont font;
        font.setPointSize(11);
        HTMSCANServiceDialog->setFont(font);
        layoutWidget = new QWidget(HTMSCANServiceDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 430, 721, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        btnComfirm = new QPushButton(layoutWidget);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));

        horizontalLayout_4->addWidget(btnComfirm);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_4->addWidget(btnCancel);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        horizontalLayoutWidget = new QWidget(HTMSCANServiceDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 110, 721, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_5->addWidget(label_19);

        cmbObVal = new QComboBox(horizontalLayoutWidget);
        cmbObVal->setObjectName(QString::fromUtf8("cmbObVal"));
        cmbObVal->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbObVal->sizePolicy().hasHeightForWidth());
        cmbObVal->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(cmbObVal);

        layoutWidget_2 = new QWidget(HTMSCANServiceDialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 390, 721, 39));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineOutputPath = new QLineEdit(layoutWidget_2);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));

        horizontalLayout_3->addWidget(lineOutputPath);

        btnBrowseOutput = new QPushButton(layoutWidget_2);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        btnBrowseOutput->setFont(font1);

        horizontalLayout_3->addWidget(btnBrowseOutput);

        label = new QLabel(HTMSCANServiceDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 659, 16));
        groupBox_2 = new QGroupBox(HTMSCANServiceDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 280, 721, 111));
        formLayoutWidget = new QWidget(groupBox_2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 701, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_11);

        dsb_sig = new QDoubleSpinBox(formLayoutWidget);
        dsb_sig->setObjectName(QString::fromUtf8("dsb_sig"));
        dsb_sig->setSingleStep(0.050000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dsb_sig);

        sb_mon = new QSpinBox(formLayoutWidget);
        sb_mon->setObjectName(QString::fromUtf8("sb_mon"));
        sb_mon->setMaximum(99999);

        formLayout->setWidget(1, QFormLayout::FieldRole, sb_mon);

        label_l = new QLabel(formLayoutWidget);
        label_l->setObjectName(QString::fromUtf8("label_l"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_l);

        dsb_l = new QDoubleSpinBox(formLayoutWidget);
        dsb_l->setObjectName(QString::fromUtf8("dsb_l"));
        dsb_l->setMaximum(999999999.990000009536743);

        formLayout->setWidget(2, QFormLayout::FieldRole, dsb_l);

        widget = new QWidget(HTMSCANServiceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 721, 81));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 701, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cmbObPath = new QComboBox(verticalLayoutWidget_2);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));

        verticalLayout_2->addWidget(cmbObPath);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_2->addWidget(label_16);

        cmb_x = new QComboBox(verticalLayoutWidget_2);
        cmb_x->setObjectName(QString::fromUtf8("cmb_x"));
        cmb_x->setMinimumSize(QSize(100, 0));
        cmb_x->setEditable(false);

        horizontalLayout_2->addWidget(cmb_x);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setEnabled(true);

        horizontalLayout_2->addWidget(label_17);

        cmb_y = new QComboBox(verticalLayoutWidget_2);
        cmb_y->setObjectName(QString::fromUtf8("cmb_y"));
        cmb_y->setMinimumSize(QSize(100, 0));
        cmb_y->setEditable(false);

        horizontalLayout_2->addWidget(cmb_y);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        label_18 = new QLabel(verticalLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_2->addWidget(label_18);

        cmb_z = new QComboBox(verticalLayoutWidget_2);
        cmb_z->setObjectName(QString::fromUtf8("cmb_z"));
        cmb_z->setMinimumSize(QSize(100, 0));
        cmb_z->setEditable(false);

        horizontalLayout_2->addWidget(cmb_z);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(HTMSCANServiceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 150, 721, 121));
        cmb_choose = new QComboBox(groupBox);
        cmb_choose->addItem(QString());
        cmb_choose->addItem(QString());
        cmb_choose->setObjectName(QString::fromUtf8("cmb_choose"));
        cmb_choose->setGeometry(QRect(10, 20, 701, 21));
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 50, 701, 30));
        PathNei = new QHBoxLayout(layoutWidget_3);
        PathNei->setObjectName(QString::fromUtf8("PathNei"));
        PathNei->setContentsMargins(0, 0, 0, 0);
        lineNeiPath = new QLineEdit(layoutWidget_3);
        lineNeiPath->setObjectName(QString::fromUtf8("lineNeiPath"));

        PathNei->addWidget(lineNeiPath);

        btnBrowseNei = new QPushButton(layoutWidget_3);
        btnBrowseNei->setObjectName(QString::fromUtf8("btnBrowseNei"));
        btnBrowseNei->setFont(font1);

        PathNei->addWidget(btnBrowseNei);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 80, 701, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_s_2 = new QLabel(horizontalLayoutWidget_2);
        label_s_2->setObjectName(QString::fromUtf8("label_s_2"));

        horizontalLayout->addWidget(label_s_2);

        cmb_s = new QComboBox(horizontalLayoutWidget_2);
        cmb_s->addItem(QString());
        cmb_s->addItem(QString());
        cmb_s->addItem(QString());
        cmb_s->addItem(QString());
        cmb_s->setObjectName(QString::fromUtf8("cmb_s"));
        sizePolicy.setHeightForWidth(cmb_s->sizePolicy().hasHeightForWidth());
        cmb_s->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmb_s);


        retranslateUi(HTMSCANServiceDialog);

        QMetaObject::connectSlotsByName(HTMSCANServiceDialog);
    } // setupUi

    void retranslateUi(QDialog *HTMSCANServiceDialog)
    {
        HTMSCANServiceDialog->setWindowTitle(QCoreApplication::translate("HTMSCANServiceDialog", "HTMSCAN", nullptr));
        btnComfirm->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Confirm", nullptr));
        btnCancel->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Cancel", nullptr));
        label_19->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Variable:", nullptr));
        label_6->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Output path (csv)\357\274\232", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("HTMSCANServiceDialog", "...", nullptr));
        label->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Input dataset:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("HTMSCANServiceDialog", "Parameter setting", nullptr));
        label_10->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Significant level:", nullptr));
        label_11->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Times of Monte Carlo simulations:", nullptr));
        label_l->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Distance threshold:", nullptr));
        label_8->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Coordinate:", nullptr));
        label_16->setText(QCoreApplication::translate("HTMSCANServiceDialog", "X:", nullptr));
        label_17->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Y:", nullptr));
        label_18->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Z:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HTMSCANServiceDialog", "Neibors file", nullptr));
        cmb_choose->setItemText(0, QCoreApplication::translate("HTMSCANServiceDialog", "Choose the neibors file (txt, csv)", nullptr));
        cmb_choose->setItemText(1, QCoreApplication::translate("HTMSCANServiceDialog", "No neibors file, calculate by the coordinate", nullptr));

        btnBrowseNei->setText(QCoreApplication::translate("HTMSCANServiceDialog", "...", nullptr));
        label_s_2->setText(QCoreApplication::translate("HTMSCANServiceDialog", "Separator:", nullptr));
        cmb_s->setItemText(0, QCoreApplication::translate("HTMSCANServiceDialog", "Comma(',')", nullptr));
        cmb_s->setItemText(1, QCoreApplication::translate("HTMSCANServiceDialog", "Space(' ')", nullptr));
        cmb_s->setItemText(2, QCoreApplication::translate("HTMSCANServiceDialog", "Tabs('/t')", nullptr));
        cmb_s->setItemText(3, QCoreApplication::translate("HTMSCANServiceDialog", "Semicolon(';')", nullptr));

    } // retranslateUi

};

namespace Ui {
    class HTMSCANServiceDialog: public Ui_HTMSCANServiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTMSCANSERVICEDIALOG_H
