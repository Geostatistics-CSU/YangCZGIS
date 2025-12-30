/****************************************************************************
** Meta object code from reading C++ file 'yangczfxydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/yangczfxydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yangczfxydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YangCZFXYDialog_t {
    QByteArrayData data[13];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YangCZFXYDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YangCZFXYDialog_t qt_meta_stringdata_YangCZFXYDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "YangCZFXYDialog"
QT_MOC_LITERAL(1, 16, 5), // "begin"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "sendPyParams"
QT_MOC_LITERAL(4, 36, 21), // "QList<QList<double> >"
QT_MOC_LITERAL(5, 58, 13), // "observed_data"
QT_MOC_LITERAL(6, 72, 3), // "r_d"
QT_MOC_LITERAL(7, 76, 3), // "c_d"
QT_MOC_LITERAL(8, 80, 1), // "c"
QT_MOC_LITERAL(9, 82, 1), // "k"
QT_MOC_LITERAL(10, 84, 3), // "dim"
QT_MOC_LITERAL(11, 88, 12), // "onChoosePath"
QT_MOC_LITERAL(12, 101, 18) // "onConfirmParameter"

    },
    "YangCZFXYDialog\0begin\0\0sendPyParams\0"
    "QList<QList<double> >\0observed_data\0"
    "r_d\0c_d\0c\0k\0dim\0onChoosePath\0"
    "onConfirmParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YangCZFXYDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    6,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   50,    2, 0x08 /* Private */,
      12,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void YangCZFXYDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YangCZFXYDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendPyParams((*reinterpret_cast< QList<QList<double> >(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 2: _t->onChoosePath(); break;
        case 3: _t->onConfirmParameter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QList<double> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (YangCZFXYDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YangCZFXYDialog::begin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (YangCZFXYDialog::*)(QList<QList<double>> , double , double , double , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YangCZFXYDialog::sendPyParams)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject YangCZFXYDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_YangCZFXYDialog.data,
    qt_meta_data_YangCZFXYDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *YangCZFXYDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YangCZFXYDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YangCZFXYDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int YangCZFXYDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void YangCZFXYDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void YangCZFXYDialog::sendPyParams(QList<QList<double>> _t1, double _t2, double _t3, double _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
