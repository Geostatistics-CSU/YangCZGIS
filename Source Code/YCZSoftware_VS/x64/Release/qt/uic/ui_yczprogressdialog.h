/********************************************************************************
** Form generated from reading UI file 'yczprogressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YCZPROGRESSDIALOG_H
#define UI_YCZPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yczprogressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *progressMessage;
    QProgressBar *progressBar;
    QScrollArea *logScrollArea;
    QWidget *logScrollAreaContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbxAutoClose;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *yczprogressDialog)
    {
        if (yczprogressDialog->objectName().isEmpty())
            yczprogressDialog->setObjectName(QString::fromUtf8("yczprogressDialog"));
        yczprogressDialog->resize(507, 192);
        QFont font;
        font.setPointSize(11);
        yczprogressDialog->setFont(font);
        verticalLayout = new QVBoxLayout(yczprogressDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        progressMessage = new QLabel(yczprogressDialog);
        progressMessage->setObjectName(QString::fromUtf8("progressMessage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressMessage->sizePolicy().hasHeightForWidth());
        progressMessage->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(progressMessage);

        progressBar = new QProgressBar(yczprogressDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        progressBar->setInvertedAppearance(false);

        verticalLayout->addWidget(progressBar);

        logScrollArea = new QScrollArea(yczprogressDialog);
        logScrollArea->setObjectName(QString::fromUtf8("logScrollArea"));
        logScrollArea->setWidgetResizable(true);
        logScrollAreaContents = new QWidget();
        logScrollAreaContents->setObjectName(QString::fromUtf8("logScrollAreaContents"));
        logScrollAreaContents->setGeometry(QRect(0, 0, 483, 22));
        sizePolicy.setHeightForWidth(logScrollAreaContents->sizePolicy().hasHeightForWidth());
        logScrollAreaContents->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(logScrollAreaContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        logScrollArea->setWidget(logScrollAreaContents);

        verticalLayout->addWidget(logScrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbxAutoClose = new QCheckBox(yczprogressDialog);
        cbxAutoClose->setObjectName(QString::fromUtf8("cbxAutoClose"));
        cbxAutoClose->setChecked(true);

        horizontalLayout->addWidget(cbxAutoClose);

        buttonBox = new QDialogButtonBox(yczprogressDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(yczprogressDialog);

        QMetaObject::connectSlotsByName(yczprogressDialog);
    } // setupUi

    void retranslateUi(QDialog *yczprogressDialog)
    {
        yczprogressDialog->setWindowTitle(QCoreApplication::translate("yczprogressDialog", "Dialog", nullptr));
        progressMessage->setText(QCoreApplication::translate("yczprogressDialog", "Processing", nullptr));
        cbxAutoClose->setText(QCoreApplication::translate("yczprogressDialog", "Auto-close on success", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yczprogressDialog: public Ui_yczprogressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YCZPROGRESSDIALOG_H
