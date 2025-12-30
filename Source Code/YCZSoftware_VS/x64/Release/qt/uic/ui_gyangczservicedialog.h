/********************************************************************************
** Form generated from reading UI file 'gyangczservicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GYANGCZSERVICEDIALOG_H
#define UI_GYANGCZSERVICEDIALOG_H

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

class Ui_GYangCZServiceDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *cb_error;
    QCheckBox *cb_log;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label;
    QWidget *widget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
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
    QLabel *label_11;
    QComboBox *cmb_z;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_label;
    QComboBox *cmbObLab;
    QGroupBox *groupBox;
    QComboBox *cmb_choose;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineOutputPath;
    QPushButton *btnBrowseOutput;
    QWidget *widget_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QComboBox *cmb_unknow;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_17;
    QComboBox *cmb_x_u;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_18;
    QComboBox *cmb_y_u;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_19;
    QComboBox *cmb_z_u;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_label_2;
    QComboBox *cmbObUnLab;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_9;
    QDoubleSpinBox *dsb_c_num;
    QLabel *label_8;
    QSpinBox *sb_k_num;
    QLabel *label_16;
    QSpinBox *sb_k_num_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QComboBox *cmbObVal;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_grid;
    QLineEdit *line_size;

    void setupUi(QDialog *GYangCZServiceDialog)
    {
        if (GYangCZServiceDialog->objectName().isEmpty())
            GYangCZServiceDialog->setObjectName(QString::fromUtf8("GYangCZServiceDialog"));
        GYangCZServiceDialog->resize(856, 730);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(GYangCZServiceDialog->sizePolicy().hasHeightForWidth());
        GYangCZServiceDialog->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        GYangCZServiceDialog->setFont(font);
        verticalLayoutWidget = new QWidget(GYangCZServiceDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 630, 821, 83));
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

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

        label = new QLabel(GYangCZServiceDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 819, 15));
        widget = new QWidget(GYangCZServiceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 821, 118));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 801, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cmbObPath = new QComboBox(verticalLayoutWidget_2);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));

        verticalLayout_2->addWidget(cmbObPath);

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
        cmb_y->setMinimumSize(QSize(100, 0));
        cmb_y->setEditable(false);

        horizontalLayout->addWidget(cmb_y);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);

        cmb_z = new QComboBox(verticalLayoutWidget_2);
        cmb_z->setObjectName(QString::fromUtf8("cmb_z"));
        cmb_z->setMinimumSize(QSize(100, 0));
        cmb_z->setEditable(false);

        horizontalLayout->addWidget(cmb_z);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_label = new QLabel(verticalLayoutWidget_2);
        label_label->setObjectName(QString::fromUtf8("label_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_label->sizePolicy().hasHeightForWidth());
        label_label->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_label);

        cmbObLab = new QComboBox(verticalLayoutWidget_2);
        cmbObLab->setObjectName(QString::fromUtf8("cmbObLab"));
        cmbObLab->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmbObLab->sizePolicy().hasHeightForWidth());
        cmbObLab->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(cmbObLab);


        verticalLayout_2->addLayout(horizontalLayout_5);

        groupBox = new QGroupBox(GYangCZServiceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 200, 821, 80));
        cmb_choose = new QComboBox(groupBox);
        cmb_choose->addItem(QString());
        cmb_choose->addItem(QString());
        cmb_choose->setObjectName(QString::fromUtf8("cmb_choose"));
        cmb_choose->setGeometry(QRect(8, 20, 801, 21));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 50, 801, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineOutputPath = new QLineEdit(layoutWidget);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));

        horizontalLayout_3->addWidget(lineOutputPath);

        btnBrowseOutput = new QPushButton(layoutWidget);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        btnBrowseOutput->setFont(font1);

        horizontalLayout_3->addWidget(btnBrowseOutput);

        widget_2 = new QWidget(GYangCZServiceDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(20, 310, 821, 121));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(50);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        verticalLayoutWidget_4 = new QWidget(widget_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 801, 101));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        cmb_unknow = new QComboBox(verticalLayoutWidget_4);
        cmb_unknow->setObjectName(QString::fromUtf8("cmb_unknow"));

        verticalLayout_4->addWidget(cmb_unknow);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(verticalLayoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        label_17 = new QLabel(verticalLayoutWidget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_6->addWidget(label_17);

        cmb_x_u = new QComboBox(verticalLayoutWidget_4);
        cmb_x_u->setObjectName(QString::fromUtf8("cmb_x_u"));
        cmb_x_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(cmb_x_u);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        label_18 = new QLabel(verticalLayoutWidget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setEnabled(true);

        horizontalLayout_6->addWidget(label_18);

        cmb_y_u = new QComboBox(verticalLayoutWidget_4);
        cmb_y_u->setObjectName(QString::fromUtf8("cmb_y_u"));
        cmb_y_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(cmb_y_u);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        label_19 = new QLabel(verticalLayoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_6->addWidget(label_19);

        cmb_z_u = new QComboBox(verticalLayoutWidget_4);
        cmb_z_u->setObjectName(QString::fromUtf8("cmb_z_u"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cmb_z_u->sizePolicy().hasHeightForWidth());
        cmb_z_u->setSizePolicy(sizePolicy4);
        cmb_z_u->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(cmb_z_u);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_label_2 = new QLabel(verticalLayoutWidget_4);
        label_label_2->setObjectName(QString::fromUtf8("label_label_2"));
        sizePolicy1.setHeightForWidth(label_label_2->sizePolicy().hasHeightForWidth());
        label_label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_label_2);

        cmbObUnLab = new QComboBox(verticalLayoutWidget_4);
        cmbObUnLab->setObjectName(QString::fromUtf8("cmbObUnLab"));
        cmbObUnLab->setEnabled(true);
        sizePolicy2.setHeightForWidth(cmbObUnLab->sizePolicy().hasHeightForWidth());
        cmbObUnLab->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(cmbObUnLab);


        verticalLayout_4->addLayout(horizontalLayout_7);

        label_3 = new QLabel(GYangCZServiceDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 290, 819, 15));
        groupBox_2 = new QGroupBox(GYangCZServiceDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 480, 821, 131));
        formLayoutWidget = new QWidget(groupBox_2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 801, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        dsb_c_num = new QDoubleSpinBox(formLayoutWidget);
        dsb_c_num->setObjectName(QString::fromUtf8("dsb_c_num"));
        dsb_c_num->setMaximum(1.500000000000000);
        dsb_c_num->setSingleStep(0.100000000000000);
        dsb_c_num->setValue(0.300000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dsb_c_num);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        sb_k_num = new QSpinBox(formLayoutWidget);
        sb_k_num->setObjectName(QString::fromUtf8("sb_k_num"));
        sb_k_num->setMinimum(1);
        sb_k_num->setMaximum(9999);
        sb_k_num->setValue(15);

        formLayout->setWidget(1, QFormLayout::FieldRole, sb_k_num);

        label_16 = new QLabel(formLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_16);

        sb_k_num_2 = new QSpinBox(formLayoutWidget);
        sb_k_num_2->setObjectName(QString::fromUtf8("sb_k_num_2"));
        sb_k_num_2->setMinimum(1);
        sb_k_num_2->setMaximum(9999);
        sb_k_num_2->setValue(15);

        formLayout->setWidget(2, QFormLayout::FieldRole, sb_k_num_2);

        horizontalLayoutWidget = new QWidget(GYangCZServiceDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 150, 811, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_2->addWidget(label_12);

        cmbObVal = new QComboBox(horizontalLayoutWidget);
        cmbObVal->setObjectName(QString::fromUtf8("cmbObVal"));
        cmbObVal->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cmbObVal->sizePolicy().hasHeightForWidth());
        cmbObVal->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(cmbObVal);

        horizontalLayoutWidget_2 = new QWidget(GYangCZServiceDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 440, 821, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_grid = new QLabel(horizontalLayoutWidget_2);
        label_grid->setObjectName(QString::fromUtf8("label_grid"));

        horizontalLayout_8->addWidget(label_grid);

        line_size = new QLineEdit(horizontalLayoutWidget_2);
        line_size->setObjectName(QString::fromUtf8("line_size"));

        horizontalLayout_8->addWidget(line_size);


        retranslateUi(GYangCZServiceDialog);

        QMetaObject::connectSlotsByName(GYangCZServiceDialog);
    } // setupUi

    void retranslateUi(QDialog *GYangCZServiceDialog)
    {
        GYangCZServiceDialog->setWindowTitle(QCoreApplication::translate("GYangCZServiceDialog", "GYangCZ", nullptr));
        cb_error->setText(QCoreApplication::translate("GYangCZServiceDialog", "Cross validation", nullptr));
        cb_log->setText(QCoreApplication::translate("GYangCZServiceDialog", "Log transformation", nullptr));
        btnComfirm->setText(QCoreApplication::translate("GYangCZServiceDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("GYangCZServiceDialog", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("GYangCZServiceDialog", "Input dataset:", nullptr));
        label_4->setText(QCoreApplication::translate("GYangCZServiceDialog", "Coordinate:", nullptr));
        label_5->setText(QCoreApplication::translate("GYangCZServiceDialog", "X:", nullptr));
        label_10->setText(QCoreApplication::translate("GYangCZServiceDialog", "Y:", nullptr));
        label_11->setText(QCoreApplication::translate("GYangCZServiceDialog", "Z:", nullptr));
        label_label->setText(QCoreApplication::translate("GYangCZServiceDialog", "Data id:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GYangCZServiceDialog", "Output file", nullptr));
        cmb_choose->setItemText(0, QCoreApplication::translate("GYangCZServiceDialog", "CSV", nullptr));
        cmb_choose->setItemText(1, QCoreApplication::translate("GYangCZServiceDialog", "Surface raster(.tif)", nullptr));

        label_2->setText(QCoreApplication::translate("GYangCZServiceDialog", "Save path:", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("GYangCZServiceDialog", "...", nullptr));
        label_7->setText(QCoreApplication::translate("GYangCZServiceDialog", "Coordinate:", nullptr));
        label_17->setText(QCoreApplication::translate("GYangCZServiceDialog", "X:", nullptr));
        label_18->setText(QCoreApplication::translate("GYangCZServiceDialog", "Y:", nullptr));
        label_19->setText(QCoreApplication::translate("GYangCZServiceDialog", "Z:", nullptr));
        label_label_2->setText(QCoreApplication::translate("GYangCZServiceDialog", "Data id:", nullptr));
        label_3->setText(QCoreApplication::translate("GYangCZServiceDialog", "Input unobserved dataset:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GYangCZServiceDialog", "Parameter setting", nullptr));
        label_9->setText(QCoreApplication::translate("GYangCZServiceDialog", "Parameter c\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("GYangCZServiceDialog", "Number of points\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("GYangCZServiceDialog", "Size of local region:", nullptr));
        label_12->setText(QCoreApplication::translate("GYangCZServiceDialog", "Variable:", nullptr));
        label_grid->setText(QCoreApplication::translate("GYangCZServiceDialog", "Output cell size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GYangCZServiceDialog: public Ui_GYangCZServiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GYANGCZSERVICEDIALOG_H
