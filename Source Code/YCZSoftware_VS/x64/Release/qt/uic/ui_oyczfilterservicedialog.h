/********************************************************************************
** Form generated from reading UI file 'oyczfilterservicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OYCZFILTERSERVICEDIALOG_H
#define UI_OYCZFILTERSERVICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OYCZFilterServiceDialog
{
public:
    QComboBox *cmbObPath;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *lineOutputPath;
    QComboBox *cmbRangePath;
    QPushButton *btnBrowseOutput;
    QComboBox *cmbObVal;
    QLabel *label_3;
    QPushButton *btnComfirm;
    QPushButton *btnCancel;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineSize;
    QLabel *label_9;
    QCheckBox *cb_error;
    QSpinBox *sb_k_num;
    QDoubleSpinBox *dsb_c_num;
    QComboBox *cmbRangePath_2;
    QLabel *label_area;

    void setupUi(QDialog *OYCZFilterServiceDialog)
    {
        if (OYCZFilterServiceDialog->objectName().isEmpty())
            OYCZFilterServiceDialog->setObjectName(QString::fromUtf8("OYCZFilterServiceDialog"));
        OYCZFilterServiceDialog->resize(573, 609);
        cmbObPath = new QComboBox(OYCZFilterServiceDialog);
        cmbObPath->setObjectName(QString::fromUtf8("cmbObPath"));
        cmbObPath->setGeometry(QRect(60, 40, 451, 22));
        label = new QLabel(OYCZFilterServiceDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 261, 21));
        label_2 = new QLabel(OYCZFilterServiceDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 70, 441, 21));
        label_6 = new QLabel(OYCZFilterServiceDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 130, 221, 21));
        lineOutputPath = new QLineEdit(OYCZFilterServiceDialog);
        lineOutputPath->setObjectName(QString::fromUtf8("lineOutputPath"));
        lineOutputPath->setGeometry(QRect(60, 160, 401, 21));
        cmbRangePath = new QComboBox(OYCZFilterServiceDialog);
        cmbRangePath->setObjectName(QString::fromUtf8("cmbRangePath"));
        cmbRangePath->setGeometry(QRect(60, 100, 451, 22));
        btnBrowseOutput = new QPushButton(OYCZFilterServiceDialog);
        btnBrowseOutput->setObjectName(QString::fromUtf8("btnBrowseOutput"));
        btnBrowseOutput->setGeometry(QRect(470, 160, 41, 23));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        btnBrowseOutput->setFont(font);
        cmbObVal = new QComboBox(OYCZFilterServiceDialog);
        cmbObVal->setObjectName(QString::fromUtf8("cmbObVal"));
        cmbObVal->setGeometry(QRect(60, 220, 451, 22));
        label_3 = new QLabel(OYCZFilterServiceDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 190, 451, 21));
        btnComfirm = new QPushButton(OYCZFilterServiceDialog);
        btnComfirm->setObjectName(QString::fromUtf8("btnComfirm"));
        btnComfirm->setGeometry(QRect(110, 480, 71, 23));
        btnCancel = new QPushButton(OYCZFilterServiceDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(340, 480, 71, 23));
        label_7 = new QLabel(OYCZFilterServiceDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 250, 451, 21));
        label_8 = new QLabel(OYCZFilterServiceDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 310, 451, 21));
        lineSize = new QLineEdit(OYCZFilterServiceDialog);
        lineSize->setObjectName(QString::fromUtf8("lineSize"));
        lineSize->setGeometry(QRect(60, 280, 451, 21));
        label_9 = new QLabel(OYCZFilterServiceDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 370, 451, 21));
        cb_error = new QCheckBox(OYCZFilterServiceDialog);
        cb_error->setObjectName(QString::fromUtf8("cb_error"));
        cb_error->setGeometry(QRect(60, 440, 451, 19));
        cb_error->setChecked(true);
        cb_error->setTristate(false);
        sb_k_num = new QSpinBox(OYCZFilterServiceDialog);
        sb_k_num->setObjectName(QString::fromUtf8("sb_k_num"));
        sb_k_num->setGeometry(QRect(60, 340, 451, 22));
        sb_k_num->setMaximum(9999);
        sb_k_num->setValue(15);
        dsb_c_num = new QDoubleSpinBox(OYCZFilterServiceDialog);
        dsb_c_num->setObjectName(QString::fromUtf8("dsb_c_num"));
        dsb_c_num->setGeometry(QRect(60, 400, 451, 22));
        dsb_c_num->setMaximum(1.500000000000000);
        dsb_c_num->setSingleStep(0.100000000000000);
        dsb_c_num->setValue(0.300000000000000);
        cmbRangePath_2 = new QComboBox(OYCZFilterServiceDialog);
        cmbRangePath_2->setObjectName(QString::fromUtf8("cmbRangePath_2"));
        cmbRangePath_2->setGeometry(QRect(50, 542, 789, 20));
        label_area = new QLabel(OYCZFilterServiceDialog);
        label_area->setObjectName(QString::fromUtf8("label_area"));
        label_area->setGeometry(QRect(50, 520, 789, 16));

        retranslateUi(OYCZFilterServiceDialog);

        QMetaObject::connectSlotsByName(OYCZFilterServiceDialog);
    } // setupUi

    void retranslateUi(QDialog *OYCZFilterServiceDialog)
    {
        OYCZFilterServiceDialog->setWindowTitle(QCoreApplication::translate("OYCZFilterServiceDialog", "OYCZFilterServiceDialog", nullptr));
        label->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\350\257\267\351\200\211\346\213\251\345\267\262\347\237\245\347\202\271\346\225\260\346\215\256\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\350\257\267\351\200\211\346\213\251\346\240\205\346\240\274\347\224\237\346\210\220\350\214\203\345\233\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\350\257\267\351\200\211\346\213\251\350\276\223\345\207\272\350\267\257\345\276\204\357\274\232", nullptr));
        btnBrowseOutput->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\350\257\267\351\200\211\346\213\251\346\217\222\345\200\274\345\261\236\346\200\247\345\255\227\346\256\265\357\274\232", nullptr));
        btnComfirm->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\345\217\226\346\266\210", nullptr));
        label_7->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\350\257\267\350\276\223\345\205\245\346\240\205\346\240\274\345\244\247\345\260\217\357\274\210\344\270\216\350\276\223\345\205\245\346\225\260\346\215\256\345\215\225\344\275\215\344\270\200\350\207\264\357\274\211\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\357\274\210\345\217\257\351\200\211\357\274\214\351\273\230\350\256\24415\357\274\211\350\257\267\350\276\223\345\205\245\350\277\221\351\202\273\347\202\271\346\225\260\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\357\274\210\345\217\257\351\200\211\357\274\214\351\273\230\350\256\2440.3\357\274\211\350\257\267\350\276\223\345\205\245\351\232\217\346\234\272\345\217\230\345\214\226\345\207\275\346\225\260c\345\200\274\357\274\232", nullptr));
        cb_error->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "\346\250\241\345\236\213\346\213\237\345\220\210\346\227\266\351\207\207\347\224\250\347\225\231\344\270\200\346\263\225\350\277\233\350\241\214\347\262\276\345\272\246\344\274\260\350\256\241", nullptr));
        label_area->setText(QCoreApplication::translate("OYCZFilterServiceDialog", "Extent of the study area((Optional,the default is the same as Observed Data Layer)\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OYCZFilterServiceDialog: public Ui_OYCZFilterServiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OYCZFILTERSERVICEDIALOG_H
