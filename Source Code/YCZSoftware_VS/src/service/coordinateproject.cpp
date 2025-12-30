#include "coordinateproject.h"

coordinateproject::coordinateproject(QWidget *parent):
    QDialog(parent),
    ui(new Ui::coordinateprojectClass)
{
    ui->setupUi(this);
    connect(ui->choose_input_path, &QPushButton::clicked, this, &coordinateproject::onChooseInputPath);
    connect(ui->choose_output_path, &QPushButton::clicked, this, &coordinateproject::onChooseOutputPath);
    connect(ui->confirm_button, &QPushButton::clicked, this, &coordinateproject::onConfirmParameter);
    connect(ui->cancel_button, &QPushButton::clicked, this, &coordinateproject::onCancelButton);
}

coordinateproject::~coordinateproject()
{
    delete ui;
}

void coordinateproject::onChooseInputPath()
{
    QFileDialog* dia = new QFileDialog();
    QString file_path = dia->getOpenFileName(NULL, "Choose input file", ".", "*.csv");
    ui->input_path->setText(file_path);

}

void coordinateproject::onChooseOutputPath()
{
    QFileDialog* dia = new QFileDialog();
    QString folder_path = dia->getExistingDirectory(NULL, "Choose output folder", "./");
    ui->output_path->setText(folder_path);

}

void coordinateproject::onConfirmParameter()
{
    // check the validity of input parameter
    if (ui->points_number->value() == 0)
    {
        QMessageBox::critical(nullptr, "Error about output input", "Points number can't be 0!");
        return;
    }
    //read the value in ui
    int points = ui->points_number->value();
    double azimuth_angle = ui->azimuth_angle->value() * M_PI / 180.0;
    double dip_angle = ui->dip_angle->value() * M_PI / 180.0;
    double x = ui->x_value->value();
    double y = ui->y_value->value();
    double z = ui->z_value->value();
    QString input_path = ui->input_path->text();
    QString output_path = ui->output_path->text();
    QString output_name = ui->output_name->toPlainText();

    //read the csv file using the path choose and pass to parameters of signal function
    QFile file(input_path);
    QList<ObPtXYZ> coordinateList;
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(",");
            if (fields.size() != 3) // check the validity of coordinate in file
            {
                QMessageBox::critical(nullptr, "Error about coordinate file.", "There should be three coordinate numbers in a row!");
                return;
            }
            QList<double> point = {};
            for (int i = 0; i <= 2; i++) {
                bool ok;
                double value = fields[i].toDouble(&ok);
                if (ok) {
                    point.append(value);
                }
            }
            // point[2] = (point[2] < 0 ? -point[2] : point[2]); // make sure positive Z value 
            ObPtXYZ xyz(point[0], point[1], point[2]);
            coordinateList.append(xyz);
        }
        file.close();
    }
    else {
        qDebug() << "Unable to open file";
        return;
    }

    if (coordinateList.size() != points) // check the number of points in file
    {
        QMessageBox::critical(nullptr, "Error about coordinate file.", "Points in the file don't fit points number given!");
        return;
    }

    // caculate the new coordinate
    QList<ObPtXYZ> newCoordinateList = coordinateList;
    for (int i = 0; i < points; i++)
    {
        double x_i = (coordinateList[i].x - x) * cos(azimuth_angle) + (coordinateList[i].y - y) * sin(azimuth_angle);
        double test = x_i * cos(dip_angle);
        newCoordinateList[i].x = x_i *cos(dip_angle) + (z-coordinateList[i].z)*sin(dip_angle);
        newCoordinateList[i].y = -(coordinateList[i].x - x) *sin(azimuth_angle) + ((coordinateList[i].y-y) * cos(azimuth_angle));
        newCoordinateList[i].z = x_i * sin(dip_angle) - (z-coordinateList[i].z) * cos(dip_angle);
    }
    
    //creat the output file using the name and path given
    QString output_file = QDir(output_path).filePath(output_name+".csv");  // merge the path and file 
    QFile file_new(output_file);
    if (file_new.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file_new.close();
        qDebug() << "File created successfully at:" << output_path;
    }
    else {
        qDebug() << "Failed to create file at:" << output_path;
        return;
    }
    // write the new coordinate to the file created
    QString filePath_ = output_file;
    QFile file_(filePath_);

    if (file_.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QTextStream out(&file_);
        out << "X,Y,Z\n";  //write the column title

        for (int i = 0; i < newCoordinateList.size(); i ++) 
        {
            out << newCoordinateList[i].x;
            out << "," << newCoordinateList[i].y;
            out << "," << newCoordinateList[i].z;
            out << "\n";
        }

        file_.close();
    }
    else {
        qDebug() << "Unable to open output file";
        return;
    }
    qDebug() << "Data written successfully";


    this->close(); // close the dialog
}

void coordinateproject::onCancelButton()
{
    this->close();
}