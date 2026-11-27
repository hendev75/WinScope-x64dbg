/****************************************************************************
** Meta object code from reading C++ file 'SEHChainView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/SEHChainView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SEHChainView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SEHChainView_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SEHChainView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SEHChainView_t qt_meta_stringdata_SEHChainView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SEHChainView"
QT_MOC_LITERAL(1, 13, 14), // "updateSEHChain"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "contextMenuSlot"
QT_MOC_LITERAL(4, 45, 3), // "pos"
QT_MOC_LITERAL(5, 49, 17), // "doubleClickedSlot"
QT_MOC_LITERAL(6, 67, 13), // "followAddress"
QT_MOC_LITERAL(7, 81, 13) // "followHandler"

    },
    "SEHChainView\0updateSEHChain\0\0"
    "contextMenuSlot\0pos\0doubleClickedSlot\0"
    "followAddress\0followHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SEHChainView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    1,   40,    2, 0x09 /* Protected */,
       5,    0,   43,    2, 0x09 /* Protected */,
       6,    0,   44,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SEHChainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SEHChainView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSEHChain(); break;
        case 1: _t->contextMenuSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->doubleClickedSlot(); break;
        case 3: _t->followAddress(); break;
        case 4: _t->followHandler(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SEHChainView::staticMetaObject = { {
    &StdTable::staticMetaObject,
    qt_meta_stringdata_SEHChainView.data,
    qt_meta_data_SEHChainView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SEHChainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SEHChainView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SEHChainView.stringdata0))
        return static_cast<void*>(this);
    return StdTable::qt_metacast(_clname);
}

int SEHChainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
