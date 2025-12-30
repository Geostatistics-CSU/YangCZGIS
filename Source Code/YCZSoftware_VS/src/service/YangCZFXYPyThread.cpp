#include "YangCZFXYPyThread.h"
#include <QMessageBox>

YangCZFXYPyThread::YangCZFXYPyThread(QList<QList<double>> observed_data, double r_d, double c_d, double c, int k, int dim)
{
	_mobserved_data = observed_data;
	_mr_d = r_d;
	_mc_d = c_d;
	_mc_val = c;
	_mk_num = k;
	_mdim = dim;
}

YangCZFXYPyThread::~YangCZFXYPyThread()
{
}

PyObject* YangCZFXYPyThread::getObPtValList(QList<QList<double>> vals) {
	PyObject* pyObFeatList = PyList_New(vals.length()); // 创建主列表
	for (int i = 0; i < vals.length(); i++) {
		QList<double> subList = vals.at(i);
		PyObject* pySubList = PyList_New(subList.length()); // 创建子列表

		for (int j = 0; j < subList.length(); j++) {
			double pt = subList.at(j);
			PyObject* obFeat = Py_BuildValue("d", pt); // 创建 double 类型的 PyObject
			PyList_SetItem(pySubList, j, obFeat); // 将 double PyObject 添加到子列表中
			// 不需要 Py_DECREF(obFeat)，因为 PyList_SetItem 会“偷”这个引用
		}

		PyList_SetItem(pyObFeatList, i, pySubList); // 将子列表添加到主列表中
		// 不需要 Py_DECREF(pySubList)，因为 PyList_SetItem 会“偷”这个引用
	}
	return pyObFeatList;
}

void YangCZFXYPyThread::setParams()
{
	PyObject* obptvalList = getObPtValList(_mobserved_data);

	_mParams = PyTuple_New(6);
	PyTuple_SetItem(_mParams, 0, Py_BuildValue("O", obptvalList));
	PyTuple_SetItem(_mParams, 1, Py_BuildValue("d", _mr_d));
	PyTuple_SetItem(_mParams, 2, Py_BuildValue("d", _mc_d));
	PyTuple_SetItem(_mParams, 3, Py_BuildValue("d", _mc_val));
	PyTuple_SetItem(_mParams, 4, Py_BuildValue("i", _mk_num));
	PyTuple_SetItem(_mParams, 5, Py_BuildValue("i", _mdim));

	Py_DECREF(obptvalList);
	_mPyFile = "YangCZF_XY";
	_mPyFunc = "run_for_soft";
}
