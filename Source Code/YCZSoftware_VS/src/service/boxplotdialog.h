#ifndef BOXPLOTDIALOG_H
#define BOXPLOTDIALOG_H

#include <QDialog>
#include <QVector>
#include <qgsvectorlayer.h>
#include <qgsproject.h>
#include <qmessagebox.h>
#include "BoxPlotDraw.h"

namespace Ui {
class BoxPlotDialog;
}

class BoxPlotDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BoxPlotDialog(QgsProject* project, QWidget *parent = nullptr);
    ~BoxPlotDialog();

private:
    Ui::BoxPlotDialog *ui;
    QVector<QgsVectorLayer*> lyrs;
    void initUI(QVector<QgsVectorLayer*> pjLyr);

private slots:
    void onCmbLayerChange();
    void onBtnDrawClicked();
    void onClose();
};

#endif // BOXPLOTDIALOG_H
