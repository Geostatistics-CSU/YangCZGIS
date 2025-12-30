/****************************************************************************
** Meta object code from reading C++ file 'htmscanservicedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/htmscanservicedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htmscanservicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HTMSCANServiceDialog_t {
    QByteArrayData data[24];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HTMSCANServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HTMSCANServiceDialog_t qt_meta_stringdata_HTMSCANServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "HTMSCANServiceDialog"
QT_MOC_LITERAL(1, 21, 12), // "sendPyParams"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "QList<double>"
QT_MOC_LITERAL(4, 49, 13), // "observed_data"
QT_MOC_LITERAL(5, 63, 14), // "QList<ObPtXYZ>"
QT_MOC_LITERAL(6, 78, 5), // "obpts"
QT_MOC_LITERAL(7, 84, 6), // "length"
QT_MOC_LITERAL(8, 91, 7), // "neiPath"
QT_MOC_LITERAL(9, 99, 6), // "id_sep"
QT_MOC_LITERAL(10, 106, 6), // "is_nei"
QT_MOC_LITERAL(11, 113, 10), // "outputPath"
QT_MOC_LITERAL(12, 124, 3), // "dim"
QT_MOC_LITERAL(13, 128, 11), // "Significant"
QT_MOC_LITERAL(14, 140, 10), // "repeat_num"
QT_MOC_LITERAL(15, 151, 10), // "getOutPath"
QT_MOC_LITERAL(16, 162, 5), // "begin"
QT_MOC_LITERAL(17, 168, 12), // "InputChanged"
QT_MOC_LITERAL(18, 181, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(19, 199, 21), // "onBtnBrowseNeiClicked"
QT_MOC_LITERAL(20, 221, 24), // "onBtnBrowseOutputClicked"
QT_MOC_LITERAL(21, 246, 12), // "onXYZChanged"
QT_MOC_LITERAL(22, 259, 19), // "onBtnConfirmClicked"
QT_MOC_LITERAL(23, 279, 7) // "onClose"

    },
    "HTMSCANServiceDialog\0sendPyParams\0\0"
    "QList<double>\0observed_data\0QList<ObPtXYZ>\0"
    "obpts\0length\0neiPath\0id_sep\0is_nei\0"
    "outputPath\0dim\0Significant\0repeat_num\0"
    "getOutPath\0begin\0InputChanged\0"
    "onCmbObPathChange\0onBtnBrowseNeiClicked\0"
    "onBtnBrowseOutputClicked\0onXYZChanged\0"
    "onBtnConfirmClicked\0onClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HTMSCANServiceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   10,   64,    2, 0x06 /* Public */,
      15,    2,   85,    2, 0x06 /* Public */,
      16,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   93,    2, 0x08 /* Private */,
      18,    0,   94,    2, 0x08 /* Private */,
      19,    0,   95,    2, 0x08 /* Private */,
      20,    0,   96,    2, 0x08 /* Private */,
      21,    0,   97,    2, 0x08 /* Private */,
      22,    0,   98,    2, 0x08 /* Private */,
      23,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Double, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Int,    4,    6,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HTMSCANServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HTMSCANServiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPyParams((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 1: _t->getOutPath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->InputChanged(); break;
        case 4: _t->onCmbObPathChange(); break;
        case 5: _t->onBtnBrowseNeiClicked(); break;
        case 6: _t->onBtnBrowseOutputClicked(); break;
        case 7: _t->onXYZChanged(); break;
        case 8: _t->onBtnConfirmClicked(); break;
        case 9: _t->onClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HTMSCANServiceDialog::*)(QList<double> , QList<ObPtXYZ> , double , QString , int , bool , QString , int , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTMSCANServiceDialog::sendPyParams)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HTMSCANServiceDialog::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTMSCANServiceDialog::getOutPath)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HTMSCANServiceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HTMSCANServiceDialog::begin)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HTMSCANServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HTMSCANServiceDialog.data,
    qt_meta_data_HTMSCANServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HTMSCANServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HTMSCANServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HTMSCANServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HTMSCANServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HTMSCANServiceDialog::sendPyParams(QList<double> _t1, QList<ObPtXYZ> _t2, double _t3, QString _t4, int _t5, bool _t6, QString _t7, int _t8, double _t9, int _t10)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HTMSCANServiceDialog::getOutPath(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HTMSCANServiceDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
