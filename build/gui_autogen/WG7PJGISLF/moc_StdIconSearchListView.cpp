/****************************************************************************
** Meta object code from reading C++ file 'StdIconSearchListView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/BasicView/StdIconSearchListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StdIconSearchListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StdIconSearchListView_t {
    QByteArrayData data[7];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StdIconSearchListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StdIconSearchListView_t qt_meta_stringdata_StdIconSearchListView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "StdIconSearchListView"
QT_MOC_LITERAL(1, 22, 13), // "setIconColumn"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "c"
QT_MOC_LITERAL(4, 39, 10), // "setRowIcon"
QT_MOC_LITERAL(5, 50, 1), // "r"
QT_MOC_LITERAL(6, 52, 4) // "icon"

    },
    "StdIconSearchListView\0setIconColumn\0"
    "\0c\0setRowIcon\0r\0icon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StdIconSearchListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    2,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QIcon,    5,    6,

       0        // eod
};

void StdIconSearchListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StdIconSearchListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setIconColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRowIcon((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StdIconSearchListView::staticMetaObject = { {
    &StdSearchListView::staticMetaObject,
    qt_meta_stringdata_StdIconSearchListView.data,
    qt_meta_data_StdIconSearchListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StdIconSearchListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StdIconSearchListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StdIconSearchListView.stringdata0))
        return static_cast<void*>(this);
    return StdSearchListView::qt_metacast(_clname);
}

int StdIconSearchListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdSearchListView::qt_metacall(_c, _id, _a);
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
