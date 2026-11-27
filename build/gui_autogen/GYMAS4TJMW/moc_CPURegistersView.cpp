/****************************************************************************
** Meta object code from reading C++ file 'CPURegistersView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CPURegistersView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPURegistersView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CPURegistersView_t {
    QByteArrayData data[44];
    char stringdata0[634];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPURegistersView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPURegistersView_t qt_meta_stringdata_CPURegistersView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CPURegistersView"
QT_MOC_LITERAL(1, 17, 11), // "setRegister"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "REGISTER_NAME"
QT_MOC_LITERAL(4, 44, 3), // "reg"
QT_MOC_LITERAL(5, 48, 5), // "duint"
QT_MOC_LITERAL(6, 54, 5), // "value"
QT_MOC_LITERAL(7, 60, 19), // "updateRegistersSlot"
QT_MOC_LITERAL(8, 80, 21), // "debugStateChangedSlot"
QT_MOC_LITERAL(9, 102, 8), // "DBGSTATE"
QT_MOC_LITERAL(10, 111, 5), // "state"
QT_MOC_LITERAL(11, 117, 15), // "mousePressEvent"
QT_MOC_LITERAL(12, 133, 12), // "QMouseEvent*"
QT_MOC_LITERAL(13, 146, 5), // "event"
QT_MOC_LITERAL(14, 152, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(15, 174, 13), // "keyPressEvent"
QT_MOC_LITERAL(16, 188, 10), // "QKeyEvent*"
QT_MOC_LITERAL(17, 199, 20), // "refreshShortcutsSlot"
QT_MOC_LITERAL(18, 220, 28), // "displayCustomContextMenuSlot"
QT_MOC_LITERAL(19, 249, 3), // "pos"
QT_MOC_LITERAL(20, 253, 25), // "onIncrementx87StackAction"
QT_MOC_LITERAL(21, 279, 25), // "onDecrementx87StackAction"
QT_MOC_LITERAL(22, 305, 14), // "onModifyAction"
QT_MOC_LITERAL(23, 320, 17), // "onIncrementAction"
QT_MOC_LITERAL(24, 338, 17), // "onDecrementAction"
QT_MOC_LITERAL(25, 356, 12), // "onZeroAction"
QT_MOC_LITERAL(26, 369, 19), // "onToggleValueAction"
QT_MOC_LITERAL(27, 389, 12), // "onUndoAction"
QT_MOC_LITERAL(28, 402, 20), // "onCopyPreviousAction"
QT_MOC_LITERAL(29, 423, 21), // "onFollowInDisassembly"
QT_MOC_LITERAL(30, 445, 14), // "onFollowInDump"
QT_MOC_LITERAL(31, 460, 15), // "onFollowInDumpN"
QT_MOC_LITERAL(32, 476, 15), // "onFollowInStack"
QT_MOC_LITERAL(33, 492, 19), // "onFollowInMemoryMap"
QT_MOC_LITERAL(34, 512, 16), // "onRemoveHardware"
QT_MOC_LITERAL(35, 529, 15), // "onHighlightSlot"
QT_MOC_LITERAL(36, 545, 12), // "ModifyFields"
QT_MOC_LITERAL(37, 558, 5), // "title"
QT_MOC_LITERAL(38, 564, 21), // "STRING_VALUE_TABLE_t*"
QT_MOC_LITERAL(39, 586, 5), // "table"
QT_MOC_LITERAL(40, 592, 6), // "SIZE_T"
QT_MOC_LITERAL(41, 599, 4), // "size"
QT_MOC_LITERAL(42, 604, 26), // "disasmSelectionChangedSlot"
QT_MOC_LITERAL(43, 631, 2) // "va"

    },
    "CPURegistersView\0setRegister\0\0"
    "REGISTER_NAME\0reg\0duint\0value\0"
    "updateRegistersSlot\0debugStateChangedSlot\0"
    "DBGSTATE\0state\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseDoubleClickEvent\0"
    "keyPressEvent\0QKeyEvent*\0refreshShortcutsSlot\0"
    "displayCustomContextMenuSlot\0pos\0"
    "onIncrementx87StackAction\0"
    "onDecrementx87StackAction\0onModifyAction\0"
    "onIncrementAction\0onDecrementAction\0"
    "onZeroAction\0onToggleValueAction\0"
    "onUndoAction\0onCopyPreviousAction\0"
    "onFollowInDisassembly\0onFollowInDump\0"
    "onFollowInDumpN\0onFollowInStack\0"
    "onFollowInMemoryMap\0onRemoveHardware\0"
    "onHighlightSlot\0ModifyFields\0title\0"
    "STRING_VALUE_TABLE_t*\0table\0SIZE_T\0"
    "size\0disasmSelectionChangedSlot\0va"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPURegistersView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  144,    2, 0x0a /* Public */,
       7,    0,  149,    2, 0x0a /* Public */,
       8,    1,  150,    2, 0x0a /* Public */,
      11,    1,  153,    2, 0x0a /* Public */,
      14,    1,  156,    2, 0x0a /* Public */,
      15,    1,  159,    2, 0x0a /* Public */,
      17,    0,  162,    2, 0x0a /* Public */,
      18,    1,  163,    2, 0x0a /* Public */,
      20,    0,  166,    2, 0x09 /* Protected */,
      21,    0,  167,    2, 0x09 /* Protected */,
      22,    0,  168,    2, 0x09 /* Protected */,
      23,    0,  169,    2, 0x09 /* Protected */,
      24,    0,  170,    2, 0x09 /* Protected */,
      25,    0,  171,    2, 0x09 /* Protected */,
      26,    0,  172,    2, 0x09 /* Protected */,
      27,    0,  173,    2, 0x09 /* Protected */,
      28,    0,  174,    2, 0x09 /* Protected */,
      29,    0,  175,    2, 0x09 /* Protected */,
      30,    0,  176,    2, 0x09 /* Protected */,
      31,    0,  177,    2, 0x09 /* Protected */,
      32,    0,  178,    2, 0x09 /* Protected */,
      33,    0,  179,    2, 0x09 /* Protected */,
      34,    0,  180,    2, 0x09 /* Protected */,
      35,    0,  181,    2, 0x09 /* Protected */,
      36,    3,  182,    2, 0x09 /* Protected */,
      42,    1,  189,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 16,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   19,
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
    QMetaType::Void, QMetaType::QString, 0x80000000 | 38, 0x80000000 | 40,   37,   39,   41,
    QMetaType::Void, 0x80000000 | 5,   43,

       0        // eod
};

