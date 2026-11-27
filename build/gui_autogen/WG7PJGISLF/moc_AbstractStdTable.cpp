/****************************************************************************
** Meta object code from reading C++ file 'AbstractStdTable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/BasicView/AbstractStdTable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractStdTable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractStdTable_t {
    QByteArrayData data[23];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractStdTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractStdTable_t qt_meta_stringdata_AbstractStdTable = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AbstractStdTable"
QT_MOC_LITERAL(1, 17, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "duint"
QT_MOC_LITERAL(4, 41, 5), // "index"
QT_MOC_LITERAL(5, 47, 16), // "keyPressedSignal"
QT_MOC_LITERAL(6, 64, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 75, 5), // "event"
QT_MOC_LITERAL(8, 81, 19), // "doubleClickedSignal"
QT_MOC_LITERAL(9, 101, 17), // "contextMenuSignal"
QT_MOC_LITERAL(10, 119, 3), // "pos"
QT_MOC_LITERAL(11, 123, 17), // "sortChangedSignal"
QT_MOC_LITERAL(12, 141, 12), // "copyLineSlot"
QT_MOC_LITERAL(13, 154, 13), // "copyTableSlot"
QT_MOC_LITERAL(14, 168, 19), // "copyTableResizeSlot"
QT_MOC_LITERAL(15, 188, 17), // "copyLineToLogSlot"
QT_MOC_LITERAL(16, 206, 18), // "copyTableToLogSlot"
QT_MOC_LITERAL(17, 225, 24), // "copyTableResizeToLogSlot"
QT_MOC_LITERAL(18, 250, 13), // "copyEntrySlot"
QT_MOC_LITERAL(19, 264, 15), // "exportTableSlot"
QT_MOC_LITERAL(20, 280, 24), // "contextMenuRequestedSlot"
QT_MOC_LITERAL(21, 305, 23), // "headerButtonPressedSlot"
QT_MOC_LITERAL(22, 329, 3) // "col"

    },
    "AbstractStdTable\0selectionChanged\0\0"
    "duint\0index\0keyPressedSignal\0QKeyEvent*\0"
    "event\0doubleClickedSignal\0contextMenuSignal\0"
    "pos\0sortChangedSignal\0copyLineSlot\0"
    "copyTableSlot\0copyTableResizeSlot\0"
    "copyLineToLogSlot\0copyTableToLogSlot\0"
    "copyTableResizeToLogSlot\0copyEntrySlot\0"
    "exportTableSlot\0contextMenuRequestedSlot\0"
    "headerButtonPressedSlot\0col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractStdTable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    1,   96,    2, 0x06 /* Public */,
      11,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  100,    2, 0x0a /* Public */,
      13,    0,  101,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,
      18,    0,  106,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,
      20,    1,  108,    2, 0x0a /* Public */,
      21,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, 0x80000000 | 3,   22,

       0        // eod
};

void AbstractStdTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractStdTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 1: _t->keyPressedSignal((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->doubleClickedSignal(); break;
        case 3: _t->contextMenuSignal((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->sortChangedSignal(); break;
        case 5: _t->copyLineSlot(); break;
        case 6: _t->copyTableSlot(); break;
        case 7: _t->copyTableResizeSlot(); break;
        case 8: _t->copyLineToLogSlot(); break;
        case 9: _t->copyTableToLogSlot(); break;
        case 10: _t->copyTableResizeToLogSlot(); break;
        case 11: _t->copyEntrySlot(); break;
        case 12: _t->exportTableSlot(); break;
        case 13: _t->contextMenuRequestedSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 14: _t->headerButtonPressedSlot((*reinterpret_cast< duint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractStdTable::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractStdTable::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractStdTable::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractStdTable::keyPressedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractStdTable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractStdTable::doubleClickedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractStdTable::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractStdTable::contextMenuSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractStdTable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractStdTable::sortChangedSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractStdTable::staticMetaObject = { {
    &AbstractTableView::staticMetaObject,
    qt_meta_stringdata_AbstractStdTable.data,
    qt_meta_data_AbstractStdTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractStdTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractStdTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractStdTable.stringdata0))
        return static_cast<void*>(this);
    return AbstractTableView::qt_metacast(_clname);
}

int AbstractStdTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AbstractStdTable::selectionChanged(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractStdTable::keyPressedSignal(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractStdTable::doubleClickedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AbstractStdTable::contextMenuSignal(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AbstractStdTable::sortChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
