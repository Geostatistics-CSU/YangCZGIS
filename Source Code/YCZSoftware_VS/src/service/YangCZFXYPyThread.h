#pragma once
#include <QObject>
#include <QList>
#include <qgsvectorlayer.h>

#include "RunPyService.h"

class YangCZFXYPyThread : public RunPyService
{
	Q_OBJECT
private:
	QList<QList<double>> _mobserved_data;
	int _mk_num;
	double _mc_val;
	int _mdim;
	double _mr_d;
	double _mc_d;

	PyObject* getObPtValList(QList<QList<double>>);

protected:
	void setParams() override;
public:

	YangCZFXYPyThread(QList<QList<double>> observed_data, double r_d, double c_d, double c, int k, int dim);
	~YangCZFXYPyThread();
};

