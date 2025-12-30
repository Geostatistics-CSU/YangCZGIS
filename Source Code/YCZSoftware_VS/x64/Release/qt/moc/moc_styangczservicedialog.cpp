/****************************************************************************
** Meta object code from reading C++ file 'styangczservicedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/styangczservicedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styangczservicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_STYangCZServiceDialog_t {
    QByteArrayData data[20];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_STYangCZServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_STYangCZServiceDialog_t qt_meta_stringdata_STYangCZServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "STYangCZServiceDialog"
QT_MOC_LITERAL(1, 22, 5), // "begin"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "sendPyParams"
QT_MOC_LITERAL(4, 42, 21), // "QList<QList<double> >"
QT_MOC_LITERAL(5, 64, 13), // "observed_data"
QT_MOC_LITERAL(6, 78, 14), // "QList<ObPtXYZ>"
QT_MOC_LITERAL(7, 93, 5), // "obpts"
QT_MOC_LITERAL(8, 99, 3), // "c_s"
QT_MOC_LITERAL(9, 103, 3), // "c_t"
QT_MOC_LITERAL(10, 107, 3), // "k_s"
QT_MOC_LITERAL(11, 111, 3), // "k_t"
QT_MOC_LITERAL(12, 115, 3), // "dim"
QT_MOC_LITERAL(13, 119, 10), // "outputPath"
QT_MOC_LITERAL(14, 130, 5), // "islog"
QT_MOC_LITERAL(15, 136, 10), // "getOutPath"
QT_MOC_LITERAL(16, 147, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(17, 165, 24), // "onBtnBrowseOutputClicked"
QT_MOC_LITERAL(18, 190, 19), // "onBtnConfirmClicked"
QT_MOC_LITERAL(19, 210, 18) // "onBtnCancelClicked"

    },
    "STYangCZServiceDialog\0begin\0\0sendPyParams\0"
    "QList<QList<double> >\0observed_data\0"
    "QList<ObPtXYZ>\0obpts\0c_s\0c_t\0k_s\0k_t\0"
    "dim\0outputPath\0islog\0getOutPath\0"
    "onCmbObPathChange\0onBtnBrowseOutputClicked\0"
    "onBtnConfirmClicked\0onBtnCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_STYangCZServiceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    9,   52,    2, 0x06 /* Public */,
      15,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   76,    2, 0x08 /* Private */,
      17,    0,   77,    2, 0x08 /* Private */,
      18,    0,   78,    2, 0x08 /* Private */,
      19,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    5,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void STYangCZServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<STYangCZServiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendPyParams((*reinterpret_cast< QList<QList<double> >(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 2: _t->getOutPath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->onCmbObPathChange(); break;
        case 4: _t->onBtnBrowseOutputClicked(); break;
        case 5: _t->onBtnConfirmClicked(); break;
        case 6: _t->onBtnCancelClicked(); break;
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
            using _t = void (STYangCZServiceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STYangCZServiceDialog::begin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (STYangCZServiceDialog::*)(QList<QList<double>> , QList<ObPtXYZ> , double , double , int , int , int , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STYangCZServiceDialog::sendPyParams)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (STYangCZServiceDialog::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&STYangCZServiceDialog::getOutPath)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject STYangCZServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_STYangCZServiceDialog.data,
    qt_meta_data_STYangCZServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *STYangCZServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *STYangCZServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_STYangCZServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int STYangCZServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void STYangCZServiceDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void STYangCZServiceDialog::sendPyParams(QList<QList<double>> _t1, QList<ObPtXYZ> _t2, double _t3, double _t4, int _t5, int _t6, int _t7, QString _t8, bool _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void STYangCZServiceDialog::getOutPath(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
