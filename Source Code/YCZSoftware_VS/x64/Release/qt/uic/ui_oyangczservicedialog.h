/********************************************************************************
** Form generated from reading UI file 'oyangczservicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OYANGCZSERVICEDIALOG_H
#define UI_OYANGCZSERVICEDIALOG_H

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

class Ui_OYangCZServiceDialog
{
public:
    QWidget *widget_grid;
    QLabel *label_2;
    QWidget *widget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cmbObPath;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_19;
    QComboBox *cmbObVal;
    QGroupBox *groupBox;
    QComboBox *cmb_choose;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_20;
    QLineEdit *lineOutputPath;
    QPushButton *btnBrowseOutput;
    QLabel *label_21;
    QWidget *widget_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QComboBox *cmb_unknow;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_23;
    QComboBox *cmb_x_u;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_24;
    QComboBox *cmb_y_u;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_25;
    QComboBox *cmb_z_u;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_10;
    QDoubleSpinBox *dsb_c_num;
    QLabel *label_11;
    QSpinBox *sb_k_num;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cb_error;
    QCheckBox *cb_log;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_22;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_grid_2;
    QLineEdit *line_size;

    void setupUi(QDialog *OYangCZServiceDialog)
    {
        if (OYangCZServiceDialog->objectName().isEmpty())
            OYangCZServiceDialog->setObjectName(QString::fromUtf8("OYangCZServiceDialog"));
        OYangCZServiceDialog->resize(813, 620);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OYangCZServiceDialog->sizePolicy().hasHeightForWidth());
        OYangCZServiceDialog->setSizePolicy(sizePolicy);
        OYangCZServiceDialog->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(9);
        OYangCZServiceDialog->setFont(font);
        widget_grid = new QWidget(OYangCZServiceDialog);
        widget_grid->setObjectName(QString::fromUtf8("widget_grid"));
        widget_grid->setGeometry(QRect(20, 760, 569, 55));
        sizePolicy.setHeightForWidth(widget_grid->sizePolicy().hasHeightForWidth());
        widget_grid->setSizePolicy(sizePolicy);
        widget_grid->setMinimumSize(QSize(0, 55));
        label_2 = new QLabel(OYangCZServiceDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 819, 15));
        widget = new QWidget(OYangCZServiceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 791, 81));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 771, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cmbObPath = new QComboBox(verticalLayoutWidget_2);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));

        verticalLayout_2->addWidget(cmbObPath);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

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

        horizontalLayoutWidget = new QWidget(OYangCZServiceDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 120, 791, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_5->addWidget(label_19);

        cmbObVal = new QComboBox(horizontalLayoutWidget);
        cmbObVal->setObjectName(QString::fromUtf8("cmbObVal"));
        cmbObVal->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbObVal->sizePolicy().hasHeightForWidth());
        cmbObVal->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(cmbObVal);

        groupBox = new QGroupBox(OYangCZServiceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 170, 791, 91));
        cmb_choose = new QComboBox(groupBox);
        cmb_choose->addItem(QString());
        cmb_choose->addItem(QString());
        cmb_choose->setObjectName(QString::fromUtf8("cmb_choose"));
        cmb_choose->setGeometry(QRect(8, 20, 771, 21));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 50, 771, 30));
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

        label_21 = new QLabel(OYangCZServiceDialog);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 270, 819, 15));
        widget_2 = new QWidget(OYangCZServiceDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 290, 791, 81));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(50);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        verticalLayoutWidget_4 = new QWidget(widget_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 771, 61));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cmb_unknow = new QComboBox(verticalLayoutWidget_4);
        cmb_unknow->setObjectName(QString::fromUtf8("cmb_unknow"));

        verticalLayout_4->addWidget(cmb_unknow);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_22 = new QLabel(verticalLayoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_7->addWidget(label_22);

        horizontalSpacer_16 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        label_23 = new QLabel(verticalLayoutWidget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_7->addWidget(label_23);

        cmb_x_u = new QComboBox(verticalLayoutWidget_4);
        cmb_x_u->setObjectName(QString::fromUtf8("cmb_x_u"));
        cmb_x_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_7->addWidget(cmb_x_u);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        label_24 = new QLabel(verticalLayoutWidget_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setEnabled(true);

        horizontalLayout_7->addWidget(label_24);

        cmb_y_u = new QComboBox(verticalLayoutWidget_4);
        cmb_y_u->setObjectName(QString::fromUtf8("cmb_y_u"));
        cmb_y_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_7->addWidget(cmb_y_u);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);

        label_25 = new QLabel(verticalLayoutWidget_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_7->addWidget(label_25);

        cmb_z_u = new QComboBox(verticalLayoutWidget_4);
        cmb_z_u->setObjectName(QString::fromUtf8("cmb_z_u"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmb_z_u->sizePolicy().hasHeightForWidth());
        cmb_z_u->setSizePolicy(sizePolicy3);
        cmb_z_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_7->addWidget(cmb_z_u);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_19);


        verticalLayout_4->addLayout(horizontalLayout_7);

        groupBox_2 = new QGroupBox(OYangCZServiceDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 410, 791, 91));
        formLayoutWidget = new QWidget(groupBox_2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 771, 59));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        dsb_c_num = new QDoubleSpinBox(formLayoutWidget);
        dsb_c_num->setObjectName(QString::fromUtf8("dsb_c_num"));
        dsb_c_num->setMaximum(1.500000000000000);
        dsb_c_num->setSingleStep(0.100000000000000);
        dsb_c_num->setValue(0.300000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dsb_c_num);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_11);

        sb_k_num = new QSpinBox(formLayoutWidget);
        sb_k_num->setObjectName(QString::fromUtf8("sb_k_num"));
        sb_k_num->setMinimum(1);
        sb_k_num->setMaximum(9999);
        sb_k_num->setValue(15);

        formLayout->setWidget(1, QFormLayout::FieldRole, sb_k_num);

        verticalLayoutWidget_3 = new QWidget(OYangCZServiceDialog);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 507, 791, 97));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        cb_error = new QCheckBox(verticalLayoutWidget_3);
        cb_error->setObjectName(QString::fromUtf8("cb_error"));
        cb_error->setChecked(true);
        cb_error->setTristate(false);

        verticalLayout_3->addWidget(cb_error);

        cb_log = new QCheckBox(verticalLayoutWidget_3);
        cb_log->setObjectName(QString::fromUtf8("cb_log"));

        verticalLayout_3->addWidget(cb_log);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

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


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayoutWidget_2 = new QWidget(OYangCZServiceDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 380, 791, 27));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_grid_2 = new QLabel(horizontalLayoutWidget_2);
        label_grid_2->setObjectName(QString::fromUtf8("label_grid_2"));

        horizontalLayout->addWidget(label_grid_2);

        line_size = new QLineEdit(horizontalLayoutWidget_2);
        line_size->setObjectName(QString::fromUtf8("line_size"));

        horizontalLayout->addWidget(line_size);


        retranslateUi(OYangCZServiceDialog);

        QMetaObject::connectSlotsByName(OYangCZServiceDialog);
    } // setupUi

    void retranslateUi(QDialog *OYangCZServiceDialog)
    {
        OYangCZServiceDialog->setWindowTitle(QCoreApplication::translate("OYangCZServiceDialog", "OYangCZ", nullptr));
        label_2->setText(QCoreApplication::translate("OYangCZServiceDialog", "Input dataset:", nullptr));
        label_7->setText(QCoreApplication::translate("OYangCZServiceDialog", "Coordinate:", nullptr));
        label_16->setText(QCoreApplication::translate("OYangCZServiceDialog", "X:", nullptr));
        label_17->setText(QCoreApplication::translate("OYangCZServiceDialog", "Y:", nullptr));
        label_18->setText(QCoreApplication::translate("OYangCZServiceDialog", "Z:", nullptr));
        label_19->setText(QCoreApplication::translate("OYangCZServiceDialog", "Variable:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OYangCZServiceDialog", "Output file", nullptr));
        cmb_choose->setItemText(0, QCoreApplication::translate("OYangCZServiceDialog", "CSV", nullptr));
        cmb_choose->setItemText(1, QCoreApplication::translate("OYangCZServiceDialog", "Surface raster(.tif)", nullptr));

        label_20->setText(QCoreApplication::translate("OYangCZServiceDialog", "Save path:", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("OYangCZServiceDialog", "...", nullptr));
        label_21->setText(QCoreApplication::translate("OYangCZServiceDialog", "Input unobserved dataset:", nullptr));
        label_22->setText(QCoreApplication::translate("OYangCZServiceDialog", "Coordinate:", nullptr));
        label_23->setText(QCoreApplication::translate("OYangCZServiceDialog", "X:", nullptr));
        label_24->setText(QCoreApplication::translate("OYangCZServiceDialog", "Y:", nullptr));
        label_25->setText(QCoreApplication::translate("OYangCZServiceDialog", "Z:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OYangCZServiceDialog", "Parameter setting", nullptr));
        label_10->setText(QCoreApplication::translate("OYangCZServiceDialog", "Parameter c\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("OYangCZServiceDialog", "Number of points\357\274\232", nullptr));
        cb_error->setText(QCoreApplication::translate("OYangCZServiceDialog", "Cross validation", nullptr));
        cb_log->setText(QCoreApplication::translate("OYangCZServiceDialog", "Log transformation", nullptr));
        btnComfirm->setText(QCoreApplication::translate("OYangCZServiceDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("OYangCZServiceDialog", "Cancel", nullptr));
        label_grid_2->setText(QCoreApplication::translate("OYangCZServiceDialog", "Output cell size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OYangCZServiceDialog: public Ui_OYangCZServiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OYANGCZSERVICEDIALOG_H
