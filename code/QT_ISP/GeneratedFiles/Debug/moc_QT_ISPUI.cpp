/****************************************************************************
** Meta object code from reading C++ file 'QT_ISPUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QT_ISPUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QT_ISPUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QT_ISPUI_t {
    QByteArrayData data[4];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QT_ISPUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QT_ISPUI_t qt_meta_stringdata_QT_ISPUI = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QT_ISPUI"
QT_MOC_LITERAL(1, 9, 8), // "OpenFile"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12) // "OpenIspTools"

    },
    "QT_ISPUI\0OpenFile\0\0OpenIspTools"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QT_ISPUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QT_ISPUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QT_ISPUI *_t = static_cast<QT_ISPUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenFile(); break;
        case 1: _t->OpenIspTools(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QT_ISPUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QT_ISPUI.data,
      qt_meta_data_QT_ISPUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QT_ISPUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QT_ISPUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QT_ISPUI.stringdata0))
        return static_cast<void*>(const_cast< QT_ISPUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int QT_ISPUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
