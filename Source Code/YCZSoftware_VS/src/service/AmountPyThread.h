#pragma once
#include <QObject>
#include <QList>
#include <qgsvectorlayer.h>

#include "RunPyService.h"
#include "YangCZPyThread.h"

class AmountPyThread : public RunPyService
{
	Q_OBJECT

private:
	QList<double> _mobserved_data;
	QList<ObPtXYZ> _mobpts;
	QList<ObPtXYZ> _mun_obpts;
	//QString _mOutPath;
	int _mk_num;
	double _mc_val;
	int _mkr;
	double _ml_c;
	double _ml_r;
	int _mn_r;
	int _mn_c;
	double _mdz;
	double _mpa;
	double _mpb;
	double _mpc;
	QString _moutpath;
	double _mX0;
	double _mY0;
	double _mA_0;

	bool _merror_1;

	PyObject* getObPtXYZList(QList<ObPtXYZ>);
	PyObject* getObPtValList(QList<double>);

protected:
	void setParams() override;
public:
	AmountPyThread(QList<double> obPt_val, QList<ObPtXYZ> obPts_c, QList<ObPtXYZ> un_obPts_c,
		double c, int k, int kr, double l_r, double l_c, int n_r, int n_c, double dz,
		double pa, double pb, double pc, QString outpath, bool error, double X0, double Y0, double A_0);
	~AmountPyThread();
};

