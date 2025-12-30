/****************************************************************************
** Meta object code from reading C++ file 'coyangczservicedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/coyangczservicedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coyangczservicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoYangCZServiceDialog_t {
    QByteArrayData data[30];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoYangCZServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoYangCZServiceDialog_t qt_meta_stringdata_CoYangCZServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "CoYangCZServiceDialog"
QT_MOC_LITERAL(1, 22, 12), // "sendPyParams"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "QList<double>"
QT_MOC_LITERAL(4, 50, 13), // "observed_data"
QT_MOC_LITERAL(5, 64, 14), // "QList<ObPtXYZ>"
QT_MOC_LITERAL(6, 79, 16), // "co_observed_data"
QT_MOC_LITERAL(7, 96, 5), // "obpts"
QT_MOC_LITERAL(8, 102, 8), // "co_obpts"
QT_MOC_LITERAL(9, 111, 8), // "un_obpts"
QT_MOC_LITERAL(10, 120, 6), // "c_list"
QT_MOC_LITERAL(11, 127, 1), // "k"
QT_MOC_LITERAL(12, 129, 3), // "dim"
QT_MOC_LITERAL(13, 133, 4), // "n_co"
QT_MOC_LITERAL(14, 138, 10), // "outputPath"
QT_MOC_LITERAL(15, 149, 8), // "isnugget"
QT_MOC_LITERAL(16, 158, 5), // "islog"
QT_MOC_LITERAL(17, 164, 5), // "isTIF"
QT_MOC_LITERAL(18, 170, 10), // "getOutPath"
QT_MOC_LITERAL(19, 181, 5), // "begin"
QT_MOC_LITERAL(20, 187, 12), // "InputChanged"
QT_MOC_LITERAL(21, 200, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(22, 218, 17), // "onCmbUnknowChange"
QT_MOC_LITERAL(23, 236, 14), // "onCmbCo1Change"
QT_MOC_LITERAL(24, 251, 14), // "onCmbCo2Change"
QT_MOC_LITERAL(25, 266, 14), // "onCmbCo3Change"
QT_MOC_LITERAL(26, 281, 12), // "onXYZChanged"
QT_MOC_LITERAL(27, 294, 24), // "onBtnBrowseOutputClicked"
QT_MOC_LITERAL(28, 319, 19), // "onBtnConfirmClicked"
QT_MOC_LITERAL(29, 339, 7) // "onClose"

    },
    "CoYangCZServiceDialog\0sendPyParams\0\0"
    "QList<double>\0observed_data\0QList<ObPtXYZ>\0"
    "co_observed_data\0obpts\0co_obpts\0"
    "un_obpts\0c_list\0k\0dim\0n_co\0outputPath\0"
    "isnugget\0islog\0isTIF\0getOutPath\0begin\0"
    "InputChanged\0onCmbObPathChange\0"
    "onCmbUnknowChange\0onCmbCo1Change\0"
    "onCmbCo2Change\0onCmbCo3Change\0"
    "onXYZChanged\0onBtnBrowseOutputClicked\0"
    "onBtnConfirmClicked\0onClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoYangCZServiceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   13,   79,    2, 0x06 /* Public */,
      18,    2,  106,    2, 0x06 /* Public */,
      19,    1,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  114,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,
      22,    0,  116,    2, 0x08 /* Private */,
      23,    0,  117,    2, 0x08 /* Private */,
      24,    0,  118,    2, 0x08 /* Private */,
      25,    0,  119,    2, 0x08 /* Private */,
      26,    0,  120,    2, 0x08 /* Private */,
      27,    0,  121,    2, 0x08 /* Private */,
      28,    0,  122,    2, 0x08 /* Private */,
      29,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    4,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CoYangCZServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CoYangCZServiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPyParams((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[3])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[4])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[5])),(*reinterpret_cast< QList<double>(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 1: _t->getOutPath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->InputChanged(); break;
        case 4: _t->onCmbObPathChange(); break;
        case 5: _t->onCmbUnknowChange(); break;
        case 6: _t->onCmbCo1Change(); break;
        case 7: _t->onCmbCo2Change(); break;
        case 8: _t->onCmbCo3Change(); break;
        case 9: _t->onXYZChanged(); break;
        case 10: _t->onBtnBrowseOutputClicked(); break;
        case 11: _t->onBtnConfirmClicked(); break;
        case 12: _t->onClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CoYangCZServiceDialog::*)(QList<double> , QList<ObPtXYZ> , QList<ObPtXYZ> , QList<ObPtXYZ> , QList<ObPtXYZ> , QList<double> , int , int , int , QString , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoYangCZServiceDialog::sendPyParams)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CoYangCZServiceDialog::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoYangCZServiceDialog::getOutPath)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CoYangCZServiceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoYangCZServiceDialog::begin)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CoYangCZServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CoYangCZServiceDialog.data,
    qt_meta_data_CoYangCZServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CoYangCZServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoYangCZServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoYangCZServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CoYangCZServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CoYangCZServiceDialog::sendPyParams(QList<double> _t1, QList<ObPtXYZ> _t2, QList<ObPtXYZ> _t3, QList<ObPtXYZ> _t4, QList<ObPtXYZ> _t5, QList<double> _t6, int _t7, int _t8, int _t9, QString _t10, bool _t11, bool _t12, bool _t13)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CoYangCZServiceDialog::getOutPath(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CoYangCZServiceDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
