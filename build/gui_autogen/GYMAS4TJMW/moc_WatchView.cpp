/****************************************************************************
** Meta object code from reading C++ file 'WatchView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/WatchView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WatchView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WatchView_t {
    QByteArrayData data[20];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchView_t qt_meta_stringdata_WatchView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WatchView"
QT_MOC_LITERAL(1, 10, 15), // "contextMenuSlot"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "event"
QT_MOC_LITERAL(4, 33, 11), // "updateWatch"
QT_MOC_LITERAL(5, 45, 12), // "addWatchSlot"
QT_MOC_LITERAL(6, 58, 12), // "delWatchSlot"
QT_MOC_LITERAL(7, 71, 15), // "renameWatchSlot"
QT_MOC_LITERAL(8, 87, 13), // "editWatchSlot"
QT_MOC_LITERAL(9, 101, 15), // "modifyWatchSlot"
QT_MOC_LITERAL(10, 117, 19), // "watchdogDisableSlot"
QT_MOC_LITERAL(11, 137, 19), // "watchdogChangedSlot"
QT_MOC_LITERAL(12, 157, 21), // "watchdogUnchangedSlot"
QT_MOC_LITERAL(13, 179, 18), // "watchdogIsTrueSlot"
QT_MOC_LITERAL(14, 198, 19), // "watchdogIsFalseSlot"
QT_MOC_LITERAL(15, 218, 15), // "setTypeUintSlot"
QT_MOC_LITERAL(16, 234, 14), // "setTypeIntSlot"
QT_MOC_LITERAL(17, 249, 16), // "setTypeFloatSlot"
QT_MOC_LITERAL(18, 266, 16), // "setTypeAsciiSlot"
QT_MOC_LITERAL(19, 283, 18) // "setTypeUnicodeSlot"

    },
    "WatchView\0contextMenuSlot\0\0event\0"
    "updateWatch\0addWatchSlot\0delWatchSlot\0"
    "renameWatchSlot\0editWatchSlot\0"
    "modifyWatchSlot\0watchdogDisableSlot\0"
    "watchdogChangedSlot\0watchdogUnchangedSlot\0"
    "watchdogIsTrueSlot\0watchdogIsFalseSlot\0"
    "setTypeUintSlot\0setTypeIntSlot\0"
    "setTypeFloatSlot\0setTypeAsciiSlot\0"
    "setTypeUnicodeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       4,    0,  102,    2, 0x0a /* Public */,
       5,    0,  103,    2, 0x0a /* Public */,
       6,    0,  104,    2, 0x0a /* Public */,
       7,    0,  105,    2, 0x0a /* Public */,
       8,    0,  106,    2, 0x0a /* Public */,
       9,    0,  107,    2, 0x0a /* Public */,
      10,    0,  108,    2, 0x0a /* Public */,
      11,    0,  109,    2, 0x0a /* Public */,
      12,    0,  110,    2, 0x0a /* Public */,
      13,    0,  111,    2, 0x0a /* Public */,
      14,    0,  112,    2, 0x0a /* Public */,
      15,    0,  113,    2, 0x0a /* Public */,
      16,    0,  114,    2, 0x0a /* Public */,
      17,    0,  115,    2, 0x0a /* Public */,
      18,    0,  116,    2, 0x0a /* Public */,
      19,    0,  117,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WatchView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WatchView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenuSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->updateWatch(); break;
        case 2: _t->addWatchSlot(); break;
        case 3: _t->delWatchSlot(); break;
        case 4: _t->renameWatchSlot(); break;
        case 5: _t->editWatchSlot(); break;
        case 6: _t->modifyWatchSlot(); break;
        case 7: _t->watchdogDisableSlot(); break;
        case 8: _t->watchdogChangedSlot(); break;
        case 9: _t->watchdogUnchangedSlot(); break;
        case 10: _t->watchdogIsTrueSlot(); break;
        case 11: _t->watchdogIsFalseSlot(); break;
        case 12: _t->setTypeUintSlot(); break;
        case 13: _t->setTypeIntSlot(); break;
        case 14: _t->setTypeFloatSlot(); break;
        case 15: _t->setTypeAsciiSlot(); break;
        case 16: _t->setTypeUnicodeSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WatchView::staticMetaObject = { {
    &StdTable::staticMetaObject,
    qt_meta_stringdata_WatchView.data,
    qt_meta_data_WatchView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchView.stringdata0))
        return static_cast<void*>(this);
    return StdTable::qt_metacast(_clname);
}

int WatchView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
