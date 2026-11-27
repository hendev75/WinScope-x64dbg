/****************************************************************************
** Meta object code from reading C++ file 'AbstractTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/BasicView/AbstractTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractTableScrollBar_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractTableScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractTableScrollBar_t qt_meta_stringdata_AbstractTableScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 22) // "AbstractTableScrollBar"

    },
    "AbstractTableScrollBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractTableScrollBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AbstractTableScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AbstractTableScrollBar::staticMetaObject = { {
    &QScrollBar::staticMetaObject,
    qt_meta_stringdata_AbstractTableScrollBar.data,
    qt_meta_data_AbstractTableScrollBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractTableScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractTableScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractTableScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollBar::qt_metacast(_clname);
}

int AbstractTableScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AbstractTableView_t {
    QByteArrayData data[21];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractTableView_t qt_meta_stringdata_AbstractTableView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AbstractTableView"
QT_MOC_LITERAL(1, 18, 18), // "enterPressedSignal"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "headerButtonPressed"
QT_MOC_LITERAL(4, 58, 5), // "duint"
QT_MOC_LITERAL(5, 64, 3), // "col"
QT_MOC_LITERAL(6, 68, 20), // "headerButtonReleased"
QT_MOC_LITERAL(7, 89, 18), // "tableOffsetChanged"
QT_MOC_LITERAL(8, 108, 1), // "i"
QT_MOC_LITERAL(9, 110, 19), // "viewableRowsChanged"
QT_MOC_LITERAL(10, 130, 8), // "rowCount"
QT_MOC_LITERAL(11, 139, 9), // "repainted"
QT_MOC_LITERAL(12, 149, 10), // "reloadData"
QT_MOC_LITERAL(13, 160, 14), // "updateViewport"
QT_MOC_LITERAL(14, 175, 20), // "vertSliderActionSlot"
QT_MOC_LITERAL(15, 196, 6), // "action"
QT_MOC_LITERAL(16, 203, 16), // "editColumnDialog"
QT_MOC_LITERAL(17, 220, 16), // "updateColorsSlot"
QT_MOC_LITERAL(18, 237, 15), // "updateFontsSlot"
QT_MOC_LITERAL(19, 253, 19), // "updateShortcutsSlot"
QT_MOC_LITERAL(20, 273, 9) // "closeSlot"

    },
    "AbstractTableView\0enterPressedSignal\0"
    "\0headerButtonPressed\0duint\0col\0"
    "headerButtonReleased\0tableOffsetChanged\0"
    "i\0viewableRowsChanged\0rowCount\0repainted\0"
    "reloadData\0updateViewport\0"
    "vertSliderActionSlot\0action\0"
    "editColumnDialog\0updateColorsSlot\0"
    "updateFontsSlot\0updateShortcutsSlot\0"
    "closeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractTableView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       6,    1,   88,    2, 0x06 /* Public */,
       7,    1,   91,    2, 0x06 /* Public */,
       9,    1,   94,    2, 0x06 /* Public */,
      11,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   98,    2, 0x0a /* Public */,
      13,    0,   99,    2, 0x0a /* Public */,
      14,    1,  100,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    0,  106,    2, 0x08 /* Private */,
      20,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    8,
    QMetaType::Void, 0x80000000 | 4,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AbstractTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractTableView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enterPressedSignal(); break;
        case 1: _t->headerButtonPressed((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 2: _t->headerButtonReleased((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 3: _t->tableOffsetChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 4: _t->viewableRowsChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 5: _t->repainted(); break;
        case 6: _t->reloadData(); break;
        case 7: _t->updateViewport(); break;
        case 8: _t->vertSliderActionSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->editColumnDialog(); break;
        case 10: _t->updateColorsSlot(); break;
        case 11: _t->updateFontsSlot(); break;
        case 12: _t->updateShortcutsSlot(); break;
        case 13: _t->closeSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractTableView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTableView::enterPressedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractTableView::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTableView::headerButtonPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractTableView::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTableView::headerButtonReleased)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractTableView::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTableView::tableOffsetChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractTableView::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTableView::viewableRowsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractTableView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractTableView::repainted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractTableView::staticMetaObject = { {
    &QAbstractScrollArea::staticMetaObject,
    qt_meta_stringdata_AbstractTableView.data,
    qt_meta_data_AbstractTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractTableView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ActionHelper<AbstractTableView>"))
        return static_cast< ActionHelper<AbstractTableView>*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int AbstractTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AbstractTableView::enterPressedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AbstractTableView::headerButtonPressed(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractTableView::headerButtonReleased(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractTableView::tableOffsetChanged(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AbstractTableView::viewableRowsChanged(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AbstractTableView::repainted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
