#include "reservesestimatesdialog.h"
#include "ui_reservesestimatesdialog.h"

ReservesEstimatesDialog::ReservesEstimatesDialog(QgsProject* project, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReservesEstimatesDialog)
{
    ui->setupUi(this);
    this->setStyleSheet("QWidget { font-size: 17px; }");
    this->initUI(project->layers<QgsVectorLayer*>());
}

ReservesEstimatesDialog::~ReservesEstimatesDialog()
{
    delete ui;
}

void ReservesEstimatesDialog::initUI(QVector<QgsVectorLayer*> pjLyr)
{
    for (const auto& vecLyr : pjLyr) {
        if (vecLyr->wkbType() != Qgis::WkbType::Point &&
            vecLyr->wkbType() != Qgis::WkbType::MultiPoint &&
            vecLyr->wkbType() != Qgis::WkbType::PointM &&
            vecLyr->wkbType() != Qgis::WkbType::MultiPointM &&
            vecLyr->wkbType() != Qgis::WkbType::PointZ &&
            vecLyr->wkbType() != Qgis::WkbType::MultiPointZ &&
            vecLyr->wkbType() != Qgis::WkbType::PointZM &&
            vecLyr->wkbType() != Qgis::WkbType::MultiPointZM) {
            continue;
        }
        lyrs.append(vecLyr);
        ui->cmbObPath->addItem(vecLyr->name());
        ui->cmbObPath->setCurrentIndex(-1);
        //ui->cmb_unknow->addItem(vecLyr->name());
    }
    connect(ui->cmbObPath, &QComboBox::currentTextChanged, this, &ReservesEstimatesDialog::onCmbObPathChange);
    connect(ui->btnBrowseOutput, &QPushButton::clicked, this, &ReservesEstimatesDialog::onBtnBrowseOutputClicked);
    connect(ui->btnComfirm, &QPushButton::clicked, this, &ReservesEstimatesDialog::onBtnConfirmClicked);
}


void ReservesEstimatesDialog::onCmbObPathChange()
{
    ui->cmbObVal->clear();
    ui->cmb_x->clear();
    ui->cmb_y->clear();
    int index = ui->cmbObPath->currentIndex();
    //ui->cmbRangePath->setCurrentIndex(index);
    QgsVectorLayer* lyr = lyrs.at(index);
    const QgsAttributeList attrList = lyr->attributeList();
    QgsAttributeList::const_iterator it = attrList.constBegin();
    //ui->cmb_y->addItem("<None>");
    //ui->cmb_z->addItem("<None>");
    for (; it != attrList.constEnd(); it++) {
        //QMessageBox::warning(this, "111", lyr->attributeDisplayName(*it));
        ui->cmbObVal->addItem(lyr->attributeDisplayName(*it));
        ui->cmb_x->addItem(lyr->attributeDisplayName(*it));
        ui->cmb_y->addItem(lyr->attributeDisplayName(*it));
        //ui->cmb_z->addItem(lyr->attributeDisplayName(*it));
    }
    ui->cmbObVal->setCurrentIndex(-1);
    ui->cmb_x->setCurrentIndex(0);
    ui->cmb_y->setCurrentIndex(0);
    //ui->cmb_z->setCurrentIndex(0);

}

void ReservesEstimatesDialog::onBtnBrowseOutputClicked()
{
    //QString fileName = QFileDialog::getSaveFileName(this, tr("output file"), "untitled", tr("TIF file(*.tif)"));
    //ui->lineOutputPath->setText(fileName);
    QFileDialog* dia = new QFileDialog();
    QString folder_path = dia->getExistingDirectory(NULL, "Choose output folder", "./");
    ui->lineOutputPath->setText(folder_path);
}

void ReservesEstimatesDialog::onBtnConfirmClicked()
{
    if (ui->lineOutputPath->text().isEmpty()) {
        QMessageBox::critical(nullptr, "Error about output path", "output path is empty!");
        return;
    }
    if (ui->cmbObPath->currentIndex() == -1)
    {
        QMessageBox::critical(nullptr, "Error about output input", "Observed Data Layer is not choose!");
        return;
    }
    if (ui->cmbObVal->currentIndex() == -1)
    {
        QMessageBox::critical(nullptr, "Error about output input", "Observed Data Field is not choose!");
        return;
    }
    QString outputPath = ui->lineOutputPath->text();
    int k_num = ui->sb_k_num->value();
    double c_val = ui->dsb_c_num->value();
    bool error_1 = false;
    if (ui->cb_error->isChecked())
        error_1 = true;

    QList<ObPtXYZ> obPts_c;
    QList<ObPtXYZ> un_obPts_c;
    QList<double> obPt_val;

    int obInd = ui->cmbObPath->currentIndex();
    QgsVectorLayer* obLyr = lyrs.at(obInd);
    QgsFeatureIterator obIter = obLyr->getFeatures();
    QgsFeature obFeat;

    double minX = ui->dsb_x0->value();
    double minY = ui->dsb_y0->value();

    double sizeX = ui->dsb_x->value();
    double sizeY = ui->dsb_y->value();

    double a_0 = ui->dsb_a0->value() * M_PI / 180.0;;

    int n_r = ui->sb_n_r->value();
    int n_c = ui->sb_n_c->value();

    while (obIter.nextFeature(obFeat)) {
        bool valOk = false;
        double val = obFeat.attribute(ui->cmbObVal->currentIndex()).toDouble(&valOk);
        double X = obFeat.attribute(ui->cmb_x->currentIndex()).toDouble(&valOk);
        double Y = obFeat.attribute(ui->cmb_y->currentIndex()).toDouble(&valOk);
        double Z = 0;
        if (!valOk) {
            QMessageBox::critical(this, "Illegal data type", "Data type of val should be number.");
            return;
        }
        double X_1 = (X - minX) * cos(a_0) + (Y - minY) * sin(a_0);
        double Y_1 = -(X - minX) * sin(a_0) + (Y - minY) * cos(a_0);

        ObPtXYZ xyz(X_1, Y_1, Z);
        obPts_c.append(xyz);
        obPt_val.append(val);
    }

    if (n_r < 2 || n_r>10000 || n_c < 2 || n_c>10000) {
        QMessageBox::critical(nullptr, "Error about input grid size", "Input grid size is too small or too big!");
        return;
    }

    for (int i_y = 0; i_y < n_c; i_y++) {
        for (int i_x = 0; i_x < n_r; i_x++) {
            double X_r = sizeX * i_x + sizeX/2;
            double Y_r = sizeY * i_y + sizeY/2;
            double Z_r = 0;

            ObPtXYZ xyz_r(X_r, Y_r, Z_r);
            un_obPts_c.append(xyz_r);
        }
    }

    int kr = ui->sb_lb->value();
    double dz = ui->dsb_dz->value();
    double pa = ui->dsb_p_a->value();
    double pb = ui->dsb_p_b->value();
    double pc = ui->dsb_p_c->value();

    QString name = ui->le_e->text();
    QString outFile = outputPath + '/' + name;

    emit begin("Ore body reserve estimation");
    emit sendPyParams(obPt_val, obPts_c, un_obPts_c, c_val, k_num, kr, sizeX, sizeY, n_r, n_c, dz, pa, pb, pc, outFile, error_1, minX, minY, a_0);
    emit getOutPath(outFile, true);
}




