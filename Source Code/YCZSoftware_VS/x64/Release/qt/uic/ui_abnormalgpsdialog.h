/********************************************************************************
** Form generated from reading UI file 'abnormalgpsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABNORMALGPSDIALOG_H
#define UI_ABNORMALGPSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_AbnormalGPSDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AbnormalGPSDialog)
    {
        if (AbnormalGPSDialog->objectName().isEmpty())
            AbnormalGPSDialog->setObjectName(QString::fromUtf8("AbnormalGPSDialog"));
        AbnormalGPSDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AbnormalGPSDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(AbnormalGPSDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AbnormalGPSDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AbnormalGPSDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AbnormalGPSDialog);
    } // setupUi

    void retranslateUi(QDialog *AbnormalGPSDialog)
    {
        AbnormalGPSDialog->setWindowTitle(QCoreApplication::translate("AbnormalGPSDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AbnormalGPSDialog: public Ui_AbnormalGPSDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABNORMALGPSDIALOG_H
