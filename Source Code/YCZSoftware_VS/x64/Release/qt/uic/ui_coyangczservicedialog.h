/********************************************************************************
** Form generated from reading UI file 'coyangczservicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COYANGCZSERVICEDIALOG_H
#define UI_COYANGCZSERVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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

class Ui_CoYangCZServiceDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *cb_error;
    QCheckBox *cb_log;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_22;
    QWidget *widget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cmbObPath;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_24;
    QComboBox *cmb_x;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_25;
    QComboBox *cmb_y;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_26;
    QComboBox *cmb_z;
    QSpacerItem *horizontalSpacer_19;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_27;
    QComboBox *cmbObVal;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QComboBox *cmb_f1;
    QComboBox *cmb_f2;
    QLabel *label_28;
    QComboBox *cmb_l3;
    QComboBox *cmb_f3;
    QLabel *label_33;
    QComboBox *cmb_l1;
    QLabel *label_34;
    QComboBox *cmb_l2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_18;
    QComboBox *cmb_x_co;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_19;
    QComboBox *cmb_y_co;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_20;
    QComboBox *cmb_z_co;
    QSpacerItem *horizontalSpacer_15;
    QGroupBox *groupBox_2;
    QComboBox *cmb_choose;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_30;
    QLineEdit *lineOutputPath;
    QPushButton *btnBrowseOutput;
    QLabel *label_31;
    QWidget *widget_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QComboBox *cmb_unknow;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_32;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_35;
    QComboBox *cmb_x_u;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_36;
    QComboBox *cmb_y_u;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_37;
    QComboBox *cmb_z_u;
    QSpacerItem *horizontalSpacer_23;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_grid_2;
    QLineEdit *line_size;
    QGroupBox *groupBox_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_11;
    QSpinBox *sb_k_num;
    QGridLayout *gridLayout_2;
    QLabel *label_c1;
    QDoubleSpinBox *dsb_c1;
    QLabel *label_c2;
    QLabel *label_c3;
    QDoubleSpinBox *dsb_c3;
    QDoubleSpinBox *dsb_c2;
    QDoubleSpinBox *dsb_c4;
    QLabel *label_c4;

    void setupUi(QDialog *CoYangCZServiceDialog)
    {
        if (CoYangCZServiceDialog->objectName().isEmpty())
            CoYangCZServiceDialog->setObjectName(QString::fromUtf8("CoYangCZServiceDialog"));
        CoYangCZServiceDialog->resize(865, 769);
        QFont font;
        font.setPointSize(11);
        CoYangCZServiceDialog->setFont(font);
        verticalLayoutWidget = new QWidget(CoYangCZServiceDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 670, 841, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cb_error = new QCheckBox(verticalLayoutWidget);
        cb_error->setObjectName(QString::fromUtf8("cb_error"));
        cb_error->setChecked(true);
        cb_error->setTristate(false);

        verticalLayout->addWidget(cb_error);

        cb_log = new QCheckBox(verticalLayoutWidget);
        cb_log->setObjectName(QString::fromUtf8("cb_log"));

        verticalLayout->addWidget(cb_log);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        btnComfirm = new QPushButton(verticalLayoutWidget);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));

        horizontalLayout_4->addWidget(btnComfirm);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        btnCancel = new QPushButton(verticalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_4->addWidget(btnCancel);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_4);

        label_22 = new QLabel(CoYangCZServiceDialog);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 10, 819, 15));
        widget = new QWidget(CoYangCZServiceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 841, 81));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 821, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cmbObPath = new QComboBox(verticalLayoutWidget_2);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));

        verticalLayout_2->addWidget(cmbObPath);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_23 = new QLabel(verticalLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_5->addWidget(label_23);

        horizontalSpacer_16 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_16);

        label_24 = new QLabel(verticalLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_5->addWidget(label_24);

        cmb_x = new QComboBox(verticalLayoutWidget_2);
        cmb_x->setObjectName(QString::fromUtf8("cmb_x"));
        cmb_x->setMinimumSize(QSize(100, 0));
        cmb_x->setEditable(false);

        horizontalLayout_5->addWidget(cmb_x);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_17);

        label_25 = new QLabel(verticalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setEnabled(true);

        horizontalLayout_5->addWidget(label_25);

        cmb_y = new QComboBox(verticalLayoutWidget_2);
        cmb_y->setObjectName(QString::fromUtf8("cmb_y"));
        cmb_y->setMinimumSize(QSize(100, 0));
        cmb_y->setEditable(false);

        horizontalLayout_5->addWidget(cmb_y);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_18);

        label_26 = new QLabel(verticalLayoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_5->addWidget(label_26);

        cmb_z = new QComboBox(verticalLayoutWidget_2);
        cmb_z->setObjectName(QString::fromUtf8("cmb_z"));
        cmb_z->setMinimumSize(QSize(100, 0));
        cmb_z->setEditable(false);

        horizontalLayout_5->addWidget(cmb_z);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_19);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayoutWidget = new QWidget(CoYangCZServiceDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 120, 831, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(horizontalLayoutWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_6->addWidget(label_27);

        cmbObVal = new QComboBox(horizontalLayoutWidget);
        cmbObVal->setObjectName(QString::fromUtf8("cmbObVal"));
        cmbObVal->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbObVal->sizePolicy().hasHeightForWidth());
        cmbObVal->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(cmbObVal);

        groupBox = new QGroupBox(CoYangCZServiceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 160, 841, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 821, 88));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        cmb_f1 = new QComboBox(layoutWidget);
        cmb_f1->setObjectName(QString::fromUtf8("cmb_f1"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmb_f1->sizePolicy().hasHeightForWidth());
        cmb_f1->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(cmb_f1, 1, 2, 1, 1);

        cmb_f2 = new QComboBox(layoutWidget);
        cmb_f2->setObjectName(QString::fromUtf8("cmb_f2"));

        gridLayout_3->addWidget(cmb_f2, 2, 2, 1, 1);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_3->addWidget(label_28, 1, 0, 1, 1);

        cmb_l3 = new QComboBox(layoutWidget);
        cmb_l3->setObjectName(QString::fromUtf8("cmb_l3"));

        gridLayout_3->addWidget(cmb_l3, 3, 1, 1, 1);

        cmb_f3 = new QComboBox(layoutWidget);
        cmb_f3->setObjectName(QString::fromUtf8("cmb_f3"));

        gridLayout_3->addWidget(cmb_f3, 3, 2, 1, 1);

        label_33 = new QLabel(layoutWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_3->addWidget(label_33, 2, 0, 1, 1);

        cmb_l1 = new QComboBox(layoutWidget);
        cmb_l1->setObjectName(QString::fromUtf8("cmb_l1"));
        sizePolicy1.setHeightForWidth(cmb_l1->sizePolicy().hasHeightForWidth());
        cmb_l1->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(cmb_l1, 1, 1, 1, 1);

        label_34 = new QLabel(layoutWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_3->addWidget(label_34, 3, 0, 1, 1);

        cmb_l2 = new QComboBox(layoutWidget);
        cmb_l2->setObjectName(QString::fromUtf8("cmb_l2"));

        gridLayout_3->addWidget(cmb_l2, 2, 1, 1, 1);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 821, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget1);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_2->addWidget(label_29);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_2->addWidget(label_18);

        cmb_x_co = new QComboBox(layoutWidget1);
        cmb_x_co->setObjectName(QString::fromUtf8("cmb_x_co"));
        cmb_x_co->setMinimumSize(QSize(100, 0));
        cmb_x_co->setEditable(false);

        horizontalLayout_2->addWidget(cmb_x_co);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setEnabled(true);

        horizontalLayout_2->addWidget(label_19);

        cmb_y_co = new QComboBox(layoutWidget1);
        cmb_y_co->setObjectName(QString::fromUtf8("cmb_y_co"));
        cmb_y_co->setMinimumSize(QSize(100, 0));
        cmb_y_co->setEditable(false);

        horizontalLayout_2->addWidget(cmb_y_co);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_2->addWidget(label_20);

        cmb_z_co = new QComboBox(layoutWidget1);
        cmb_z_co->setObjectName(QString::fromUtf8("cmb_z_co"));
        cmb_z_co->setMinimumSize(QSize(100, 0));
        cmb_z_co->setEditable(false);

        horizontalLayout_2->addWidget(cmb_z_co);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        groupBox_2 = new QGroupBox(CoYangCZServiceDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 310, 841, 80));
        cmb_choose = new QComboBox(groupBox_2);
        cmb_choose->addItem(QString());
        cmb_choose->addItem(QString());
        cmb_choose->setObjectName(QString::fromUtf8("cmb_choose"));
        cmb_choose->setGeometry(QRect(8, 20, 821, 21));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(8, 40, 821, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_7->addWidget(label_30);

        lineOutputPath = new QLineEdit(layoutWidget_2);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));

        horizontalLayout_7->addWidget(lineOutputPath);

        btnBrowseOutput = new QPushButton(layoutWidget_2);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        btnBrowseOutput->setFont(font1);

        horizontalLayout_7->addWidget(btnBrowseOutput);

        label_31 = new QLabel(CoYangCZServiceDialog);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 390, 819, 15));
        widget_2 = new QWidget(CoYangCZServiceDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 410, 841, 81));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(50);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        verticalLayoutWidget_4 = new QWidget(widget_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 821, 61));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cmb_unknow = new QComboBox(verticalLayoutWidget_4);
        cmb_unknow->setObjectName(QString::fromUtf8("cmb_unknow"));

        verticalLayout_4->addWidget(cmb_unknow);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_32 = new QLabel(verticalLayoutWidget_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_8->addWidget(label_32);

        horizontalSpacer_20 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);

        label_35 = new QLabel(verticalLayoutWidget_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_8->addWidget(label_35);

        cmb_x_u = new QComboBox(verticalLayoutWidget_4);
        cmb_x_u->setObjectName(QString::fromUtf8("cmb_x_u"));
        cmb_x_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_8->addWidget(cmb_x_u);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_21);

        label_36 = new QLabel(verticalLayoutWidget_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setEnabled(true);

        horizontalLayout_8->addWidget(label_36);

        cmb_y_u = new QComboBox(verticalLayoutWidget_4);
        cmb_y_u->setObjectName(QString::fromUtf8("cmb_y_u"));
        cmb_y_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_8->addWidget(cmb_y_u);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_22);

        label_37 = new QLabel(verticalLayoutWidget_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_8->addWidget(label_37);

        cmb_z_u = new QComboBox(verticalLayoutWidget_4);
        cmb_z_u->setObjectName(QString::fromUtf8("cmb_z_u"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmb_z_u->sizePolicy().hasHeightForWidth());
        cmb_z_u->setSizePolicy(sizePolicy3);
        cmb_z_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_8->addWidget(cmb_z_u);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_23);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayoutWidget_2 = new QWidget(CoYangCZServiceDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 500, 841, 27));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_grid_2 = new QLabel(horizontalLayoutWidget_2);
        label_grid_2->setObjectName(QString::fromUtf8("label_grid_2"));

        horizontalLayout->addWidget(label_grid_2);

        line_size = new QLineEdit(horizontalLayoutWidget_2);
        line_size->setObjectName(QString::fromUtf8("line_size"));

        horizontalLayout->addWidget(line_size);

        groupBox_3 = new QGroupBox(CoYangCZServiceDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 530, 841, 131));
        formLayoutWidget = new QWidget(groupBox_3);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 821, 93));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_11);

        sb_k_num = new QSpinBox(formLayoutWidget);
        sb_k_num->setObjectName(QString::fromUtf8("sb_k_num"));
        sb_k_num->setMinimum(1);
        sb_k_num->setMaximum(9999);
        sb_k_num->setValue(15);

        formLayout->setWidget(1, QFormLayout::FieldRole, sb_k_num);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_c1 = new QLabel(formLayoutWidget);
        label_c1->setObjectName(QString::fromUtf8("label_c1"));

        gridLayout_2->addWidget(label_c1, 0, 0, 1, 1);

        dsb_c1 = new QDoubleSpinBox(formLayoutWidget);
        dsb_c1->setObjectName(QString::fromUtf8("dsb_c1"));
        sizePolicy1.setHeightForWidth(dsb_c1->sizePolicy().hasHeightForWidth());
        dsb_c1->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(dsb_c1, 0, 1, 1, 1);

        label_c2 = new QLabel(formLayoutWidget);
        label_c2->setObjectName(QString::fromUtf8("label_c2"));

        gridLayout_2->addWidget(label_c2, 0, 2, 1, 1);

        label_c3 = new QLabel(formLayoutWidget);
        label_c3->setObjectName(QString::fromUtf8("label_c3"));

        gridLayout_2->addWidget(label_c3, 1, 0, 1, 1);

        dsb_c3 = new QDoubleSpinBox(formLayoutWidget);
        dsb_c3->setObjectName(QString::fromUtf8("dsb_c3"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(dsb_c3->sizePolicy().hasHeightForWidth());
        dsb_c3->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(dsb_c3, 1, 1, 1, 1);

        dsb_c2 = new QDoubleSpinBox(formLayoutWidget);
        dsb_c2->setObjectName(QString::fromUtf8("dsb_c2"));
        sizePolicy1.setHeightForWidth(dsb_c2->sizePolicy().hasHeightForWidth());
        dsb_c2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(dsb_c2, 0, 3, 1, 1);

        dsb_c4 = new QDoubleSpinBox(formLayoutWidget);
        dsb_c4->setObjectName(QString::fromUtf8("dsb_c4"));
        sizePolicy1.setHeightForWidth(dsb_c4->sizePolicy().hasHeightForWidth());
        dsb_c4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(dsb_c4, 1, 3, 1, 1);

        label_c4 = new QLabel(formLayoutWidget);
        label_c4->setObjectName(QString::fromUtf8("label_c4"));

        gridLayout_2->addWidget(label_c4, 1, 2, 1, 1);


        formLayout->setLayout(0, QFormLayout::SpanningRole, gridLayout_2);


        retranslateUi(CoYangCZServiceDialog);

        QMetaObject::connectSlotsByName(CoYangCZServiceDialog);
    } // setupUi

    void retranslateUi(QDialog *CoYangCZServiceDialog)
    {
        CoYangCZServiceDialog->setWindowTitle(QCoreApplication::translate("CoYangCZServiceDialog", "CoYangCZ", nullptr));
        cb_error->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Nugget Effect", nullptr));
        cb_log->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Log transformation", nullptr));
        btnComfirm->setText(QCoreApplication::translate("CoYangCZServiceDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Cancel", nullptr));
        label_22->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Input dataset:", nullptr));
        label_23->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Coordinate:", nullptr));
        label_24->setText(QCoreApplication::translate("CoYangCZServiceDialog", "X:", nullptr));
        label_25->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Y:", nullptr));
        label_26->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Z:", nullptr));
        label_27->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Primary property:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CoYangCZServiceDialog", "Covariates", nullptr));
        label_28->setText(QCoreApplication::translate("CoYangCZServiceDialog", "  Covariate 1:", nullptr));
        label_33->setText(QCoreApplication::translate("CoYangCZServiceDialog", "  Covariate 2:", nullptr));
        label_34->setText(QCoreApplication::translate("CoYangCZServiceDialog", "  Covariate 3:", nullptr));
        label_29->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Coordinate:", nullptr));
        label_18->setText(QCoreApplication::translate("CoYangCZServiceDialog", "X:", nullptr));
        label_19->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Y:", nullptr));
        label_20->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Z:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CoYangCZServiceDialog", "Output file", nullptr));
        cmb_choose->setItemText(0, QCoreApplication::translate("CoYangCZServiceDialog", "CSV", nullptr));
        cmb_choose->setItemText(1, QCoreApplication::translate("CoYangCZServiceDialog", "Surface raster(.tif)", nullptr));

        label_30->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Save path:", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("CoYangCZServiceDialog", "...", nullptr));
        label_31->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Input unobserved dataset:", nullptr));
        label_32->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Coordinate:", nullptr));
        label_35->setText(QCoreApplication::translate("CoYangCZServiceDialog", "X:", nullptr));
        label_36->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Y:", nullptr));
        label_37->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Z:", nullptr));
        label_grid_2->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Output cell size:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CoYangCZServiceDialog", "Parameter setting", nullptr));
        label_11->setText(QCoreApplication::translate("CoYangCZServiceDialog", "Number of points\357\274\232", nullptr));
        label_c1->setText(QCoreApplication::translate("CoYangCZServiceDialog", "c0: ", nullptr));
        label_c2->setText(QCoreApplication::translate("CoYangCZServiceDialog", "c0-c1:", nullptr));
        label_c3->setText(QCoreApplication::translate("CoYangCZServiceDialog", "c0-c2: ", nullptr));
        label_c4->setText(QCoreApplication::translate("CoYangCZServiceDialog", "c0-c3: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoYangCZServiceDialog: public Ui_CoYangCZServiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COYANGCZSERVICEDIALOG_H
