#ifndef RESERVESESTIMATESDIALOG_H
#define RESERVESESTIMATESDIALOG_H

#include <QDialog>
#include <QVector>
#include <qgsproject.h>
#include <qgsvectorlayer.h>
#include "RunPyService.h"
#include <qmessagebox.h>
#include <QFileDialog>
#include "YangCZPyThread.h"

namespace Ui {
class ReservesEstimatesDialog;
}

class ReservesEstimatesDialog : public QDialog
{
    Q_OBJECT

signals:
    void sendPyParams(QList<double> obPt_val, QList<ObPtXYZ> obPts_c, QList<ObPtXYZ> un_obPts_c,
        double c, int k, int kr, double l_r, double l_c, int n_r, int n_c, double dz, 
        double pa, double pb, double pc, QString outpath, bool error, double X0, double Y0, double A_0);
    void begin(QString name);
    void getOutPath(QString path, bool no);

public:
    explicit ReservesEstimatesDialog(QgsProject* project, QWidget *parent = nullptr);
    ~ReservesEstimatesDialog();

private:
    Ui::ReservesEstimatesDialog *ui;
    QVector<QgsVectorLayer*> lyrs;
    void initUI(QVector<QgsVectorLayer*> pjLyr);

private slots:
    void onCmbObPathChange();
    void onBtnBrowseOutputClicked();
    void onBtnConfirmClicked();

};

#endif // RESERVESESTIMATESDIALOG_H
