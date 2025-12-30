/********************************************************************************
** Form generated from reading UI file 'layerpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERPROPFORM_H
#define UI_LAYERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerPropForm
{
public:
    QHBoxLayout *horizontalLayout_19;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *rasterLayerInfoTab;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *rasterNameLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *rasterSourceLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *rasterMemoryLabel;
    QLabel *label_9;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *rasterExtentLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLabel *rasterWidthLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QLabel *rasterHeightLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QLabel *rasterDataTypeLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_18;
    QLabel *rasterBandNumLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_20;
    QLabel *rasterCrsLabel;
    QWidget *vectorLayerInfoTab;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_26;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_25;
    QLabel *vectorNameLabel;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_32;
    QLabel *vectorSourceLabel;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_30;
    QLabel *vectorMemoryLabel;
    QLabel *label_34;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_27;
    QLabel *vectorExtentLabel;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_33;
    QLabel *vectorGeoTypeLabel;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_31;
    QLabel *vectorFeatureNumLabel;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_35;
    QLabel *vectorEncodingLabel;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_28;
    QLabel *vectorCrsLabel;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_29;
    QLabel *vectorDpLabel;
    QWidget *rasterLayerRenderTab;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFrame *line_4;
    QVBoxLayout *layerRenderLayout;
    QWidget *vectorLayerRenderTab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_36;
    QFrame *line_7;
    QVBoxLayout *layerRenderLayout_2;
    QComboBox *vecterRenderCB;
    QTabWidget *comboTabWidget;
    QWidget *singleRender;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *singleRenderLayout;
    QWidget *categoryRender;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *cateRenderLayout;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer;
    QPushButton *okPb;
    QPushButton *cancelPb;
    QPushButton *applyPb;

    void setupUi(QWidget *LayerPropForm)
    {
        if (LayerPropForm->objectName().isEmpty())
            LayerPropForm->setObjectName(QString::fromUtf8("LayerPropForm"));
        LayerPropForm->resize(882, 660);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        LayerPropForm->setFont(font);
        horizontalLayout_19 = new QHBoxLayout(LayerPropForm);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        listWidget = new QListWidget(LayerPropForm);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(120, 16777215));
        QFont font1;
        font1.setPointSize(12);
        listWidget->setFont(font1);

        horizontalLayout_19->addWidget(listWidget);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tabWidget = new QTabWidget(LayerPropForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        rasterLayerInfoTab = new QWidget();
        rasterLayerInfoTab->setObjectName(QString::fromUtf8("rasterLayerInfoTab"));
        verticalLayout = new QVBoxLayout(rasterLayerInfoTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(rasterLayerInfoTab);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        line = new QFrame(rasterLayerInfoTab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(rasterLayerInfoTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label_3);

        rasterNameLabel = new QLabel(rasterLayerInfoTab);
        rasterNameLabel->setObjectName(QString::fromUtf8("rasterNameLabel"));

        horizontalLayout->addWidget(rasterNameLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(rasterLayerInfoTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_5);

        rasterSourceLabel = new QLabel(rasterLayerInfoTab);
        rasterSourceLabel->setObjectName(QString::fromUtf8("rasterSourceLabel"));

        horizontalLayout_2->addWidget(rasterSourceLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(rasterLayerInfoTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_7);

        rasterMemoryLabel = new QLabel(rasterLayerInfoTab);
        rasterMemoryLabel->setObjectName(QString::fromUtf8("rasterMemoryLabel"));

        horizontalLayout_3->addWidget(rasterMemoryLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        label_9 = new QLabel(rasterLayerInfoTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        verticalLayout->addWidget(label_9);

        line_3 = new QFrame(rasterLayerInfoTab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(rasterLayerInfoTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(label_10);

        rasterExtentLabel = new QLabel(rasterLayerInfoTab);
        rasterExtentLabel->setObjectName(QString::fromUtf8("rasterExtentLabel"));

        horizontalLayout_4->addWidget(rasterExtentLabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_12 = new QLabel(rasterLayerInfoTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(label_12);

        rasterWidthLabel = new QLabel(rasterLayerInfoTab);
        rasterWidthLabel->setObjectName(QString::fromUtf8("rasterWidthLabel"));

        horizontalLayout_5->addWidget(rasterWidthLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_14 = new QLabel(rasterLayerInfoTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(label_14);

        rasterHeightLabel = new QLabel(rasterLayerInfoTab);
        rasterHeightLabel->setObjectName(QString::fromUtf8("rasterHeightLabel"));

        horizontalLayout_6->addWidget(rasterHeightLabel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_16 = new QLabel(rasterLayerInfoTab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(label_16);

        rasterDataTypeLabel = new QLabel(rasterLayerInfoTab);
        rasterDataTypeLabel->setObjectName(QString::fromUtf8("rasterDataTypeLabel"));

        horizontalLayout_7->addWidget(rasterDataTypeLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_18 = new QLabel(rasterLayerInfoTab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(label_18);

        rasterBandNumLabel = new QLabel(rasterLayerInfoTab);
        rasterBandNumLabel->setObjectName(QString::fromUtf8("rasterBandNumLabel"));

        horizontalLayout_8->addWidget(rasterBandNumLabel);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_20 = new QLabel(rasterLayerInfoTab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(label_20);

        rasterCrsLabel = new QLabel(rasterLayerInfoTab);
        rasterCrsLabel->setObjectName(QString::fromUtf8("rasterCrsLabel"));

        horizontalLayout_9->addWidget(rasterCrsLabel);


        verticalLayout->addLayout(horizontalLayout_9);

        tabWidget->addTab(rasterLayerInfoTab, QString());
        vectorLayerInfoTab = new QWidget();
        vectorLayerInfoTab->setObjectName(QString::fromUtf8("vectorLayerInfoTab"));
        verticalLayout_4 = new QVBoxLayout(vectorLayerInfoTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_26 = new QLabel(vectorLayerInfoTab);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font2);

        verticalLayout_4->addWidget(label_26);

        line_6 = new QFrame(vectorLayerInfoTab);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_6);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_25 = new QLabel(vectorLayerInfoTab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_21->addWidget(label_25);

        vectorNameLabel = new QLabel(vectorLayerInfoTab);
        vectorNameLabel->setObjectName(QString::fromUtf8("vectorNameLabel"));

        horizontalLayout_21->addWidget(vectorNameLabel);


        verticalLayout_4->addLayout(horizontalLayout_21);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_32 = new QLabel(vectorLayerInfoTab);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_27->addWidget(label_32);

        vectorSourceLabel = new QLabel(vectorLayerInfoTab);
        vectorSourceLabel->setObjectName(QString::fromUtf8("vectorSourceLabel"));

        horizontalLayout_27->addWidget(vectorSourceLabel);


        verticalLayout_4->addLayout(horizontalLayout_27);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_30 = new QLabel(vectorLayerInfoTab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_25->addWidget(label_30);

        vectorMemoryLabel = new QLabel(vectorLayerInfoTab);
        vectorMemoryLabel->setObjectName(QString::fromUtf8("vectorMemoryLabel"));

        horizontalLayout_25->addWidget(vectorMemoryLabel);


        verticalLayout_4->addLayout(horizontalLayout_25);

        label_34 = new QLabel(vectorLayerInfoTab);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font2);

        verticalLayout_4->addWidget(label_34);

        line_5 = new QFrame(vectorLayerInfoTab);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_27 = new QLabel(vectorLayerInfoTab);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_22->addWidget(label_27);

        vectorExtentLabel = new QLabel(vectorLayerInfoTab);
        vectorExtentLabel->setObjectName(QString::fromUtf8("vectorExtentLabel"));

        horizontalLayout_22->addWidget(vectorExtentLabel);


        verticalLayout_4->addLayout(horizontalLayout_22);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_33 = new QLabel(vectorLayerInfoTab);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_28->addWidget(label_33);

        vectorGeoTypeLabel = new QLabel(vectorLayerInfoTab);
        vectorGeoTypeLabel->setObjectName(QString::fromUtf8("vectorGeoTypeLabel"));

        horizontalLayout_28->addWidget(vectorGeoTypeLabel);


        verticalLayout_4->addLayout(horizontalLayout_28);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_31 = new QLabel(vectorLayerInfoTab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_26->addWidget(label_31);

        vectorFeatureNumLabel = new QLabel(vectorLayerInfoTab);
        vectorFeatureNumLabel->setObjectName(QString::fromUtf8("vectorFeatureNumLabel"));

        horizontalLayout_26->addWidget(vectorFeatureNumLabel);


        verticalLayout_4->addLayout(horizontalLayout_26);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        label_35 = new QLabel(vectorLayerInfoTab);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_29->addWidget(label_35);

        vectorEncodingLabel = new QLabel(vectorLayerInfoTab);
        vectorEncodingLabel->setObjectName(QString::fromUtf8("vectorEncodingLabel"));

        horizontalLayout_29->addWidget(vectorEncodingLabel);


        verticalLayout_4->addLayout(horizontalLayout_29);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_28 = new QLabel(vectorLayerInfoTab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_23->addWidget(label_28);

        vectorCrsLabel = new QLabel(vectorLayerInfoTab);
        vectorCrsLabel->setObjectName(QString::fromUtf8("vectorCrsLabel"));

        horizontalLayout_23->addWidget(vectorCrsLabel);


        verticalLayout_4->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_29 = new QLabel(vectorLayerInfoTab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_24->addWidget(label_29);

        vectorDpLabel = new QLabel(vectorLayerInfoTab);
        vectorDpLabel->setObjectName(QString::fromUtf8("vectorDpLabel"));

        horizontalLayout_24->addWidget(vectorDpLabel);


        verticalLayout_4->addLayout(horizontalLayout_24);

        tabWidget->addTab(vectorLayerInfoTab, QString());
        rasterLayerRenderTab = new QWidget();
        rasterLayerRenderTab->setObjectName(QString::fromUtf8("rasterLayerRenderTab"));
        verticalLayout_3 = new QVBoxLayout(rasterLayerRenderTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(rasterLayerRenderTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);

        verticalLayout_3->addWidget(label_2);

        line_4 = new QFrame(rasterLayerRenderTab);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        layerRenderLayout = new QVBoxLayout();
        layerRenderLayout->setObjectName(QString::fromUtf8("layerRenderLayout"));

        verticalLayout_3->addLayout(layerRenderLayout);

        tabWidget->addTab(rasterLayerRenderTab, QString());
        vectorLayerRenderTab = new QWidget();
        vectorLayerRenderTab->setObjectName(QString::fromUtf8("vectorLayerRenderTab"));
        verticalLayout_5 = new QVBoxLayout(vectorLayerRenderTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_36 = new QLabel(vectorLayerRenderTab);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMaximumSize(QSize(16777215, 200));
        label_36->setFont(font3);

        verticalLayout_5->addWidget(label_36);

        line_7 = new QFrame(vectorLayerRenderTab);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_7);

        layerRenderLayout_2 = new QVBoxLayout();
        layerRenderLayout_2->setObjectName(QString::fromUtf8("layerRenderLayout_2"));
        vecterRenderCB = new QComboBox(vectorLayerRenderTab);
        vecterRenderCB->addItem(QString());
        vecterRenderCB->addItem(QString());
        vecterRenderCB->setObjectName(QString::fromUtf8("vecterRenderCB"));

        layerRenderLayout_2->addWidget(vecterRenderCB);

        comboTabWidget = new QTabWidget(vectorLayerRenderTab);
        comboTabWidget->setObjectName(QString::fromUtf8("comboTabWidget"));
        singleRender = new QWidget();
        singleRender->setObjectName(QString::fromUtf8("singleRender"));
        verticalLayout_8 = new QVBoxLayout(singleRender);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        singleRenderLayout = new QVBoxLayout();
        singleRenderLayout->setObjectName(QString::fromUtf8("singleRenderLayout"));

        verticalLayout_8->addLayout(singleRenderLayout);

        comboTabWidget->addTab(singleRender, QString());
        categoryRender = new QWidget();
        categoryRender->setObjectName(QString::fromUtf8("categoryRender"));
        verticalLayout_6 = new QVBoxLayout(categoryRender);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        cateRenderLayout = new QVBoxLayout();
        cateRenderLayout->setObjectName(QString::fromUtf8("cateRenderLayout"));

        verticalLayout_6->addLayout(cateRenderLayout);

        comboTabWidget->addTab(categoryRender, QString());

        layerRenderLayout_2->addWidget(comboTabWidget);


        verticalLayout_5->addLayout(layerRenderLayout_2);

        tabWidget->addTab(vectorLayerRenderTab, QString());

        verticalLayout_7->addWidget(tabWidget);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer);

        okPb = new QPushButton(LayerPropForm);
        okPb->setObjectName(QString::fromUtf8("okPb"));

        horizontalLayout_20->addWidget(okPb);

        cancelPb = new QPushButton(LayerPropForm);
        cancelPb->setObjectName(QString::fromUtf8("cancelPb"));

        horizontalLayout_20->addWidget(cancelPb);

        applyPb = new QPushButton(LayerPropForm);
        applyPb->setObjectName(QString::fromUtf8("applyPb"));

        horizontalLayout_20->addWidget(applyPb);


        verticalLayout_7->addLayout(horizontalLayout_20);


        horizontalLayout_19->addLayout(verticalLayout_7);


        retranslateUi(LayerPropForm);

        tabWidget->setCurrentIndex(1);
        comboTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LayerPropForm);
    } // setupUi

    void retranslateUi(QWidget *LayerPropForm)
    {
        LayerPropForm->setWindowTitle(QCoreApplication::translate("LayerPropForm", "Layer Properties", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("LayerPropForm", "Information", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("LayerPropForm", "Rendering", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("LayerPropForm", "General Information", nullptr));
        label_3->setText(QCoreApplication::translate("LayerPropForm", "\345\220\215\347\247\260", nullptr));
        rasterNameLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("LayerPropForm", "\350\267\257\345\276\204", nullptr));
        rasterSourceLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("LayerPropForm", "\345\244\247\345\260\217\345\220\210\350\256\241", nullptr));
        rasterMemoryLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("LayerPropForm", "Raster information", nullptr));
        label_10->setText(QCoreApplication::translate("LayerPropForm", "\350\214\203\345\233\264", nullptr));
        rasterExtentLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("LayerPropForm", "\345\256\275\345\272\246", nullptr));
        rasterWidthLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("LayerPropForm", "\351\253\230\345\272\246", nullptr));
        rasterHeightLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("LayerPropForm", "\346\225\260\346\215\256\347\261\273\345\236\213", nullptr));
        rasterDataTypeLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("LayerPropForm", "\346\263\242\346\256\265\346\225\260\351\207\217", nullptr));
        rasterBandNumLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_20->setText(QCoreApplication::translate("LayerPropForm", "\345\235\220\346\240\207\347\263\273", nullptr));
        rasterCrsLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(rasterLayerInfoTab), QCoreApplication::translate("LayerPropForm", "rasterLayerInfoTab", nullptr));
        label_26->setText(QCoreApplication::translate("LayerPropForm", "General Information", nullptr));
        label_25->setText(QCoreApplication::translate("LayerPropForm", "Name", nullptr));
        vectorNameLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_32->setText(QCoreApplication::translate("LayerPropForm", "Path", nullptr));
        vectorSourceLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_30->setText(QCoreApplication::translate("LayerPropForm", "Memory", nullptr));
        vectorMemoryLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_34->setText(QCoreApplication::translate("LayerPropForm", "Vector information", nullptr));
        label_27->setText(QCoreApplication::translate("LayerPropForm", "Extent", nullptr));
        vectorExtentLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_33->setText(QCoreApplication::translate("LayerPropForm", "GeoType", nullptr));
        vectorGeoTypeLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_31->setText(QCoreApplication::translate("LayerPropForm", "FeatureNum", nullptr));
        vectorFeatureNumLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_35->setText(QCoreApplication::translate("LayerPropForm", "Encoding", nullptr));
        vectorEncodingLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_28->setText(QCoreApplication::translate("LayerPropForm", "Crs", nullptr));
        vectorCrsLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        label_29->setText(QCoreApplication::translate("LayerPropForm", "Data Source", nullptr));
        vectorDpLabel->setText(QCoreApplication::translate("LayerPropForm", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(vectorLayerInfoTab), QCoreApplication::translate("LayerPropForm", "vectorLayerInfoTab", nullptr));
        label_2->setText(QCoreApplication::translate("LayerPropForm", "\345\233\276\345\261\202\346\270\262\346\237\223", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(rasterLayerRenderTab), QCoreApplication::translate("LayerPropForm", "layerRenderTab", nullptr));
        label_36->setText(QCoreApplication::translate("LayerPropForm", "Layer Rendering", nullptr));
        vecterRenderCB->setItemText(0, QCoreApplication::translate("LayerPropForm", "Single Rendering", nullptr));
        vecterRenderCB->setItemText(1, QCoreApplication::translate("LayerPropForm", "Categorical Rendering", nullptr));

        comboTabWidget->setTabText(comboTabWidget->indexOf(singleRender), QCoreApplication::translate("LayerPropForm", "Tab 1", nullptr));
        comboTabWidget->setTabText(comboTabWidget->indexOf(categoryRender), QCoreApplication::translate("LayerPropForm", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(vectorLayerRenderTab), QCoreApplication::translate("LayerPropForm", "vectorLayerRenderTab", nullptr));
        okPb->setText(QCoreApplication::translate("LayerPropForm", "Confirm", nullptr));
        cancelPb->setText(QCoreApplication::translate("LayerPropForm", "Cancel", nullptr));
        applyPb->setText(QCoreApplication::translate("LayerPropForm", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerPropForm: public Ui_LayerPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERPROPFORM_H
