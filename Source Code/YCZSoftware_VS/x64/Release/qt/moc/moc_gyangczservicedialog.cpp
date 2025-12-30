/****************************************************************************
** Meta object code from reading C++ file 'gyangczservicedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/gyangczservicedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gyangczservicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GYangCZServiceDialog_t {
    QByteArrayData data[27];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GYangCZServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GYangCZServiceDialog_t qt_meta_stringdata_GYangCZServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GYangCZServiceDialog"
QT_MOC_LITERAL(1, 21, 5), // "begin"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "sendPyParams"
QT_MOC_LITERAL(4, 41, 13), // "QList<double>"
QT_MOC_LITERAL(5, 55, 13), // "observed_data"
QT_MOC_LITERAL(6, 69, 14), // "QList<ObPtXYZ>"
QT_MOC_LITERAL(7, 84, 5), // "obpts"
QT_MOC_LITERAL(8, 90, 18), // "train_index_matrix"
QT_MOC_LITERAL(9, 109, 17), // "test_index_matrix"
QT_MOC_LITERAL(10, 127, 8), // "un_obpts"
QT_MOC_LITERAL(11, 136, 1), // "c"
QT_MOC_LITERAL(12, 138, 1), // "k"
QT_MOC_LITERAL(13, 140, 2), // "k2"
QT_MOC_LITERAL(14, 143, 3), // "dim"
QT_MOC_LITERAL(15, 147, 10), // "outputPath"
QT_MOC_LITERAL(16, 158, 1), // "e"
QT_MOC_LITERAL(17, 160, 5), // "islog"
QT_MOC_LITERAL(18, 166, 5), // "isTIF"
QT_MOC_LITERAL(19, 172, 10), // "getOutPath"
QT_MOC_LITERAL(20, 183, 12), // "InputChanged"
QT_MOC_LITERAL(21, 196, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(22, 214, 17), // "onCmbUnknowChange"
QT_MOC_LITERAL(23, 232, 24), // "onBtnBrowseOutputClicked"
QT_MOC_LITERAL(24, 257, 12), // "onXYZChanged"
QT_MOC_LITERAL(25, 270, 19), // "onBtnConfirmClicked"
QT_MOC_LITERAL(26, 290, 7) // "onClose"

    },
    "GYangCZServiceDialog\0begin\0\0sendPyParams\0"
    "QList<double>\0observed_data\0QList<ObPtXYZ>\0"
    "obpts\0train_index_matrix\0test_index_matrix\0"
    "un_obpts\0c\0k\0k2\0dim\0outputPath\0e\0islog\0"
    "isTIF\0getOutPath\0InputChanged\0"
    "onCmbObPathChange\0onCmbUnknowChange\0"
    "onBtnBrowseOutputClicked\0onXYZChanged\0"
    "onBtnConfirmClicked\0onClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GYangCZServiceDialog[] = {

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
       1,    1,   64,    2, 0x06 /* Public */,
       3,   13,   67,    2, 0x06 /* Public */,
      19,    2,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,   99,    2, 0x08 /* Private */,
      21,    0,  100,    2, 0x08 /* Private */,
      22,    0,  101,    2, 0x08 /* Private */,
      23,    0,  102,    2, 0x08 /* Private */,
      24,    0,  103,    2, 0x08 /* Private */,
      25,    0,  104,    2, 0x08 /* Private */,
      26,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 6, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    5,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,

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

void GYangCZServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GYangCZServiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendPyParams((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< QList<double>(*)>(_a[4])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< QString(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13]))); break;
        case 2: _t->getOutPath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->InputChanged(); break;
        case 4: _t->onCmbObPathChange(); break;
        case 5: _t->onCmbUnknowChange(); break;
        case 6: _t->onBtnBrowseOutputClicked(); break;
        case 7: _t->onXYZChanged(); break;
        case 8: _t->onBtnConfirmClicked(); break;
        case 9: _t->onClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GYangCZServiceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GYangCZServiceDialog::begin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GYangCZServiceDialog::*)(QList<double> , QList<ObPtXYZ> , QList<double> , QList<double> , QList<ObPtXYZ> , double , int , int , int , QString , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GYangCZServiceDialog::sendPyParams)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GYangCZServiceDialog::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GYangCZServiceDialog::getOutPath)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GYangCZServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GYangCZServiceDialog.data,
    qt_meta_data_GYangCZServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GYangCZServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GYangCZServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GYangCZServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GYangCZServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GYangCZServiceDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GYangCZServiceDialog::sendPyParams(QList<double> _t1, QList<ObPtXYZ> _t2, QList<double> _t3, QList<double> _t4, QList<ObPtXYZ> _t5, double _t6, int _t7, int _t8, int _t9, QString _t10, bool _t11, bool _t12, bool _t13)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GYangCZServiceDialog::getOutPath(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
