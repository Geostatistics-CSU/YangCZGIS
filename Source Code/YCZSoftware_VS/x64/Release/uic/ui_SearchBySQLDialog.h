/********************************************************************************
** Form generated from reading UI file 'SearchBySQLDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYSQLDIALOG_H
#define UI_SEARCHBYSQLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchBySQLDialog
{
public:
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *OKButton;
    QPushButton *CancelButton;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *SearchBySQLDialog)
    {
        if (SearchBySQLDialog->objectName().isEmpty())
            SearchBySQLDialog->setObjectName(QString::fromUtf8("SearchBySQLDialog"));
        SearchBySQLDialog->resize(400, 113);
        verticalLayoutWidget = new QWidget(SearchBySQLDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 83));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        OKButton = new QPushButton(verticalLayoutWidget);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));

        gridLayout->addWidget(OKButton, 0, 4, 1, 1);

        CancelButton = new QPushButton(verticalLayoutWidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        gridLayout->addWidget(CancelButton, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 3, 1, 1);


        retranslateUi(SearchBySQLDialog);

        QMetaObject::connectSlotsByName(SearchBySQLDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchBySQLDialog)
    {
        SearchBySQLDialog->setWindowTitle(QCoreApplication::translate("SearchBySQLDialog", "InputSQL", nullptr));
        label->setText(QCoreApplication::translate("SearchBySQLDialog", "SQL", nullptr));
        OKButton->setText(QCoreApplication::translate("SearchBySQLDialog", "OK", nullptr));
        CancelButton->setText(QCoreApplication::translate("SearchBySQLDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchBySQLDialog: public Ui_SearchBySQLDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYSQLDIALOG_H
