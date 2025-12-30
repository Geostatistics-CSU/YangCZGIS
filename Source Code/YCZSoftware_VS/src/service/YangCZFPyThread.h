#pragma once
#include <QObject>
#include <QList>
#include <qgsvectorlayer.h>

#include "RunPyService.h"
#include "YangCZPyThread.h"

class YangCZFPyThread : public RunPyService
{
	Q_OBJECT

private:
	QList<double> _mobserved_data;
	QList<ObPtXYZ> _mobpts;
	int _mk_num;
	QString _msavepath;
	int _mdim;

	PyObject* getObPtXYZList(QList<ObPtXYZ>);
	PyObject* getObPtValList(QList<double>);

protected:
	void setParams() override;
public:

	YangCZFPyThread(QList<double> observed_data, QList<ObPtXYZ> obpts, int k, int dim, QString path);
	~YangCZFPyThread();
};