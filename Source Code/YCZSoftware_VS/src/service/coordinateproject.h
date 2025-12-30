#ifndef COORDINATEPROJECT_H
#define COORDINATEPROJECT_H

#include <QtWidgets/QDialog>
#include "ui_coordinateproject.h"
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
class coordinateproject;
}

class coordinateproject : public QDialog
{
	Q_OBJECT;

public:
    coordinateproject(QWidget *parent = nullptr);
    ~coordinateproject();

private:
    Ui::coordinateprojectClass *ui;

private slots:
	void onChooseInputPath();
	void onChooseOutputPath();
	void onConfirmParameter();
	void onCancelButton();

};
#endif // DIALOG_H