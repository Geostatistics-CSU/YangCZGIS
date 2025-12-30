/********************************************************************************
** Form generated from reading UI file 'YCZFilterServiceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YCZFILTERSERVICEDIALOG_H
#define UI_YCZFILTERSERVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_YCZFilterServiceDialogClass
{
public:
    QComboBox *cmbObPath;
    QPushButton *btnComfirm;
    QPushButton *btnCancel;
    QLabel *label;
    QPushButton *btnBrowseObserved;
    QComboBox *cmbUnobPath;
    QLabel *label_2;
    QPushButton *btnBrowseUnob;
    QLabel *label_3;
    QComboBox *cmbObVal;
    QLabel *label_4;
    QComboBox *cmbObLbl;
    QLabel *label_5;
    QComboBox *cmbUnobLbl;
    QLabel *label_6;
    QPushButton *btnBrowseOutput;
    QLineEdit *lineOutputPath;

    void setupUi(QDialog *YCZFilterServiceDialogClass)
    {
        if (YCZFilterServiceDialogClass->objectName().isEmpty())
            YCZFilterServiceDialogClass->setObjectName(QString::fromUtf8("YCZFilterServiceDialogClass"));
        YCZFilterServiceDialogClass->resize(423, 337);
        cmbObPath = new QComboBox(YCZFilterServiceDialogClass);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));
        cmbObPath->setGeometry(QRect(108, 30, 231, 22));
        btnComfirm = new QPushButton(YCZFilterServiceDialogClass);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));
        btnComfirm->setGeometry(QRect(60, 290, 71, 23));
        btnCancel = new QPushButton(YCZFilterServiceDialogClass);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(300, 290, 71, 23));
        label = new QLabel(YCZFilterServiceDialogClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 61, 21));
        btnBrowseObserved = new QPushButton(YCZFilterServiceDialogClass);
        btnBrowseObserved->setObjectName(QString::fromUtf8("btnBrowseObserved"));
        btnBrowseObserved->setGeometry(QRect(350, 30, 41, 23));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        btnBrowseObserved->setFont(font);
        cmbUnobPath = new QComboBox(YCZFilterServiceDialogClass);
        cmbUnobPath->setObjectName(QString::fromUtf8("cmbUnobPath"));
        cmbUnobPath->setGeometry(QRect(108, 70, 231, 22));
        label_2 = new QLabel(YCZFilterServiceDialogClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 61, 21));
        btnBrowseUnob = new QPushButton(YCZFilterServiceDialogClass);
        btnBrowseUnob->setObjectName(QString::fromUtf8("btnBrowseUnob"));
        btnBrowseUnob->setGeometry(QRect(350, 70, 41, 23));
        btnBrowseUnob->setFont(font);
        label_3 = new QLabel(YCZFilterServiceDialogClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 150, 151, 21));
        cmbObVal = new QComboBox(YCZFilterServiceDialogClass);
        cmbObVal->setObjectName(QString::fromUtf8("cmbObVal"));
        cmbObVal->setGeometry(QRect(180, 150, 211, 22));
        label_4 = new QLabel(YCZFilterServiceDialogClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 190, 151, 21));
        cmbObLbl = new QComboBox(YCZFilterServiceDialogClass);
        cmbObLbl->setObjectName(QString::fromUtf8("cmbObLbl"));
        cmbObLbl->setGeometry(QRect(180, 190, 211, 22));
        label_5 = new QLabel(YCZFilterServiceDialogClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 230, 151, 21));
        cmbUnobLbl = new QComboBox(YCZFilterServiceDialogClass);
        cmbUnobLbl->setObjectName(QString::fromUtf8("cmbUnobLbl"));
        cmbUnobLbl->setGeometry(QRect(180, 230, 211, 22));
        label_6 = new QLabel(YCZFilterServiceDialogClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 110, 61, 21));
        btnBrowseOutput = new QPushButton(YCZFilterServiceDialogClass);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        btnBrowseOutput->setGeometry(QRect(350, 110, 41, 23));
        btnBrowseOutput->setFont(font);
        lineOutputPath = new QLineEdit(YCZFilterServiceDialogClass);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));
        lineOutputPath->setGeometry(QRect(110, 110, 231, 21));

        retranslateUi(YCZFilterServiceDialogClass);

        QMetaObject::connectSlotsByName(YCZFilterServiceDialogClass);
    } // setupUi

    void retranslateUi(QDialog *YCZFilterServiceDialogClass)
    {
        YCZFilterServiceDialogClass->setWindowTitle(QCoreApplication::translate("YCZFilterServiceDialogClass", "YCZFilterServiceDialog", nullptr));
        btnComfirm->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\345\267\262\347\237\245\346\225\260\346\215\256\357\274\232", nullptr));
        btnBrowseObserved->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "...", nullptr));
        label_2->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\346\234\252\347\237\245\346\225\260\346\215\256\357\274\232", nullptr));
        btnBrowseUnob->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "...", nullptr));
        label_3->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\345\267\262\347\237\245\346\225\260\346\215\256\345\223\201\344\275\215\345\255\227\346\256\265\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\345\267\262\347\237\245\346\225\260\346\215\256\346\240\207\347\255\276\345\255\227\346\256\265\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\346\234\252\347\237\245\346\225\260\346\215\256\346\240\207\347\255\276\345\255\227\346\256\265\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "\350\276\223\345\207\272\350\267\257\345\276\204\357\274\232", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("YCZFilterServiceDialogClass", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YCZFilterServiceDialogClass: public Ui_YCZFilterServiceDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YCZFILTERSERVICEDIALOG_H
