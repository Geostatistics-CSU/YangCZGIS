#ifndef YANGCZFXYDIALOG_H
#define YANGCZFXYDIALOG_H

#include <QDialog>
#include <qmessagebox.h>
#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QList>
#include <QDebug>
#include <QFileDialog>
#include "YangCZFPyThread.h"

namespace Ui {
class YangCZFXYDialog;
}

class YangCZFXYDialog : public QDialog
{
    Q_OBJECT

signals:
    void begin(QString);
    void sendPyParams(QList<QList<double>> observed_data, double r_d, double c_d, double c, int k, int dim);

public:
    explicit YangCZFXYDialog(QWidget *parent = nullptr);
    ~YangCZFXYDialog();

private:
    Ui::YangCZFXYDialog *ui;
    QString file_path;

private slots:
    void onChoosePath();
    void onConfirmParameter();
};

#endif // YANGCZFXYDIALOG_H
