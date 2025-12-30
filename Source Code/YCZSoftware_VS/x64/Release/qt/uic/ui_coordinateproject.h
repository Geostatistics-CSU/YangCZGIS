/********************************************************************************
** Form generated from reading UI file 'coordinateproject.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COORDINATEPROJECT_H
#define UI_COORDINATEPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coordinateprojectClass
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpinBox *points_number;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *azimuth_angle;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QDoubleSpinBox *dip_angle;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QDoubleSpinBox *x_value;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QDoubleSpinBox *y_value;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_6;
    QDoubleSpinBox *z_value;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *input_path;
    QToolButton *choose_input_path;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *output_path;
    QToolButton *choose_output_path;
    QLabel *label_10;
    QTextEdit *output_name;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *confirm_button;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *cancel_button;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QDialog *coordinateprojectClass)
    {
        if (coordinateprojectClass->objectName().isEmpty())
            coordinateprojectClass->setObjectName(QString::fromUtf8("coordinateprojectClass"));
        coordinateprojectClass->resize(600, 451);
        verticalLayoutWidget = new QWidget(coordinateprojectClass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 570, 407));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        points_number = new QSpinBox(verticalLayoutWidget);
        points_number->setObjectName(QString::fromUtf8("points_number"));
        points_number->setMaximum(5000);

        horizontalLayout->addWidget(points_number);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        azimuth_angle = new QDoubleSpinBox(verticalLayoutWidget);
        azimuth_angle->setObjectName(QString::fromUtf8("azimuth_angle"));
        azimuth_angle->setMinimum(-180.000000000000000);
        azimuth_angle->setMaximum(180.000000000000000);
        azimuth_angle->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(azimuth_angle);

        horizontalSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        dip_angle = new QDoubleSpinBox(verticalLayoutWidget);
        dip_angle->setObjectName(QString::fromUtf8("dip_angle"));
        dip_angle->setMaximum(180.000000000000000);
        dip_angle->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(dip_angle);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(label_4);

        x_value = new QDoubleSpinBox(verticalLayoutWidget);
        x_value->setObjectName(QString::fromUtf8("x_value"));
        x_value->setMinimumSize(QSize(80, 0));
        x_value->setMinimum(-5000.000000000000000);
        x_value->setMaximum(5000.000000000000000);
        x_value->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(x_value);

        horizontalSpacer_6 = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        y_value = new QDoubleSpinBox(verticalLayoutWidget);
        y_value->setObjectName(QString::fromUtf8("y_value"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(y_value->sizePolicy().hasHeightForWidth());
        y_value->setSizePolicy(sizePolicy);
        y_value->setMinimumSize(QSize(80, 0));
        y_value->setMinimum(-5000.000000000000000);
        y_value->setMaximum(5000.000000000000000);
        y_value->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(y_value);

        horizontalSpacer_7 = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        z_value = new QDoubleSpinBox(verticalLayoutWidget);
        z_value->setObjectName(QString::fromUtf8("z_value"));
        z_value->setMinimumSize(QSize(80, 0));
        z_value->setMinimum(-5000.000000000000000);
        z_value->setMaximum(5000.000000000000000);
        z_value->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(z_value);

        horizontalSpacer_8 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_2);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        input_path = new QLineEdit(verticalLayoutWidget);
        input_path->setObjectName(QString::fromUtf8("input_path"));

        horizontalLayout_3->addWidget(input_path);

        choose_input_path = new QToolButton(verticalLayoutWidget);
        choose_input_path->setObjectName(QString::fromUtf8("choose_input_path"));

        horizontalLayout_3->addWidget(choose_input_path);


        verticalLayout->addLayout(horizontalLayout_3);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        output_path = new QLineEdit(verticalLayoutWidget);
        output_path->setObjectName(QString::fromUtf8("output_path"));

        horizontalLayout_6->addWidget(output_path);

        choose_output_path = new QToolButton(verticalLayoutWidget);
        choose_output_path->setObjectName(QString::fromUtf8("choose_output_path"));

        horizontalLayout_6->addWidget(choose_output_path);


        verticalLayout->addLayout(horizontalLayout_6);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_10);

        output_name = new QTextEdit(verticalLayoutWidget);
        output_name->setObjectName(QString::fromUtf8("output_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(output_name->sizePolicy().hasHeightForWidth());
        output_name->setSizePolicy(sizePolicy1);
        output_name->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(output_name);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        confirm_button = new QPushButton(verticalLayoutWidget);
        confirm_button->setObjectName(QString::fromUtf8("confirm_button"));

        horizontalLayout_4->addWidget(confirm_button);

        horizontalSpacer_9 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        cancel_button = new QPushButton(verticalLayoutWidget);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        horizontalLayout_4->addWidget(cancel_button);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(coordinateprojectClass);

        QMetaObject::connectSlotsByName(coordinateprojectClass);
    } // setupUi

    void retranslateUi(QDialog *coordinateprojectClass)
    {
        coordinateprojectClass->setWindowTitle(QCoreApplication::translate("coordinateprojectClass", "coordinateproject", nullptr));
        label->setText(QCoreApplication::translate("coordinateprojectClass", "Points Number:", nullptr));
        label_2->setText(QCoreApplication::translate("coordinateprojectClass", "Azimuth Angle\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("coordinateprojectClass", "Dip Angle\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("coordinateprojectClass", "New Origin in Old Coordinate:", nullptr));
        label_4->setText(QCoreApplication::translate("coordinateprojectClass", "  X:", nullptr));
        label_5->setText(QCoreApplication::translate("coordinateprojectClass", "  Y:", nullptr));
        label_6->setText(QCoreApplication::translate("coordinateprojectClass", "  Z:", nullptr));
        label_8->setText(QCoreApplication::translate("coordinateprojectClass", "Input File Path:", nullptr));
        choose_input_path->setText(QCoreApplication::translate("coordinateprojectClass", "...", nullptr));
        label_9->setText(QCoreApplication::translate("coordinateprojectClass", "Output File Path:", nullptr));
        choose_output_path->setText(QCoreApplication::translate("coordinateprojectClass", "...", nullptr));
        label_10->setText(QCoreApplication::translate("coordinateprojectClass", "Output File Name:", nullptr));
        confirm_button->setText(QCoreApplication::translate("coordinateprojectClass", "OK", nullptr));
        cancel_button->setText(QCoreApplication::translate("coordinateprojectClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coordinateprojectClass: public Ui_coordinateprojectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COORDINATEPROJECT_H
