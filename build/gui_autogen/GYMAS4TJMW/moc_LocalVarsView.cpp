/****************************************************************************
** Meta object code from reading C++ file 'LocalVarsView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/LocalVarsView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalVarsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalVarsView_t {
    QByteArrayData data[17];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalVarsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalVarsView_t qt_meta_stringdata_LocalVarsView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LocalVarsView"
QT_MOC_LITERAL(1, 14, 15), // "contextMenuSlot"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "pos"
QT_MOC_LITERAL(4, 35, 15), // "mousePressEvent"
QT_MOC_LITERAL(5, 51, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 64, 5), // "event"
QT_MOC_LITERAL(7, 70, 14), // "followDumpSlot"
QT_MOC_LITERAL(8, 85, 15), // "followStackSlot"
QT_MOC_LITERAL(9, 101, 16), // "followMemMapSlot"
QT_MOC_LITERAL(10, 118, 20), // "followWordInDumpSlot"
QT_MOC_LITERAL(11, 139, 21), // "followWordInStackSlot"
QT_MOC_LITERAL(12, 161, 15), // "baseChangedSlot"
QT_MOC_LITERAL(13, 177, 10), // "renameSlot"
QT_MOC_LITERAL(14, 188, 10), // "updateSlot"
QT_MOC_LITERAL(15, 199, 17), // "configUpdatedSlot"
QT_MOC_LITERAL(16, 217, 8) // "editSlot"

    },
    "LocalVarsView\0contextMenuSlot\0\0pos\0"
    "mousePressEvent\0QMouseEvent*\0event\0"
    "followDumpSlot\0followStackSlot\0"
    "followMemMapSlot\0followWordInDumpSlot\0"
    "followWordInStackSlot\0baseChangedSlot\0"
    "renameSlot\0updateSlot\0configUpdatedSlot\0"
    "editSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalVarsView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    0,   83,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,
      15,    0,   88,    2, 0x0a /* Public */,
      16,    0,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
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

void LocalVarsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalVarsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenuSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->followDumpSlot(); break;
        case 3: _t->followStackSlot(); break;
        case 4: _t->followMemMapSlot(); break;
        case 5: _t->followWordInDumpSlot(); break;
        case 6: _t->followWordInStackSlot(); break;
        case 7: _t->baseChangedSlot(); break;
        case 8: _t->renameSlot(); break;
        case 9: _t->updateSlot(); break;
        case 10: _t->configUpdatedSlot(); break;
        case 11: _t->editSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LocalVarsView::staticMetaObject = { {
    &StdTable::staticMetaObject,
    qt_meta_stringdata_LocalVarsView.data,
    qt_meta_data_LocalVarsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocalVarsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalVarsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalVarsView.stringdata0))
        return static_cast<void*>(this);
    return StdTable::qt_metacast(_clname);
}

int LocalVarsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
