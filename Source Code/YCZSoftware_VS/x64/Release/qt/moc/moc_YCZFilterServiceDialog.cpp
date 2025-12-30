/****************************************************************************
** Meta object code from reading C++ file 'YCZFilterServiceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/service/YCZFilterServiceDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'YCZFilterServiceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YCZFilterServiceDialog_t {
    QByteArrayData data[14];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YCZFilterServiceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YCZFilterServiceDialog_t qt_meta_stringdata_YCZFilterServiceDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "YCZFilterServiceDialog"
QT_MOC_LITERAL(1, 23, 12), // "sendPyParams"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "QList<ObPt>"
QT_MOC_LITERAL(4, 49, 5), // "obpts"
QT_MOC_LITERAL(5, 55, 13), // "QList<UnobPt>"
QT_MOC_LITERAL(6, 69, 7), // "unobPts"
QT_MOC_LITERAL(7, 77, 10), // "outputPath"
QT_MOC_LITERAL(8, 88, 17), // "onCmbObPathChange"
QT_MOC_LITERAL(9, 106, 4), // "path"
QT_MOC_LITERAL(10, 111, 19), // "onCmbUnobPathChange"
QT_MOC_LITERAL(11, 131, 24), // "onBtnBrowseOutputClicked"
QT_MOC_LITERAL(12, 156, 19), // "onBtnConfirmClicked"
QT_MOC_LITERAL(13, 176, 18) // "onBtnCancelClicked"

    },
    "YCZFilterServiceDialog\0sendPyParams\0"
    "\0QList<ObPt>\0obpts\0QList<UnobPt>\0"
    "unobPts\0outputPath\0onCmbObPathChange\0"
    "path\0onCmbUnobPathChange\0"
    "onBtnBrowseOutputClicked\0onBtnConfirmClicked\0"
    "onBtnCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YCZFilterServiceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   51,    2, 0x08 /* Private */,
      10,    1,   54,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,
      12,    0,   58,    2, 0x08 /* Private */,
      13,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QString,    4,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void YCZFilterServiceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YCZFilterServiceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPyParams((*reinterpret_cast< QList<ObPt>(*)>(_a[1])),(*reinterpret_cast< QList<UnobPt>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->onCmbObPathChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onCmbUnobPathChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onBtnBrowseOutputClicked(); break;
        case 4: _t->onBtnConfirmClicked(); break;
        case 5: _t->onBtnCancelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (YCZFilterServiceDialog::*)(QList<ObPt> , QList<UnobPt> , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YCZFilterServiceDialog::sendPyParams)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject YCZFilterServiceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_YCZFilterServiceDialog.data,
    qt_meta_data_YCZFilterServiceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *YCZFilterServiceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YCZFilterServiceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YCZFilterServiceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int YCZFilterServiceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void YCZFilterServiceDialog::sendPyParams(QList<ObPt> _t1, QList<UnobPt> _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
