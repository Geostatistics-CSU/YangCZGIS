/********************************************************************************
** Form generated from reading UI file 'styangczservicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYANGCZSERVICEDIALOG_H
#define UI_STYANGCZSERVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_STYangCZServiceDialog
{
public:
    QLabel *label;
    QWidget *widget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *cmbObPath;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QComboBox *cmb_x;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QComboBox *cmb_y;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_19;
    QComboBox *cmbObVal_b;
    QLabel *label_27;
    QComboBox *cmbObVal_e;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_9;
    QDoubleSpinBox *dsb_c_num_s;
    QLabel *label_8;
    QSpinBox *sb_k_num_s;
    QGroupBox *groupBox_3;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QDoubleSpinBox *dsb_c_num_t;
    QLabel *label_13;
    QSpinBox *sb_k_num_t;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cb_log;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_22;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_20;
    QLineEdit *lineOutputPath;
    QPushButton *btnBrowseOutput;

    void setupUi(QDialog *STYangCZServiceDialog)
    {
        if (STYangCZServiceDialog->objectName().isEmpty())
            STYangCZServiceDialog->setObjectName(QString::fromUtf8("STYangCZServiceDialog"));
        STYangCZServiceDialog->resize(842, 472);
        QFont font;
        font.setPointSize(11);
        STYangCZServiceDialog->setFont(font);
        label = new QLabel(STYangCZServiceDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 819, 15));
        widget = new QWidget(STYangCZServiceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 821, 118));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 801, 101));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        cmbObPath = new QComboBox(verticalLayoutWidget_2);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));

        verticalLayout_3->addWidget(cmbObPath);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        cmb_x = new QComboBox(verticalLayoutWidget_2);
        cmb_x->setObjectName(QString::fromUtf8("cmb_x"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmb_x->sizePolicy().hasHeightForWidth());
        cmb_x->setSizePolicy(sizePolicy);
        cmb_x->setMinimumSize(QSize(100, 0));
        cmb_x->setEditable(false);

        horizontalLayout->addWidget(cmb_x);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(true);

        horizontalLayout->addWidget(label_10);

        cmb_y = new QComboBox(verticalLayoutWidget_2);
        cmb_y->setObjectName(QString::fromUtf8("cmb_y"));
        sizePolicy.setHeightForWidth(cmb_y->sizePolicy().hasHeightForWidth());
        cmb_y->setSizePolicy(sizePolicy);
        cmb_y->setMinimumSize(QSize(100, 0));
        cmb_y->setEditable(false);

        horizontalLayout->addWidget(cmb_y);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_19 = new QLabel(verticalLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_7->addWidget(label_19);

        cmbObVal_b = new QComboBox(verticalLayoutWidget_2);
        cmbObVal_b->setObjectName(QString::fromUtf8("cmbObVal_b"));
        cmbObVal_b->setEnabled(true);
        sizePolicy.setHeightForWidth(cmbObVal_b->sizePolicy().hasHeightForWidth());
        cmbObVal_b->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(cmbObVal_b);

        label_27 = new QLabel(verticalLayoutWidget_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_7->addWidget(label_27);

        cmbObVal_e = new QComboBox(verticalLayoutWidget_2);
        cmbObVal_e->setObjectName(QString::fromUtf8("cmbObVal_e"));
        cmbObVal_e->setEnabled(true);
        sizePolicy.setHeightForWidth(cmbObVal_e->sizePolicy().hasHeightForWidth());
        cmbObVal_e->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(cmbObVal_e);


        verticalLayout_3->addLayout(horizontalLayout_7);

        groupBox_2 = new QGroupBox(STYangCZServiceDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 220, 821, 81));
        formLayoutWidget = new QWidget(groupBox_2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 801, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        dsb_c_num_s = new QDoubleSpinBox(formLayoutWidget);
        dsb_c_num_s->setObjectName(QString::fromUtf8("dsb_c_num_s"));
        dsb_c_num_s->setMaximum(1.500000000000000);
        dsb_c_num_s->setSingleStep(0.100000000000000);
        dsb_c_num_s->setValue(0.300000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dsb_c_num_s);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        sb_k_num_s = new QSpinBox(formLayoutWidget);
        sb_k_num_s->setObjectName(QString::fromUtf8("sb_k_num_s"));
        sb_k_num_s->setMinimum(1);
        sb_k_num_s->setMaximum(9999);
        sb_k_num_s->setValue(15);

        formLayout->setWidget(1, QFormLayout::FieldRole, sb_k_num_s);

        groupBox_3 = new QGroupBox(STYangCZServiceDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 310, 821, 81));
        formLayoutWidget_2 = new QWidget(groupBox_3);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 20, 801, 51));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        dsb_c_num_t = new QDoubleSpinBox(formLayoutWidget_2);
        dsb_c_num_t->setObjectName(QString::fromUtf8("dsb_c_num_t"));
        dsb_c_num_t->setMaximum(1.500000000000000);
        dsb_c_num_t->setSingleStep(0.100000000000000);
        dsb_c_num_t->setValue(0.300000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dsb_c_num_t);

        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_13);

        sb_k_num_t = new QSpinBox(formLayoutWidget_2);
        sb_k_num_t->setObjectName(QString::fromUtf8("sb_k_num_t"));
        sb_k_num_t->setMinimum(1);
        sb_k_num_t->setMaximum(9999);
        sb_k_num_t->setValue(15);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sb_k_num_t);

        verticalLayoutWidget_3 = new QWidget(STYangCZServiceDialog);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 400, 821, 61));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cb_log = new QCheckBox(verticalLayoutWidget_3);
        cb_log->setObjectName(QString::fromUtf8("cb_log"));

        verticalLayout_4->addWidget(cb_log);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);

        btnComfirm = new QPushButton(verticalLayoutWidget_3);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));

        horizontalLayout_8->addWidget(btnComfirm);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_21);

        btnCancel = new QPushButton(verticalLayoutWidget_3);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_8->addWidget(btnCancel);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_22);


        verticalLayout_4->addLayout(horizontalLayout_8);

        groupBox = new QGroupBox(STYangCZServiceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 150, 821, 61));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 801, 30));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_6->addWidget(label_20);

        lineOutputPath = new QLineEdit(layoutWidget);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));

        horizontalLayout_6->addWidget(lineOutputPath);

        btnBrowseOutput = new QPushButton(layoutWidget);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        btnBrowseOutput->setFont(font1);

        horizontalLayout_6->addWidget(btnBrowseOutput);


        retranslateUi(STYangCZServiceDialog);

        QMetaObject::connectSlotsByName(STYangCZServiceDialog);
    } // setupUi

    void retranslateUi(QDialog *STYangCZServiceDialog)
    {
        STYangCZServiceDialog->setWindowTitle(QCoreApplication::translate("STYangCZServiceDialog", "STYangCZ", nullptr));
        label->setText(QCoreApplication::translate("STYangCZServiceDialog", "Input dataset:", nullptr));
        label_4->setText(QCoreApplication::translate("STYangCZServiceDialog", "Coordinate:", nullptr));
        label_5->setText(QCoreApplication::translate("STYangCZServiceDialog", "X:", nullptr));
        label_10->setText(QCoreApplication::translate("STYangCZServiceDialog", "Y:", nullptr));
        label_19->setText(QCoreApplication::translate("STYangCZServiceDialog", "Begin time:", nullptr));
        label_27->setText(QCoreApplication::translate("STYangCZServiceDialog", "End time:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("STYangCZServiceDialog", "Spatial comprehensive random function", nullptr));
        label_9->setText(QCoreApplication::translate("STYangCZServiceDialog", "Parameter c\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("STYangCZServiceDialog", "Number of points\357\274\232", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("STYangCZServiceDialog", "Temporal comprehensive random function", nullptr));
        label_12->setText(QCoreApplication::translate("STYangCZServiceDialog", "Parameter c\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("STYangCZServiceDialog", "Number of points\357\274\232", nullptr));
        cb_log->setText(QCoreApplication::translate("STYangCZServiceDialog", "Log transformation", nullptr));
        btnComfirm->setText(QCoreApplication::translate("STYangCZServiceDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("STYangCZServiceDialog", "Cancel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("STYangCZServiceDialog", "Output file", nullptr));
        label_20->setText(QCoreApplication::translate("STYangCZServiceDialog", "Save path:", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("STYangCZServiceDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class STYangCZServiceDialog: public Ui_STYangCZServiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYANGCZSERVICEDIALOG_H
