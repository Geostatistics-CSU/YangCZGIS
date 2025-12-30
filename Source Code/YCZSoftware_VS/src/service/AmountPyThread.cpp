#include "AmountPyThread.h"

AmountPyThread::AmountPyThread(QList<double> obPt_val, QList<ObPtXYZ> obPts_c, QList<ObPtXYZ> un_obPts_c, double c,
	int k, int kr, double l_r, double l_c, int n_r, int n_c, double dz, double pa, double pb, double pc, QString outpath, bool error, double X0, double Y0, double A_0)
{
	_mobserved_data = obPt_val;
	_mobpts = obPts_c;
	_mun_obpts = un_obPts_c;
	_mc_val = c;
	_mk_num = k;
	_mkr = kr;
	_ml_r = l_r;
	_ml_c = l_c;
	_mn_r = n_r;
	_mn_c = n_c;
	_mdz = dz;
	_mpa = pa;
	_mpb = pb;
	_mpc = pc;
	_moutpath = outpath;
	_merror_1 = error;
	_mX0 = X0;
	_mY0 = Y0;
	_mA_0 = A_0;
}

AmountPyThread::~AmountPyThread()
{
}

PyObject* AmountPyThread::getObPtXYZList(QList<ObPtXYZ> xyz)
{
	PyObject* pyObFeatList = PyList_New(xyz.length());
	for (int i = 0; i < xyz.length(); i++) {
		PyObject* obFeat = PyList_New(3);
		ObPtXYZ pt = xyz.at(i);
		PyList_SetItem(obFeat, 0, Py_BuildValue("d", pt.x));
		PyList_SetItem(obFeat, 1, Py_BuildValue("d", pt.y));
		PyList_SetItem(obFeat, 2, Py_BuildValue("d", pt.z));

		PyList_SetItem(pyObFeatList, i, Py_BuildValue("O", obFeat));
		Py_DECREF(obFeat);
	}
	return pyObFeatList;
}

PyObject* AmountPyThread::getObPtValList(QList<double> vals)
{
	PyObject* pyObFeatList = PyList_New(vals.length());
	for (int i = 0; i < vals.length(); i++) {
		PyObject* obFeat = PyList_New(1);
		double pt = vals.at(i);
		PyList_SetItem(obFeat, 0, Py_BuildValue("d", pt));

		PyList_SetItem(pyObFeatList, i, Py_BuildValue("O", obFeat));
		Py_DECREF(obFeat);
	}
	return pyObFeatList;
}

void AmountPyThread::setParams()
{
	PyObject* obptvalList = getObPtValList(_mobserved_data);
	PyObject* obptsList = getObPtXYZList(_mobpts);
	PyObject* un_obptsList = getObPtXYZList(_mun_obpts);

	std::string stdOutPath = _moutpath.toStdString(); // Store in a variable
	const char* cstrOutPath = stdOutPath.c_str();

	_mParams = PyTuple_New(19);
	PyTuple_SetItem(_mParams, 0, Py_BuildValue("O", obptvalList));
	PyTuple_SetItem(_mParams, 1, Py_BuildValue("O", obptsList));
	PyTuple_SetItem(_mParams, 2, Py_BuildValue("O", un_obptsList));
	PyTuple_SetItem(_mParams, 3, Py_BuildValue("d", _mc_val));
	PyTuple_SetItem(_mParams, 4, Py_BuildValue("i", _mk_num));
	PyTuple_SetItem(_mParams, 5, Py_BuildValue("i", _mkr));
	PyTuple_SetItem(_mParams, 6, Py_BuildValue("d", _ml_r));
	PyTuple_SetItem(_mParams, 7, Py_BuildValue("d", _ml_c));
	PyTuple_SetItem(_mParams, 8, Py_BuildValue("i", _mn_r));
	PyTuple_SetItem(_mParams, 9, Py_BuildValue("i", _mn_c));
	PyTuple_SetItem(_mParams, 10, Py_BuildValue("d", _mdz));
	PyTuple_SetItem(_mParams, 11, Py_BuildValue("d", _mpa));
	PyTuple_SetItem(_mParams, 12, Py_BuildValue("d", _mpb));
	PyTuple_SetItem(_mParams, 13, Py_BuildValue("d", _mpc));
	PyTuple_SetItem(_mParams, 14, Py_BuildValue("s", cstrOutPath));
	PyTuple_SetItem(_mParams, 15, Py_BuildValue("b", _merror_1));
	PyTuple_SetItem(_mParams, 16, Py_BuildValue("d", _mX0));
	PyTuple_SetItem(_mParams, 17, Py_BuildValue("d", _mY0));
	PyTuple_SetItem(_mParams, 18, Py_BuildValue("d", _mA_0));

	Py_DECREF(obptvalList);
	Py_DECREF(obptsList);
	Py_DECREF(un_obptsList);
	_mPyFile = "Ore_Reserves";
	_mPyFunc = "run_for_soft";
}
