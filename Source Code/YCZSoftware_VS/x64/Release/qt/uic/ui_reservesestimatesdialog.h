/********************************************************************************
** Form generated from reading UI file 'reservesestimatesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVESESTIMATESDIALOG_H
#define UI_RESERVESESTIMATESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReservesEstimatesDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cmbObPath;
    QLabel *label_12;
    QComboBox *cmbObVal;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QComboBox *cmb_x;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QComboBox *cmb_y;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *le_e;
    QLabel *label_3;
    QSpinBox *sb_lb;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QDoubleSpinBox *dsb_a0;
    QLabel *label_11;
    QDoubleSpinBox *dsb_x0;
    QLabel *label_13;
    QDoubleSpinBox *dsb_y0;
    QLabel *label_26;
    QDoubleSpinBox *dsb_z0;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QDoubleSpinBox *dsb_dz;
    QLabel *label_15;
    QDoubleSpinBox *dsb_p_a;
    QLabel *label_16;
    QDoubleSpinBox *dsb_p_b;
    QLabel *label_17;
    QDoubleSpinBox *dsb_p_c;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_18;
    QDoubleSpinBox *dsb_kk;
    QLabel *label_19;
    QSpinBox *sb_qn;
    QLabel *label_20;
    QDoubleSpinBox *dsb_q0;
    QLabel *label_21;
    QSpinBox *sb_dq;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_grid;
    QDoubleSpinBox *dsb_x;
    QLabel *label_grid_2;
    QDoubleSpinBox *dsb_y;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_grid_3;
    QSpinBox *sb_n_r;
    QLabel *label_grid_4;
    QSpinBox *sb_n_c;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QDoubleSpinBox *dsb_c_num;
    QLabel *label_8;
    QSpinBox *sb_k_num;
    QCheckBox *cb_error;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineOutputPath;
    QPushButton *btnBrowseOutput;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QDialog *ReservesEstimatesDialog)
    {
        if (ReservesEstimatesDialog->objectName().isEmpty())
            ReservesEstimatesDialog->setObjectName(QString::fromUtf8("ReservesEstimatesDialog"));
        ReservesEstimatesDialog->resize(853, 711);
        QFont font;
        font.setPointSize(11);
        ReservesEstimatesDialog->setFont(font);
        verticalLayoutWidget = new QWidget(ReservesEstimatesDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 831, 691));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        cmbObPath = new QComboBox(verticalLayoutWidget);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbObPath->sizePolicy().hasHeightForWidth());
        cmbObPath->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmbObPath);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_2->addWidget(label_12);

        cmbObVal = new QComboBox(verticalLayoutWidget);
        cmbObVal->setObjectName(QString::fromUtf8("cmbObVal"));
        cmbObVal->setEnabled(true);
        sizePolicy.setHeightForWidth(cmbObVal->sizePolicy().hasHeightForWidth());
        cmbObVal->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmbObVal);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        cmb_x = new QComboBox(verticalLayoutWidget);
        cmb_x->setObjectName(QString::fromUtf8("cmb_x"));
        sizePolicy.setHeightForWidth(cmb_x->sizePolicy().hasHeightForWidth());
        cmb_x->setSizePolicy(sizePolicy);
        cmb_x->setMinimumSize(QSize(100, 0));
        cmb_x->setEditable(false);

        horizontalLayout->addWidget(cmb_x);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(true);

        horizontalLayout->addWidget(label_10);

        cmb_y = new QComboBox(verticalLayoutWidget);
        cmb_y->setObjectName(QString::fromUtf8("cmb_y"));
        sizePolicy.setHeightForWidth(cmb_y->sizePolicy().hasHeightForWidth());
        cmb_y->setSizePolicy(sizePolicy);
        cmb_y->setMinimumSize(QSize(100, 0));
        cmb_y->setEditable(false);

        horizontalLayout->addWidget(cmb_y);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        le_e = new QLineEdit(verticalLayoutWidget);
        le_e->setObjectName(QString::fromUtf8("le_e"));

        horizontalLayout_8->addWidget(le_e);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        sb_lb = new QSpinBox(verticalLayoutWidget);
        sb_lb->setObjectName(QString::fromUtf8("sb_lb"));
        sizePolicy.setHeightForWidth(sb_lb->sizePolicy().hasHeightForWidth());
        sb_lb->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(sb_lb);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        dsb_a0 = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_a0->setObjectName(QString::fromUtf8("dsb_a0"));
        sizePolicy.setHeightForWidth(dsb_a0->sizePolicy().hasHeightForWidth());
        dsb_a0->setSizePolicy(sizePolicy);
        dsb_a0->setDecimals(4);
        dsb_a0->setMinimum(-360.000000000000000);
        dsb_a0->setMaximum(360.000000000000000);

        horizontalLayout_9->addWidget(dsb_a0);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        dsb_x0 = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_x0->setObjectName(QString::fromUtf8("dsb_x0"));
        sizePolicy.setHeightForWidth(dsb_x0->sizePolicy().hasHeightForWidth());
        dsb_x0->setSizePolicy(sizePolicy);
        dsb_x0->setDecimals(4);
        dsb_x0->setMinimum(-9999999.000000000000000);
        dsb_x0->setMaximum(99999999.000000000000000);

        horizontalLayout_9->addWidget(dsb_x0);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_9->addWidget(label_13);

        dsb_y0 = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_y0->setObjectName(QString::fromUtf8("dsb_y0"));
        sizePolicy.setHeightForWidth(dsb_y0->sizePolicy().hasHeightForWidth());
        dsb_y0->setSizePolicy(sizePolicy);
        dsb_y0->setDecimals(4);
        dsb_y0->setMinimum(-99999999.000000000000000);
        dsb_y0->setMaximum(99999999.000000000000000);

        horizontalLayout_9->addWidget(dsb_y0);

        label_26 = new QLabel(verticalLayoutWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_9->addWidget(label_26);

        dsb_z0 = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_z0->setObjectName(QString::fromUtf8("dsb_z0"));
        sizePolicy.setHeightForWidth(dsb_z0->sizePolicy().hasHeightForWidth());
        dsb_z0->setSizePolicy(sizePolicy);
        dsb_z0->setDecimals(4);
        dsb_z0->setMinimum(-99999999.000000000000000);
        dsb_z0->setMaximum(99999999.000000000000000);

        horizontalLayout_9->addWidget(dsb_z0);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_10->addWidget(label_14);

        dsb_dz = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_dz->setObjectName(QString::fromUtf8("dsb_dz"));
        sizePolicy.setHeightForWidth(dsb_dz->sizePolicy().hasHeightForWidth());
        dsb_dz->setSizePolicy(sizePolicy);
        dsb_dz->setDecimals(4);
        dsb_dz->setMinimum(-9999999.000000000000000);
        dsb_dz->setMaximum(999999.000000000000000);

        horizontalLayout_10->addWidget(dsb_dz);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_10->addWidget(label_15);

        dsb_p_a = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_p_a->setObjectName(QString::fromUtf8("dsb_p_a"));
        sizePolicy.setHeightForWidth(dsb_p_a->sizePolicy().hasHeightForWidth());
        dsb_p_a->setSizePolicy(sizePolicy);
        dsb_p_a->setDecimals(4);
        dsb_p_a->setMinimum(-9999.000000000000000);
        dsb_p_a->setMaximum(9999.000000000000000);

        horizontalLayout_10->addWidget(dsb_p_a);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_10->addWidget(label_16);

        dsb_p_b = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_p_b->setObjectName(QString::fromUtf8("dsb_p_b"));
        sizePolicy.setHeightForWidth(dsb_p_b->sizePolicy().hasHeightForWidth());
        dsb_p_b->setSizePolicy(sizePolicy);
        dsb_p_b->setDecimals(4);
        dsb_p_b->setMinimum(-9999.000000000000000);
        dsb_p_b->setMaximum(9999.000000000000000);

        horizontalLayout_10->addWidget(dsb_p_b);

        label_17 = new QLabel(verticalLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_10->addWidget(label_17);

        dsb_p_c = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_p_c->setObjectName(QString::fromUtf8("dsb_p_c"));
        sizePolicy.setHeightForWidth(dsb_p_c->sizePolicy().hasHeightForWidth());
        dsb_p_c->setSizePolicy(sizePolicy);
        dsb_p_c->setDecimals(4);
        dsb_p_c->setMinimum(-9999.000000000000000);
        dsb_p_c->setMaximum(9999.000000000000000);

        horizontalLayout_10->addWidget(dsb_p_c);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_11->addWidget(label_18);

        dsb_kk = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_kk->setObjectName(QString::fromUtf8("dsb_kk"));
        sizePolicy.setHeightForWidth(dsb_kk->sizePolicy().hasHeightForWidth());
        dsb_kk->setSizePolicy(sizePolicy);
        dsb_kk->setMaximum(1.000000000000000);

        horizontalLayout_11->addWidget(dsb_kk);

        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_11->addWidget(label_19);

        sb_qn = new QSpinBox(verticalLayoutWidget);
        sb_qn->setObjectName(QString::fromUtf8("sb_qn"));
        sizePolicy.setHeightForWidth(sb_qn->sizePolicy().hasHeightForWidth());
        sb_qn->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(sb_qn);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_11->addWidget(label_20);

        dsb_q0 = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_q0->setObjectName(QString::fromUtf8("dsb_q0"));
        sizePolicy.setHeightForWidth(dsb_q0->sizePolicy().hasHeightForWidth());
        dsb_q0->setSizePolicy(sizePolicy);
        dsb_q0->setMaximum(100.000000000000000);

        horizontalLayout_11->addWidget(dsb_q0);

        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_11->addWidget(label_21);

        sb_dq = new QSpinBox(verticalLayoutWidget);
        sb_dq->setObjectName(QString::fromUtf8("sb_dq"));
        sizePolicy.setHeightForWidth(sb_dq->sizePolicy().hasHeightForWidth());
        sb_dq->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(sb_dq);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_grid = new QLabel(verticalLayoutWidget);
        label_grid->setObjectName(QString::fromUtf8("label_grid"));

        horizontalLayout_5->addWidget(label_grid);

        dsb_x = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_x->setObjectName(QString::fromUtf8("dsb_x"));
        sizePolicy.setHeightForWidth(dsb_x->sizePolicy().hasHeightForWidth());
        dsb_x->setSizePolicy(sizePolicy);
        dsb_x->setMaximum(9999.000000000000000);

        horizontalLayout_5->addWidget(dsb_x);

        label_grid_2 = new QLabel(verticalLayoutWidget);
        label_grid_2->setObjectName(QString::fromUtf8("label_grid_2"));

        horizontalLayout_5->addWidget(label_grid_2);

        dsb_y = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_y->setObjectName(QString::fromUtf8("dsb_y"));
        sizePolicy.setHeightForWidth(dsb_y->sizePolicy().hasHeightForWidth());
        dsb_y->setSizePolicy(sizePolicy);
        dsb_y->setMaximum(9999.000000000000000);

        horizontalLayout_5->addWidget(dsb_y);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_grid_3 = new QLabel(verticalLayoutWidget);
        label_grid_3->setObjectName(QString::fromUtf8("label_grid_3"));

        horizontalLayout_7->addWidget(label_grid_3);

        sb_n_r = new QSpinBox(verticalLayoutWidget);
        sb_n_r->setObjectName(QString::fromUtf8("sb_n_r"));
        sizePolicy.setHeightForWidth(sb_n_r->sizePolicy().hasHeightForWidth());
        sb_n_r->setSizePolicy(sizePolicy);
        sb_n_r->setMaximum(999);

        horizontalLayout_7->addWidget(sb_n_r);

        label_grid_4 = new QLabel(verticalLayoutWidget);
        label_grid_4->setObjectName(QString::fromUtf8("label_grid_4"));

        horizontalLayout_7->addWidget(label_grid_4);

        sb_n_c = new QSpinBox(verticalLayoutWidget);
        sb_n_c->setObjectName(QString::fromUtf8("sb_n_c"));
        sizePolicy.setHeightForWidth(sb_n_c->sizePolicy().hasHeightForWidth());
        sb_n_c->setSizePolicy(sizePolicy);
        sb_n_c->setMaximum(999);

        horizontalLayout_7->addWidget(sb_n_c);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        dsb_c_num = new QDoubleSpinBox(verticalLayoutWidget);
        dsb_c_num->setObjectName(QString::fromUtf8("dsb_c_num"));
        sizePolicy.setHeightForWidth(dsb_c_num->sizePolicy().hasHeightForWidth());
        dsb_c_num->setSizePolicy(sizePolicy);
        dsb_c_num->setMaximum(1.500000000000000);
        dsb_c_num->setSingleStep(0.100000000000000);
        dsb_c_num->setValue(0.300000000000000);

        horizontalLayout_6->addWidget(dsb_c_num);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        sb_k_num = new QSpinBox(verticalLayoutWidget);
        sb_k_num->setObjectName(QString::fromUtf8("sb_k_num"));
        sizePolicy.setHeightForWidth(sb_k_num->sizePolicy().hasHeightForWidth());
        sb_k_num->setSizePolicy(sizePolicy);
        sb_k_num->setMinimum(1);
        sb_k_num->setMaximum(9999);
        sb_k_num->setValue(4);

        horizontalLayout_6->addWidget(sb_k_num);


        verticalLayout->addLayout(horizontalLayout_6);

        cb_error = new QCheckBox(verticalLayoutWidget);
        cb_error->setObjectName(QString::fromUtf8("cb_error"));
        cb_error->setChecked(true);
        cb_error->setTristate(false);

        verticalLayout->addWidget(cb_error);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineOutputPath = new QLineEdit(verticalLayoutWidget);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));

        horizontalLayout_3->addWidget(lineOutputPath);

        btnBrowseOutput = new QPushButton(verticalLayoutWidget);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        btnBrowseOutput->setFont(font1);

        horizontalLayout_3->addWidget(btnBrowseOutput);


        verticalLayout->addLayout(horizontalLayout_3);

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


        retranslateUi(ReservesEstimatesDialog);

        QMetaObject::connectSlotsByName(ReservesEstimatesDialog);
    } // setupUi

    void retranslateUi(QDialog *ReservesEstimatesDialog)
    {
        ReservesEstimatesDialog->setWindowTitle(QCoreApplication::translate("ReservesEstimatesDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Observed Data Layer:", nullptr));
        label_12->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Observed Data Field:", nullptr));
        label_4->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Coordinate:", nullptr));
        label_5->setText(QCoreApplication::translate("ReservesEstimatesDialog", "X:", nullptr));
        label_10->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Y:", nullptr));
        label_2->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Element:", nullptr));
        label_3->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Neighbor radius:", nullptr));
        label_7->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Azimuth:", nullptr));
        label_11->setText(QCoreApplication::translate("ReservesEstimatesDialog", "X0:", nullptr));
        label_13->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Y0:", nullptr));
        label_26->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Z0:", nullptr));
        label_14->setText(QCoreApplication::translate("ReservesEstimatesDialog", "DZ:", nullptr));
        label_15->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Pa:", nullptr));
        label_16->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Pb:", nullptr));
        label_17->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Pc:", nullptr));
        label_18->setText(QCoreApplication::translate("ReservesEstimatesDialog", "kk:", nullptr));
        label_19->setText(QCoreApplication::translate("ReservesEstimatesDialog", "QN:", nullptr));
        label_20->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Q0:", nullptr));
        label_21->setText(QCoreApplication::translate("ReservesEstimatesDialog", "DQ:", nullptr));
        label_grid->setText(QCoreApplication::translate("ReservesEstimatesDialog", "The X interval size:", nullptr));
        label_grid_2->setText(QCoreApplication::translate("ReservesEstimatesDialog", "The Y interval size:", nullptr));
        label_grid_3->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Number of rows\357\274\232", nullptr));
        label_grid_4->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Number of columns\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("ReservesEstimatesDialog", "The c value\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Nearest points\357\274\232", nullptr));
        cb_error->setText(QCoreApplication::translate("ReservesEstimatesDialog", "The leave-out-one method was used for precision estimation during model fitting.", nullptr));
        label_6->setText(QCoreApplication::translate("ReservesEstimatesDialog", "Output Path\357\274\232", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("ReservesEstimatesDialog", "...", nullptr));
        btnComfirm->setText(QCoreApplication::translate("ReservesEstimatesDialog", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QCoreApplication::translate("ReservesEstimatesDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservesEstimatesDialog: public Ui_ReservesEstimatesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVESESTIMATESDIALOG_H
