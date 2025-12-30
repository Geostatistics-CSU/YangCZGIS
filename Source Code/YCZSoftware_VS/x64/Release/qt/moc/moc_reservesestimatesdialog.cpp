/****************************************************************************
** Meta object code from reading C++ file 'reservesestimatesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/reservesestimatesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reservesestimatesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReservesEstimatesDialog_t {
    QByteArrayData data[32];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReservesEstimatesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReservesEstimatesDialog_t qt_meta_stringdata_ReservesEstimatesDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ReservesEstimatesDialog"
QT_MOC_LITERAL(1, 24, 12), // "sendPyParams"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "QList<double>"
QT_MOC_LITERAL(4, 52, 8), // "obPt_val"
QT_MOC_LITERAL(5, 61, 14), // "QList<ObPtXYZ>"
QT_MOC_LITERAL(6, 76, 7), // "obPts_c"
QT_MOC_LITERAL(7, 84, 10), // "un_obPts_c"
QT_MOC_LITERAL(8, 95, 1), // "c"
QT_MOC_LITERAL(9, 97, 1), // "k"
QT_MOC_LITERAL(10, 99, 2), // "kr"
QT_MOC_LITERAL(11, 102, 3), // "l_r"
QT_MOC_LITERAL(12, 106, 3), // "l_c"
QT_MOC_LITERAL(13, 110, 3), // "n_r"
QT_MOC_LITERAL(14, 114, 3), // "n_c"
QT_MOC_LITERAL(15, 118, 2), // "dz"
QT_MOC_LITERAL(16, 121, 2), // "pa"
QT_MOC_LITERAL(17, 124, 2), // "pb"
QT_MOC_LITERAL(18, 127, 2), // "pc"
QT_MOC_LITERAL(19, 130, 7), // "outpath"
QT_MOC_LITERAL(20, 138, 5), // "error"
QT_MOC_LITERAL(21, 144, 2), // "X0"
QT_MOC_LITERAL(22, 147, 2), // "Y0"
QT_MOC_LITERAL(23, 150, 3), // "A_0"
QT_MOC_LITERAL(24, 154, 5), // "begin"
QT_MOC_LITERAL(25, 160, 4), // "name"
QT_MOC_LITERAL(26, 165, 10), // "getOutPath"
QT_MOC_LITERAL(27, 176, 4), // "path"
QT_MOC_LITERAL(28, 181, 2), // "no"
QT_MOC_LITERAL(29, 184, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(30, 202, 24), // "onBtnBrowseOutputClicked"
QT_MOC_LITERAL(31, 227, 19) // "onBtnConfirmClicked"

    },
    "ReservesEstimatesDialog\0sendPyParams\0"
    "\0QList<double>\0obPt_val\0QList<ObPtXYZ>\0"
    "obPts_c\0un_obPts_c\0c\0k\0kr\0l_r\0l_c\0n_r\0"
    "n_c\0dz\0pa\0pb\0pc\0outpath\0error\0X0\0Y0\0"
    "A_0\0begin\0name\0getOutPath\0path\0no\0"
    "onCmbObPathChange\0onBtnBrowseOutputClicked\0"
    "onBtnConfirmClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReservesEstimatesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   19,   44,    2, 0x06 /* Public */,
      24,    1,   83,    2, 0x06 /* Public */,
      26,    2,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    0,   91,    2, 0x08 /* Private */,
      30,    0,   92,    2, 0x08 /* Private */,
      31,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   27,   28,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReservesEstimatesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReservesEstimatesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPyParams((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[2])),(*reinterpret_cast< QList<ObPtXYZ>(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< double(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14])),(*reinterpret_cast< QString(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16])),(*reinterpret_cast< double(*)>(_a[17])),(*reinterpret_cast< double(*)>(_a[18])),(*reinterpret_cast< double(*)>(_a[19]))); break;
        case 1: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->getOutPath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->onCmbObPathChange(); break;
        case 4: _t->onBtnBrowseOutputClicked(); break;
        case 5: _t->onBtnConfirmClicked(); break;
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
            using _t = void (ReservesEstimatesDialog::*)(QList<double> , QList<ObPtXYZ> , QList<ObPtXYZ> , double , int , int , double , double , int , int , double , double , double , double , QString , bool , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReservesEstimatesDialog::sendPyParams)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReservesEstimatesDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReservesEstimatesDialog::begin)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReservesEstimatesDialog::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReservesEstimatesDialog::getOutPath)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReservesEstimatesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ReservesEstimatesDialog.data,
    qt_meta_data_ReservesEstimatesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReservesEstimatesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReservesEstimatesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReservesEstimatesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ReservesEstimatesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ReservesEstimatesDialog::sendPyParams(QList<double> _t1, QList<ObPtXYZ> _t2, QList<ObPtXYZ> _t3, double _t4, int _t5, int _t6, double _t7, double _t8, int _t9, int _t10, double _t11, double _t12, double _t13, double _t14, QString _t15, bool _t16, double _t17, double _t18, double _t19)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t14))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t15))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t16))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t17))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t18))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t19))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReservesEstimatesDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ReservesEstimatesDialog::getOutPath(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
