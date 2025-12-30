/****************************************************************************
** Meta object code from reading C++ file 'oyczfilterservicedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/oyczfilterservicedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oyczfilterservicedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OYCZFilterServiceDialog_t {
    QByteArrayData data[19];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OYCZFilterServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OYCZFilterServiceDialog_t qt_meta_stringdata_OYCZFilterServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OYCZFilterServiceDialog"
QT_MOC_LITERAL(1, 24, 12), // "sendPyParams"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "QList<ObPt2D>"
QT_MOC_LITERAL(4, 52, 5), // "obpts"
QT_MOC_LITERAL(5, 58, 14), // "QList<Range2D>"
QT_MOC_LITERAL(6, 73, 6), // "rangeA"
QT_MOC_LITERAL(7, 80, 10), // "outputPath"
QT_MOC_LITERAL(8, 91, 1), // "s"
QT_MOC_LITERAL(9, 93, 1), // "k"
QT_MOC_LITERAL(10, 95, 1), // "c"
QT_MOC_LITERAL(11, 97, 1), // "e"
QT_MOC_LITERAL(12, 99, 10), // "getOutPath"
QT_MOC_LITERAL(13, 110, 5), // "begin"
QT_MOC_LITERAL(14, 116, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(15, 134, 4), // "path"
QT_MOC_LITERAL(16, 139, 24), // "onBtnBrowseOutputClicked"
QT_MOC_LITERAL(17, 164, 19), // "onBtnConfirmClicked"
QT_MOC_LITERAL(18, 184, 18) // "onBtnCancelClicked"

    },
    "OYCZFilterServiceDialog\0sendPyParams\0"
    "\0QList<ObPt2D>\0obpts\0QList<Range2D>\0"
    "rangeA\0outputPath\0s\0k\0c\0e\0getOutPath\0"
    "begin\0onCmbObPathChange\0path\0"
    "onBtnBrowseOutputClicked\0onBtnConfirmClicked\0"
    "onBtnCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OYCZFilterServiceDialog[] = {

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
       1,    7,   49,    2, 0x06 /* Public */,
      12,    1,   64,    2, 0x06 /* Public */,
      13,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   70,    2, 0x08 /* Private */,
      16,    0,   73,    2, 0x08 /* Private */,
      17,    0,   74,    2, 0x08 /* Private */,
      18,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString, QMetaType::Double, QMetaType::Int, QMetaType::Double, QMetaType::Bool,    4,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OYCZFilterServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OYCZFilterServiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPyParams((*reinterpret_cast< QList<ObPt2D>(*)>(_a[1])),(*reinterpret_cast< QList<Range2D>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 1: _t->getOutPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->begin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onCmbObPathChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onBtnBrowseOutputClicked(); break;
        case 5: _t->onBtnConfirmClicked(); break;
        case 6: _t->onBtnCancelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OYCZFilterServiceDialog::*)(QList<ObPt2D> , QList<Range2D> , QString , double , int , double , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OYCZFilterServiceDialog::sendPyParams)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OYCZFilterServiceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OYCZFilterServiceDialog::getOutPath)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OYCZFilterServiceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OYCZFilterServiceDialog::begin)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OYCZFilterServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OYCZFilterServiceDialog.data,
    qt_meta_data_OYCZFilterServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OYCZFilterServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OYCZFilterServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OYCZFilterServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OYCZFilterServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OYCZFilterServiceDialog::sendPyParams(QList<ObPt2D> _t1, QList<Range2D> _t2, QString _t3, double _t4, int _t5, double _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OYCZFilterServiceDialog::getOutPath(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OYCZFilterServiceDialog::begin(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
