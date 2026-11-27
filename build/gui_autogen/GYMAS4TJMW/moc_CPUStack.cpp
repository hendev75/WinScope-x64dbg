/****************************************************************************
** Meta object code from reading C++ file 'CPUStack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CPUStack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPUStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CPUStack_t {
    QByteArrayData data[39];
    char stringdata0[560];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPUStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPUStack_t qt_meta_stringdata_CPUStack = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CPUStack"
QT_MOC_LITERAL(1, 9, 23), // "displayReferencesWidget"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "stackDumpAt"
QT_MOC_LITERAL(4, 46, 5), // "duint"
QT_MOC_LITERAL(5, 52, 4), // "addr"
QT_MOC_LITERAL(6, 57, 3), // "csp"
QT_MOC_LITERAL(7, 61, 11), // "gotoCspSlot"
QT_MOC_LITERAL(8, 73, 11), // "gotoCbpSlot"
QT_MOC_LITERAL(9, 85, 18), // "gotoExpressionSlot"
QT_MOC_LITERAL(10, 104, 21), // "gotoPreviousFrameSlot"
QT_MOC_LITERAL(11, 126, 17), // "gotoNextFrameSlot"
QT_MOC_LITERAL(12, 144, 17), // "gotoFrameBaseSlot"
QT_MOC_LITERAL(13, 162, 12), // "selectionGet"
QT_MOC_LITERAL(14, 175, 14), // "SELECTIONDATA*"
QT_MOC_LITERAL(15, 190, 9), // "selection"
QT_MOC_LITERAL(16, 200, 12), // "selectionSet"
QT_MOC_LITERAL(17, 213, 20), // "const SELECTIONDATA*"
QT_MOC_LITERAL(18, 234, 20), // "selectionUpdatedSlot"
QT_MOC_LITERAL(19, 255, 16), // "followDisasmSlot"
QT_MOC_LITERAL(20, 272, 15), // "followStackSlot"
QT_MOC_LITERAL(21, 288, 14), // "binaryEditSlot"
QT_MOC_LITERAL(22, 303, 14), // "binaryFillSlot"
QT_MOC_LITERAL(23, 318, 14), // "binaryCopySlot"
QT_MOC_LITERAL(24, 333, 15), // "binaryPasteSlot"
QT_MOC_LITERAL(25, 349, 11), // "findPattern"
QT_MOC_LITERAL(26, 361, 25), // "binaryPasteIgnoreSizeSlot"
QT_MOC_LITERAL(27, 387, 17), // "undoSelectionSlot"
QT_MOC_LITERAL(28, 405, 10), // "modifySlot"
QT_MOC_LITERAL(29, 416, 11), // "realignSlot"
QT_MOC_LITERAL(30, 428, 15), // "freezeStackSlot"
QT_MOC_LITERAL(31, 444, 19), // "dbgStateChangedSlot"
QT_MOC_LITERAL(32, 464, 8), // "DBGSTATE"
QT_MOC_LITERAL(33, 473, 5), // "state"
QT_MOC_LITERAL(34, 479, 22), // "disasmSelectionChanged"
QT_MOC_LITERAL(35, 502, 5), // "parVA"
QT_MOC_LITERAL(36, 508, 10), // "updateSlot"
QT_MOC_LITERAL(37, 519, 17), // "copyPtrColumnSlot"
QT_MOC_LITERAL(38, 537, 22) // "copyCommentsColumnSlot"

    },
    "CPUStack\0displayReferencesWidget\0\0"
    "stackDumpAt\0duint\0addr\0csp\0gotoCspSlot\0"
    "gotoCbpSlot\0gotoExpressionSlot\0"
    "gotoPreviousFrameSlot\0gotoNextFrameSlot\0"
    "gotoFrameBaseSlot\0selectionGet\0"
    "SELECTIONDATA*\0selection\0selectionSet\0"
    "const SELECTIONDATA*\0selectionUpdatedSlot\0"
    "followDisasmSlot\0followStackSlot\0"
    "binaryEditSlot\0binaryFillSlot\0"
    "binaryCopySlot\0binaryPasteSlot\0"
    "findPattern\0binaryPasteIgnoreSizeSlot\0"
    "undoSelectionSlot\0modifySlot\0realignSlot\0"
    "freezeStackSlot\0dbgStateChangedSlot\0"
    "DBGSTATE\0state\0disasmSelectionChanged\0"
    "parVA\0updateSlot\0copyPtrColumnSlot\0"
    "copyCommentsColumnSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPUStack[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,  155,    2, 0x0a /* Public */,
       7,    0,  160,    2, 0x0a /* Public */,
       8,    0,  161,    2, 0x0a /* Public */,
       9,    0,  162,    2, 0x0a /* Public */,
      10,    0,  163,    2, 0x0a /* Public */,
      11,    0,  164,    2, 0x0a /* Public */,
      12,    0,  165,    2, 0x0a /* Public */,
      13,    1,  166,    2, 0x0a /* Public */,
      16,    1,  169,    2, 0x0a /* Public */,
      18,    0,  172,    2, 0x0a /* Public */,
      19,    0,  173,    2, 0x0a /* Public */,
      20,    0,  174,    2, 0x0a /* Public */,
      21,    0,  175,    2, 0x0a /* Public */,
      22,    0,  176,    2, 0x0a /* Public */,
      23,    0,  177,    2, 0x0a /* Public */,
      24,    0,  178,    2, 0x0a /* Public */,
      25,    0,  179,    2, 0x0a /* Public */,
      26,    0,  180,    2, 0x0a /* Public */,
      27,    0,  181,    2, 0x0a /* Public */,
      28,    0,  182,    2, 0x0a /* Public */,
      29,    0,  183,    2, 0x0a /* Public */,
      30,    0,  184,    2, 0x0a /* Public */,
      31,    1,  185,    2, 0x0a /* Public */,
      34,    1,  188,    2, 0x0a /* Public */,
      36,    0,  191,    2, 0x0a /* Public */,
      37,    0,  192,    2, 0x0a /* Public */,
      38,    0,  193,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   15,
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
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 4,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CPUStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPUStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayReferencesWidget(); break;
        case 1: _t->stackDumpAt((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 2: _t->gotoCspSlot(); break;
        case 3: _t->gotoCbpSlot(); break;
        case 4: _t->gotoExpressionSlot(); break;
        case 5: _t->gotoPreviousFrameSlot(); break;
        case 6: _t->gotoNextFrameSlot(); break;
        case 7: _t->gotoFrameBaseSlot(); break;
        case 8: _t->selectionGet((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 9: _t->selectionSet((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 10: _t->selectionUpdatedSlot(); break;
        case 11: _t->followDisasmSlot(); break;
        case 12: _t->followStackSlot(); break;
        case 13: _t->binaryEditSlot(); break;
        case 14: _t->binaryFillSlot(); break;
        case 15: _t->binaryCopySlot(); break;
        case 16: _t->binaryPasteSlot(); break;
        case 17: _t->findPattern(); break;
        case 18: _t->binaryPasteIgnoreSizeSlot(); break;
        case 19: _t->undoSelectionSlot(); break;
        case 20: _t->modifySlot(); break;
        case 21: _t->realignSlot(); break;
        case 22: _t->freezeStackSlot(); break;
        case 23: _t->dbgStateChangedSlot((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 24: _t->disasmSelectionChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 25: _t->updateSlot(); break;
        case 26: _t->copyPtrColumnSlot(); break;
        case 27: _t->copyCommentsColumnSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CPUStack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUStack::displayReferencesWidget)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPUStack::staticMetaObject = { {
    &HexDump::staticMetaObject,
    qt_meta_stringdata_CPUStack.data,
    qt_meta_data_CPUStack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPUStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPUStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPUStack.stringdata0))
        return static_cast<void*>(this);
    return HexDump::qt_metacast(_clname);
}

int CPUStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HexDump::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void CPUStack::displayReferencesWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
