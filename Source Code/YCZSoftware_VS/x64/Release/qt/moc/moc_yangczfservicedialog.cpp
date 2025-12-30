/****************************************************************************
** Meta object code from reading C++ file 'yangczfservicedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/yangczfservicedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yangczfservicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YangCZFServiceDialog_t {
    QByteArrayData data[15];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YangCZFServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YangCZFServiceDialog_t qt_meta_stringdata_YangCZFServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "YangCZFServiceDialog"
QT_MOC_LITERAL(1, 21, 12), // "sendPyParams"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "QList<double>"
QT_MOC_LITERAL(4, 49, 13), // "observed_data"
QT_MOC_LITERAL(5, 63, 14), // "QList<ObPtXYZ>"
QT_MOC_LITERAL(6, 78, 5), // "obpts"
QT_MOC_LITERAL(7, 84, 1), // "t"
QT_MOC_LITERAL(8, 86, 3), // "dim"
QT_MOC_LITERAL(9, 90, 4), // "path"
QT_MOC_LITERAL(10, 95, 5), // "begin"
QT_MOC_LITERAL(11, 101, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(12, 119, 12), // "onXYZChanged"
QT_MOC_LITERAL(13, 132, 19), // "onBtnConfirmClicked"
QT_MOC_LITERAL(14, 152, 24) // "onBtnBrowseOutputClicked"

    },
    "YangCZFServiceDialog\0sendPyParams\0\0"
    "QList<double>\0observed_data\0QList<ObPtXYZ>\0"
    "obpts\0t\0dim\0path\0begin\0onCmbObPathChange\0"
    "onXYZChanged\0onBtnConfirmClicked\0"
    "onBtnBrowseOutputClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YangCZFServiceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   44,    2, 0x06 /* Public */,
      10,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   58,    2, 0x08 /* Private */,
      12,    0,   59,    2, 0x08 /* Private */,
      13,    0,   60,    2, 0x08 /* Private */,
      14,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void YangCZFServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YangCZFServiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPyParams((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onCmbObPathChange(); break;
        case 3: _t->onXYZChanged(); break;
        case 4: _t->onBtnConfirmClicked(); break;
        case 5: _t->onBtnBrowseOutputClicked(); break;
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
            using _t = void (YangCZFServiceDialog::*)(QList<double> , QList<ObPtXYZ> , int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YangCZFServiceDialog::sendPyParams)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (YangCZFServiceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YangCZFServiceDialog::begin)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject YangCZFServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_YangCZFServiceDialog.data,
    qt_meta_data_YangCZFServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *YangCZFServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YangCZFServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YangCZFServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int YangCZFServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void YangCZFServiceDialog::sendPyParams(QList<double> _t1, QList<ObPtXYZ> _t2, int _t3, int _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void YangCZFServiceDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