void CPURegistersView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPURegistersView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRegister((*reinterpret_cast< REGISTER_NAME(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 1: _t->updateRegistersSlot(); break;
        case 2: _t->debugStateChangedSlot((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: _t->refreshShortcutsSlot(); break;
        case 7: _t->displayCustomContextMenuSlot((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: _t->onIncrementx87StackAction(); break;
        case 9: _t->onDecrementx87StackAction(); break;
        case 10: _t->onModifyAction(); break;
        case 11: _t->onIncrementAction(); break;
        case 12: _t->onDecrementAction(); break;
        case 13: _t->onZeroAction(); break;
        case 14: _t->onToggleValueAction(); break;
        case 15: _t->onUndoAction(); break;
        case 16: _t->onCopyPreviousAction(); break;
        case 17: _t->onFollowInDisassembly(); break;
        case 18: _t->onFollowInDump(); break;
        case 19: _t->onFollowInDumpN(); break;
        case 20: _t->onFollowInStack(); break;
        case 21: _t->onFollowInMemoryMap(); break;
        case 22: _t->onRemoveHardware(); break;
        case 23: _t->onHighlightSlot(); break;
        case 24: _t->ModifyFields((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< STRING_VALUE_TABLE_t*(*)>(_a[2])),(*reinterpret_cast< SIZE_T(*)>(_a[3]))); break;
        case 25: _t->disasmSelectionChangedSlot((*reinterpret_cast< duint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPURegistersView::staticMetaObject = { {
    &RegistersView::staticMetaObject,
    qt_meta_stringdata_CPURegistersView.data,
    qt_meta_data_CPURegistersView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPURegistersView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPURegistersView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPURegistersView.stringdata0))
        return static_cast<void*>(this);
    return RegistersView::qt_metacast(_clname);
}

int CPURegistersView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RegistersView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
