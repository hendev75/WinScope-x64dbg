/****************************************************************************
** Meta object code from reading C++ file 'QHexEditPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/QHexEdit/QHexEditPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QHexEditPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHexEditPrivate_t {
    QByteArrayData data[11];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHexEditPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHexEditPrivate_t qt_meta_stringdata_QHexEditPrivate = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QHexEditPrivate"
QT_MOC_LITERAL(1, 16, 21), // "currentAddressChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "address"
QT_MOC_LITERAL(4, 47, 18), // "currentSizeChanged"
QT_MOC_LITERAL(5, 66, 4), // "size"
QT_MOC_LITERAL(6, 71, 11), // "dataChanged"
QT_MOC_LITERAL(7, 83, 10), // "dataEdited"
QT_MOC_LITERAL(8, 94, 20), // "overwriteModeChanged"
QT_MOC_LITERAL(9, 115, 5), // "state"
QT_MOC_LITERAL(10, 121, 12) // "updateCursor"

    },
    "QHexEditPrivate\0currentAddressChanged\0"
    "\0address\0currentSizeChanged\0size\0"
    "dataChanged\0dataEdited\0overwriteModeChanged\0"
    "state\0updateCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHexEditPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QHexEditPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QHexEditPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentAddressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->dataChanged(); break;
        case 3: _t->dataEdited(); break;
        case 4: _t->overwriteModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateCursor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QHexEditPrivate::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHexEditPrivate::currentAddressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QHexEditPrivate::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHexEditPrivate::currentSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QHexEditPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHexEditPrivate::dataChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QHexEditPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHexEditPrivate::dataEdited)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QHexEditPrivate::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHexEditPrivate::overwriteModeChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QHexEditPrivate::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QHexEditPrivate.data,
    qt_meta_data_QHexEditPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QHexEditPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHexEditPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHexEditPrivate.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QHexEditPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QHexEditPrivate::currentAddressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHexEditPrivate::currentSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHexEditPrivate::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QHexEditPrivate::dataEdited()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QHexEditPrivate::overwriteModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
