#include "yangczfxydialog.h"
#include "ui_yangczfxydialog.h"

YangCZFXYDialog::YangCZFXYDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::YangCZFXYDialog)
{
    ui->setupUi(this);
    this->setStyleSheet("QWidget { font-size: 17px; }");
    connect(ui->input_confirm, &QPushButton::clicked, this, &YangCZFXYDialog::onConfirmParameter);
    connect(ui->choosePath, &QToolButton::clicked, this, &YangCZFXYDialog::onChoosePath);
}

YangCZFXYDialog::~YangCZFXYDialog()
{
    delete ui;
}

void YangCZFXYDialog::onChoosePath()
{
    QFileDialog* dia = new QFileDialog();
    QString file_path = dia->getOpenFileName(NULL, "Choose data file", ".", "*.csv");
    ui->webkitdirectory->setText(file_path);
}

void YangCZFXYDialog::onConfirmParameter()
{
    // check the validity of input parameter
    if (ui->row->value() == 0)
    {
        QMessageBox::critical(nullptr, "Error about output input", "Row value can't be 0!");
        return;
    }
    if (ui->Column->value() == 0)
    {
        QMessageBox::critical(nullptr, "Error about output input", "Column value can't be 0!");
        return;
    }
    if (ui->row_space->value() == 0)
    {
        QMessageBox::critical(nullptr, "Error about output input", "Row space value can't be 0!");
        return;
    }
    if (ui->column_space->value() == 0)
    {
        QMessageBox::critical(nullptr, "Error about output input", "Column space value can't be 0!");
        return;
    }
    //read the value in ui
    int row = ui->row->value();
    int column = ui->Column->value();
    double row_space = ui->row_space->value();
    double column_space = ui->column_space->value();
    double c = ui->c_value->value();
    QString path = ui->webkitdirectory->text();
    QList<QList<double>> obPt_val;


    //read the csv file using the path choose and pass to parameters of signal function
    QString filePath = path;
    QFile file(filePath);
    
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QList<double> dataList = {};
            QString line = in.readLine();
            QStringList fields = line.split(",");
            for (const QString& field : fields) {
                bool ok;
                double value = field.toDouble(&ok);
                if (ok) {
                    dataList.append(value);
                }
            }
            obPt_val.append(dataList);
        }
        file.close();
    }
    else {
        qDebug() << "Unable to open file";
        return;
    }

    //obPt_val = dataList;

    // calculate the coordinate and pass to parameters of signal function
    // pass data to python
    this->close();
    emit begin("Rule Anisotropy YangCZ Modeling.");
    emit sendPyParams(obPt_val, row_space, column_space, c, 4, 2);
}
