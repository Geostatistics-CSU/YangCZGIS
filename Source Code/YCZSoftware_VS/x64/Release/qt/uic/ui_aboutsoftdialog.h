/********************************************************************************
** Form generated from reading UI file 'aboutsoftdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTSOFTDIALOG_H
#define UI_ABOUTSOFTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutSoftDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *_2;
    QPushButton *btnQgisHome;
    QPushButton *btnQgisUser;
    QTextBrowser *txtVersion;
    QLabel *label_3;
    QListWidget *mOptionsListWidget;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutSoftDialog)
    {
        if (AboutSoftDialog->objectName().isEmpty())
            AboutSoftDialog->setObjectName(QString::fromUtf8("AboutSoftDialog"));
        AboutSoftDialog->resize(712, 417);
        layoutWidget = new QWidget(AboutSoftDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 340, 551, 30));
        _2 = new QHBoxLayout(layoutWidget);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        btnQgisHome = new QPushButton(layoutWidget);
        btnQgisHome->setObjectName(QString::fromUtf8("btnQgisHome"));
        btnQgisHome->setFlat(false);

        _2->addWidget(btnQgisHome);

        btnQgisUser = new QPushButton(layoutWidget);
        btnQgisUser->setObjectName(QString::fromUtf8("btnQgisUser"));
        btnQgisUser->setFlat(false);

        _2->addWidget(btnQgisUser);

        txtVersion = new QTextBrowser(AboutSoftDialog);
        txtVersion->setObjectName(QString::fromUtf8("txtVersion"));
        txtVersion->setGeometry(QRect(150, 10, 551, 280));
        txtVersion->setLineWrapMode(QTextEdit::NoWrap);
        txtVersion->setOpenExternalLinks(true);
        txtVersion->setOpenLinks(true);
        label_3 = new QLabel(AboutSoftDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 300, 561, 16));
        label_3->setAlignment(Qt::AlignCenter);
        mOptionsListWidget = new QListWidget(AboutSoftDialog);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setGeometry(QRect(0, 10, 150, 401));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setPointSize(10);
        mOptionsListWidget->setFont(font);
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);
        label_2 = new QLabel(AboutSoftDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 320, 551, 16));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(AboutSoftDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(610, 380, 93, 28));

        retranslateUi(AboutSoftDialog);

        QMetaObject::connectSlotsByName(AboutSoftDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutSoftDialog)
    {
        AboutSoftDialog->setWindowTitle(QCoreApplication::translate("AboutSoftDialog", "About YangCZ Software", nullptr));
        btnQgisHome->setText(QCoreApplication::translate("AboutSoftDialog", "YCZ Home Page", nullptr));
        btnQgisUser->setText(QCoreApplication::translate("AboutSoftDialog", "Join our User Mailing List", nullptr));
        label_3->setText(QCoreApplication::translate("AboutSoftDialog", "YangChiZhong was proposed by Professor Yang Shanci.", nullptr));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("AboutSoftDialog", "About", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("AboutSoftDialog", "What's New", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("AboutSoftDialog", "Providers", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("AboutSoftDialog", "Developers", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("AboutSoftDialog", "Contributors", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("AboutSoftDialog", "Developers Map", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("AboutSoftDialog", "Translators", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("AboutSoftDialog", "Donors", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("AboutSoftDialog", "License", nullptr));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QCoreApplication::translate("AboutSoftDialog", "https://www.", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutSoftDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutSoftDialog: public Ui_AboutSoftDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTSOFTDIALOG_H
