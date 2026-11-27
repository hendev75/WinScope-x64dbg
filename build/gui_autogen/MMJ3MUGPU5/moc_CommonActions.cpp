/****************************************************************************
** Meta object code from reading C++ file 'CommonActions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Utils/CommonActions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommonActions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommonActions_t {
    QByteArrayData data[21];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommonActions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommonActions_t qt_meta_stringdata_CommonActions = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CommonActions"
QT_MOC_LITERAL(1, 14, 21), // "followDisassemblySlot"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "setLabelSlot"
QT_MOC_LITERAL(4, 50, 14), // "setCommentSlot"
QT_MOC_LITERAL(5, 65, 15), // "setBookmarkSlot"
QT_MOC_LITERAL(6, 81, 22), // "toggleInt3BPActionSlot"
QT_MOC_LITERAL(7, 104, 20), // "editSoftBpActionSlot"
QT_MOC_LITERAL(8, 125, 20), // "toggleHwBpActionSlot"
QT_MOC_LITERAL(9, 146, 24), // "setHwBpOnSlot0ActionSlot"
QT_MOC_LITERAL(10, 171, 24), // "setHwBpOnSlot1ActionSlot"
QT_MOC_LITERAL(11, 196, 24), // "setHwBpOnSlot2ActionSlot"
QT_MOC_LITERAL(12, 221, 24), // "setHwBpOnSlot3ActionSlot"
QT_MOC_LITERAL(13, 246, 9), // "setHwBpAt"
QT_MOC_LITERAL(14, 256, 5), // "duint"
QT_MOC_LITERAL(15, 262, 2), // "va"
QT_MOC_LITERAL(16, 265, 4), // "slot"
QT_MOC_LITERAL(17, 270, 9), // "graphSlot"
QT_MOC_LITERAL(18, 280, 15), // "displayTypeSlot"
QT_MOC_LITERAL(19, 296, 26), // "setNewOriginHereActionSlot"
QT_MOC_LITERAL(20, 323, 16) // "createThreadSlot"

    },
    "CommonActions\0followDisassemblySlot\0"
    "\0setLabelSlot\0setCommentSlot\0"
    "setBookmarkSlot\0toggleInt3BPActionSlot\0"
    "editSoftBpActionSlot\0toggleHwBpActionSlot\0"
    "setHwBpOnSlot0ActionSlot\0"
    "setHwBpOnSlot1ActionSlot\0"
    "setHwBpOnSlot2ActionSlot\0"
    "setHwBpOnSlot3ActionSlot\0setHwBpAt\0"
    "duint\0va\0slot\0graphSlot\0displayTypeSlot\0"
    "setNewOriginHereActionSlot\0createThreadSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommonActions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    2,  105,    2, 0x0a /* Public */,
      17,    0,  110,    2, 0x0a /* Public */,
      18,    0,  111,    2, 0x0a /* Public */,
      19,    0,  112,    2, 0x0a /* Public */,
      20,    0,  113,    2, 0x0a /* Public */,

 // slots: parameters
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
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CommonActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommonActions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->followDisassemblySlot(); break;
        case 1: _t->setLabelSlot(); break;
        case 2: _t->setCommentSlot(); break;
        case 3: _t->setBookmarkSlot(); break;
        case 4: _t->toggleInt3BPActionSlot(); break;
        case 5: _t->editSoftBpActionSlot(); break;
        case 6: _t->toggleHwBpActionSlot(); break;
        case 7: _t->setHwBpOnSlot0ActionSlot(); break;
        case 8: _t->setHwBpOnSlot1ActionSlot(); break;
        case 9: _t->setHwBpOnSlot2ActionSlot(); break;
        case 10: _t->setHwBpOnSlot3ActionSlot(); break;
        case 11: _t->setHwBpAt((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->graphSlot(); break;
        case 13: _t->displayTypeSlot(); break;
        case 14: _t->setNewOriginHereActionSlot(); break;
        case 15: _t->createThreadSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommonActions::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CommonActions.data,
    qt_meta_data_CommonActions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommonActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommonActions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommonActions.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ActionHelperProxy"))
        return static_cast< ActionHelperProxy*>(this);
    return QObject::qt_metacast(_clname);
}

int CommonActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
