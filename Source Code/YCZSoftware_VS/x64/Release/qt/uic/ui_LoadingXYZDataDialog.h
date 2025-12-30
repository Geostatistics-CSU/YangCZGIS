/********************************************************************************
** Form generated from reading UI file 'LoadingXYZDataDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGXYZDATADIALOG_H
#define UI_LOADINGXYZDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingXYZDataDialogClass
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lblPath;
    QLineEdit *linePath;
    QLabel *lblX;
    QComboBox *cmbXField;
    QLabel *lblY;
    QComboBox *cmbYField;
    QLabel *lblZ;
    QComboBox *cmbZField;
    QLabel *lblSeperator;
    QComboBox *cmbSeperator;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnComfirm;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *LoadingXYZDataDialogClass)
    {
        if (LoadingXYZDataDialogClass->objectName().isEmpty())
            LoadingXYZDataDialogClass->setObjectName(QString::fromUtf8("LoadingXYZDataDialogClass"));
        LoadingXYZDataDialogClass->resize(474, 319);
        QFont font;
        font.setPointSize(11);
        LoadingXYZDataDialogClass->setFont(font);
        formLayoutWidget = new QWidget(LoadingXYZDataDialogClass);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 451, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblPath = new QLabel(formLayoutWidget);
        lblPath->setObjectName(QString::fromUtf8("lblPath"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblPath);

        linePath = new QLineEdit(formLayoutWidget);
        linePath->setObjectName(QString::fromUtf8("linePath"));
        linePath->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, linePath);

        lblX = new QLabel(formLayoutWidget);
        lblX->setObjectName(QString::fromUtf8("lblX"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblX);

        cmbXField = new QComboBox(formLayoutWidget);
        cmbXField->setObjectName(QString::fromUtf8("cmbXField"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cmbXField);

        lblY = new QLabel(formLayoutWidget);
        lblY->setObjectName(QString::fromUtf8("lblY"));

        formLayout->setWidget(6, QFormLayout::LabelRole, lblY);

        cmbYField = new QComboBox(formLayoutWidget);
        cmbYField->setObjectName(QString::fromUtf8("cmbYField"));

        formLayout->setWidget(6, QFormLayout::FieldRole, cmbYField);

        lblZ = new QLabel(formLayoutWidget);
        lblZ->setObjectName(QString::fromUtf8("lblZ"));

        formLayout->setWidget(8, QFormLayout::LabelRole, lblZ);

        cmbZField = new QComboBox(formLayoutWidget);
        cmbZField->setObjectName(QString::fromUtf8("cmbZField"));

        formLayout->setWidget(8, QFormLayout::FieldRole, cmbZField);

        lblSeperator = new QLabel(formLayoutWidget);
        lblSeperator->setObjectName(QString::fromUtf8("lblSeperator"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lblSeperator);

        cmbSeperator = new QComboBox(formLayoutWidget);
        cmbSeperator->setObjectName(QString::fromUtf8("cmbSeperator"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cmbSeperator);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer_4);

        horizontalLayoutWidget = new QWidget(LoadingXYZDataDialogClass);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 270, 451, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnComfirm = new QPushButton(horizontalLayoutWidget);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));

        horizontalLayout_2->addWidget(btnComfirm);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnCancel = new QPushButton(horizontalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setFont(font);

        horizontalLayout_2->addWidget(btnCancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        retranslateUi(LoadingXYZDataDialogClass);

        QMetaObject::connectSlotsByName(LoadingXYZDataDialogClass);
    } // setupUi

    void retranslateUi(QDialog *LoadingXYZDataDialogClass)
    {
        LoadingXYZDataDialogClass->setWindowTitle(QCoreApplication::translate("LoadingXYZDataDialogClass", "Import CSV", nullptr));
        lblPath->setText(QCoreApplication::translate("LoadingXYZDataDialogClass", "File Path\357\274\232", nullptr));
        lblX->setText(QCoreApplication::translate("LoadingXYZDataDialogClass", "X field\357\274\232", nullptr));
        lblY->setText(QCoreApplication::translate("LoadingXYZDataDialogClass", "Y field\357\274\232", nullptr));
        lblZ->setText(QCoreApplication::translate("LoadingXYZDataDialogClass", "Z field\357\274\232", nullptr));
        lblSeperator->setText(QCoreApplication::translate("LoadingXYZDataDialogClass", "Delimiters\357\274\232", nullptr));
        btnComfirm->setText(QCoreApplication::translate("LoadingXYZDataDialogClass", "Confirm", nullptr));
        btnCancel->setText(QCoreApplication::translate("LoadingXYZDataDialogClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingXYZDataDialogClass: public Ui_LoadingXYZDataDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGXYZDATADIALOG_H
