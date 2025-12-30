/********************************************************************************
** Form generated from reading UI file 'yangczfservicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YANGCZFSERVICEDIALOG_H
#define UI_YANGCZFSERVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YangCZFServiceDialog
{
public:
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
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_22;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_grid_2;
    QSpinBox *sb_t_num;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_20;
    QLineEdit *lineOutputPath;
    QPushButton *btnBrowseOutput;

    void setupUi(QDialog *YangCZFServiceDialog)
    {
        if (YangCZFServiceDialog->objectName().isEmpty())
            YangCZFServiceDialog->setObjectName(QString::fromUtf8("YangCZFServiceDialog"));
        YangCZFServiceDialog->resize(591, 256);
        QFont font;
        font.setPointSize(11);
        YangCZFServiceDialog->setFont(font);
        widget = new QWidget(YangCZFServiceDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 571, 81));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 551, 61));
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

        horizontalLayoutWidget = new QWidget(YangCZFServiceDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 110, 571, 31));
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

        label_2 = new QLabel(YangCZFServiceDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 571, 16));
        layoutWidget = new QWidget(YangCZFServiceDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 220, 571, 25));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);

        btnComfirm = new QPushButton(layoutWidget);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));

        horizontalLayout_8->addWidget(btnComfirm);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_21);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_8->addWidget(btnCancel);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_22);

        horizontalLayoutWidget_2 = new QWidget(YangCZFServiceDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 146, 571, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_grid_2 = new QLabel(horizontalLayoutWidget_2);
        label_grid_2->setObjectName(QString::fromUtf8("label_grid_2"));

        horizontalLayout->addWidget(label_grid_2);

        sb_t_num = new QSpinBox(horizontalLayoutWidget_2);
        sb_t_num->setObjectName(QString::fromUtf8("sb_t_num"));
        sizePolicy.setHeightForWidth(sb_t_num->sizePolicy().hasHeightForWidth());
        sb_t_num->setSizePolicy(sizePolicy);
        sb_t_num->setMinimum(1);
        sb_t_num->setMaximum(9999);
        sb_t_num->setValue(5);

        horizontalLayout->addWidget(sb_t_num);

        layoutWidget_2 = new QWidget(YangCZFServiceDialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 180, 571, 30));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_6->addWidget(label_20);

        lineOutputPath = new QLineEdit(layoutWidget_2);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));

        horizontalLayout_6->addWidget(lineOutputPath);

        btnBrowseOutput = new QPushButton(layoutWidget_2);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        btnBrowseOutput->setFont(font1);

        horizontalLayout_6->addWidget(btnBrowseOutput);


        retranslateUi(YangCZFServiceDialog);

        QMetaObject::connectSlotsByName(YangCZFServiceDialog);
    } // setupUi

    void retranslateUi(QDialog *YangCZFServiceDialog)
    {
        YangCZFServiceDialog->setWindowTitle(QCoreApplication::translate("YangCZFServiceDialog", "YangCZ-Filter", nullptr));
        label_7->setText(QCoreApplication::translate("YangCZFServiceDialog", "Coordinate:", nullptr));
        label_16->setText(QCoreApplication::translate("YangCZFServiceDialog", "X:", nullptr));
        label_17->setText(QCoreApplication::translate("YangCZFServiceDialog", "Y:", nullptr));
        label_18->setText(QCoreApplication::translate("YangCZFServiceDialog", "Z:", nullptr));
        label_19->setText(QCoreApplication::translate("YangCZFServiceDialog", "Variable:", nullptr));
        label_2->setText(QCoreApplication::translate("YangCZFServiceDialog", "Input dataset:", nullptr));
        btnComfirm->setText(QCoreApplication::translate("YangCZFServiceDialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("YangCZFServiceDialog", "Cancel", nullptr));
        label_grid_2->setText(QCoreApplication::translate("YangCZFServiceDialog", "Times of filter:", nullptr));
        label_20->setText(QCoreApplication::translate("YangCZFServiceDialog", "Save path:", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("YangCZFServiceDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YangCZFServiceDialog: public Ui_YangCZFServiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YANGCZFSERVICEDIALOG_H
