/****************************************************************************
** Meta object code from reading C++ file 'Disassembly.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/BasicView/Disassembly.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Disassembly.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Disassembly_t {
    QByteArrayData data[16];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Disassembly_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Disassembly_t qt_meta_stringdata_Disassembly = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Disassembly"
QT_MOC_LITERAL(1, 12, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "duint"
QT_MOC_LITERAL(4, 36, 2), // "va"
QT_MOC_LITERAL(5, 39, 17), // "selectionExpanded"
QT_MOC_LITERAL(6, 57, 17), // "updateWindowTitle"
QT_MOC_LITERAL(7, 75, 5), // "title"
QT_MOC_LITERAL(8, 81, 17), // "disassembleAtSlot"
QT_MOC_LITERAL(9, 99, 3), // "cip"
QT_MOC_LITERAL(10, 103, 21), // "debugStateChangedSlot"
QT_MOC_LITERAL(11, 125, 8), // "DBGSTATE"
QT_MOC_LITERAL(12, 134, 5), // "state"
QT_MOC_LITERAL(13, 140, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(14, 161, 26), // "tokenizerConfigUpdatedSlot"
QT_MOC_LITERAL(15, 188, 16) // "updateConfigSlot"

    },
    "Disassembly\0selectionChanged\0\0duint\0"
    "va\0selectionExpanded\0updateWindowTitle\0"
    "title\0disassembleAtSlot\0cip\0"
    "debugStateChangedSlot\0DBGSTATE\0state\0"
    "selectionChangedSlot\0tokenizerConfigUpdatedSlot\0"
    "updateConfigSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Disassembly[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   61,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      13,    1,   69,    2, 0x0a /* Public */,
      14,    0,   72,    2, 0x0a /* Public */,
      15,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Disassembly::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Disassembly *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 1: _t->selectionExpanded(); break;
        case 2: _t->updateWindowTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->disassembleAtSlot((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 4: _t->debugStateChangedSlot((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 5: _t->selectionChangedSlot((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 6: _t->tokenizerConfigUpdatedSlot(); break;
        case 7: _t->updateConfigSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Disassembly::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Disassembly::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Disassembly::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Disassembly::selectionExpanded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Disassembly::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Disassembly::updateWindowTitle)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Disassembly::staticMetaObject = { {
    &AbstractTableView::staticMetaObject,
    qt_meta_stringdata_Disassembly.data,
    qt_meta_data_Disassembly,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Disassembly::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Disassembly::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Disassembly.stringdata0))
        return static_cast<void*>(this);
    return AbstractTableView::qt_metacast(_clname);
}

int Disassembly::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Disassembly::selectionChanged(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Disassembly::selectionExpanded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Disassembly::updateWindowTitle(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
