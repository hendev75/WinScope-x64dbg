/****************************************************************************
** Meta object code from reading C++ file 'MemoryMapView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/MemoryMapView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MemoryMapView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MemoryMapView_t {
    QByteArrayData data[40];
    char stringdata0[605];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MemoryMapView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MemoryMapView_t qt_meta_stringdata_MemoryMapView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MemoryMapView"
QT_MOC_LITERAL(1, 14, 14), // "showReferences"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(4, 51, 5), // "duint"
QT_MOC_LITERAL(5, 57, 5), // "index"
QT_MOC_LITERAL(6, 63, 21), // "fixSelectionRangeSlot"
QT_MOC_LITERAL(7, 85, 20), // "refreshShortcutsSlot"
QT_MOC_LITERAL(8, 106, 16), // "stateChangedSlot"
QT_MOC_LITERAL(9, 123, 8), // "DBGSTATE"
QT_MOC_LITERAL(10, 132, 5), // "state"
QT_MOC_LITERAL(11, 138, 14), // "followDumpSlot"
QT_MOC_LITERAL(12, 153, 22), // "followDisassemblerSlot"
QT_MOC_LITERAL(13, 176, 17), // "followSymbolsSlot"
QT_MOC_LITERAL(14, 194, 17), // "doubleClickedSlot"
QT_MOC_LITERAL(15, 212, 34), // "memoryExecuteSingleshootToggl..."
QT_MOC_LITERAL(16, 247, 18), // "memoryAllocateSlot"
QT_MOC_LITERAL(17, 266, 15), // "execCommandSlot"
QT_MOC_LITERAL(18, 282, 15), // "contextMenuSlot"
QT_MOC_LITERAL(19, 298, 3), // "pos"
QT_MOC_LITERAL(20, 302, 14), // "switchViewSlot"
QT_MOC_LITERAL(21, 317, 20), // "pageMemoryRightsSlot"
QT_MOC_LITERAL(22, 338, 14), // "refreshMapSlot"
QT_MOC_LITERAL(23, 353, 15), // "findPatternSlot"
QT_MOC_LITERAL(24, 369, 14), // "dumpMemorySlot"
QT_MOC_LITERAL(25, 384, 14), // "loadMemorySlot"
QT_MOC_LITERAL(26, 399, 11), // "commentSlot"
QT_MOC_LITERAL(27, 411, 17), // "selectAddressSlot"
QT_MOC_LITERAL(28, 429, 2), // "va"
QT_MOC_LITERAL(29, 432, 14), // "gotoOriginSlot"
QT_MOC_LITERAL(30, 447, 18), // "gotoExpressionSlot"
QT_MOC_LITERAL(31, 466, 17), // "addVirtualModSlot"
QT_MOC_LITERAL(32, 484, 18), // "findReferencesSlot"
QT_MOC_LITERAL(33, 503, 16), // "selectionGetSlot"
QT_MOC_LITERAL(34, 520, 14), // "SELECTIONDATA*"
QT_MOC_LITERAL(35, 535, 9), // "selection"
QT_MOC_LITERAL(36, 545, 16), // "selectionSetSlot"
QT_MOC_LITERAL(37, 562, 20), // "const SELECTIONDATA*"
QT_MOC_LITERAL(38, 583, 17), // "disassembleAtSlot"
QT_MOC_LITERAL(39, 601, 3) // "cip"

    },
    "MemoryMapView\0showReferences\0\0"
    "selectionChangedSlot\0duint\0index\0"
    "fixSelectionRangeSlot\0refreshShortcutsSlot\0"
    "stateChangedSlot\0DBGSTATE\0state\0"
    "followDumpSlot\0followDisassemblerSlot\0"
    "followSymbolsSlot\0doubleClickedSlot\0"
    "memoryExecuteSingleshootToggleSlot\0"
    "memoryAllocateSlot\0execCommandSlot\0"
    "contextMenuSlot\0pos\0switchViewSlot\0"
    "pageMemoryRightsSlot\0refreshMapSlot\0"
    "findPatternSlot\0dumpMemorySlot\0"
    "loadMemorySlot\0commentSlot\0selectAddressSlot\0"
    "va\0gotoOriginSlot\0gotoExpressionSlot\0"
    "addVirtualModSlot\0findReferencesSlot\0"
    "selectionGetSlot\0SELECTIONDATA*\0"
    "selection\0selectionSetSlot\0"
    "const SELECTIONDATA*\0disassembleAtSlot\0"
    "cip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MemoryMapView[] = {

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
       3,    1,  155,    2, 0x0a /* Public */,
       6,    0,  158,    2, 0x0a /* Public */,
       7,    0,  159,    2, 0x0a /* Public */,
       8,    1,  160,    2, 0x0a /* Public */,
      11,    0,  163,    2, 0x0a /* Public */,
      12,    0,  164,    2, 0x0a /* Public */,
      13,    0,  165,    2, 0x0a /* Public */,
      14,    0,  166,    2, 0x0a /* Public */,
      15,    0,  167,    2, 0x0a /* Public */,
      16,    0,  168,    2, 0x0a /* Public */,
      17,    0,  169,    2, 0x0a /* Public */,
      18,    1,  170,    2, 0x0a /* Public */,
      20,    0,  173,    2, 0x0a /* Public */,
      21,    0,  174,    2, 0x0a /* Public */,
      22,    0,  175,    2, 0x0a /* Public */,
      23,    0,  176,    2, 0x0a /* Public */,
      24,    0,  177,    2, 0x0a /* Public */,
      25,    0,  178,    2, 0x0a /* Public */,
      26,    0,  179,    2, 0x0a /* Public */,
      27,    1,  180,    2, 0x0a /* Public */,
      29,    0,  183,    2, 0x0a /* Public */,
      30,    0,  184,    2, 0x0a /* Public */,
      31,    0,  185,    2, 0x0a /* Public */,
      32,    0,  186,    2, 0x0a /* Public */,
      33,    1,  187,    2, 0x0a /* Public */,
      36,    1,  190,    2, 0x0a /* Public */,
      38,    2,  193,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 37,   35,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,   28,   39,

       0        // eod
};

void MemoryMapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemoryMapView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showReferences(); break;
        case 1: _t->selectionChangedSlot((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 2: _t->fixSelectionRangeSlot(); break;
        case 3: _t->refreshShortcutsSlot(); break;
        case 4: _t->stateChangedSlot((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 5: _t->followDumpSlot(); break;
        case 6: _t->followDisassemblerSlot(); break;
        case 7: _t->followSymbolsSlot(); break;
        case 8: _t->doubleClickedSlot(); break;
        case 9: _t->memoryExecuteSingleshootToggleSlot(); break;
        case 10: _t->memoryAllocateSlot(); break;
        case 11: _t->execCommandSlot(); break;
        case 12: _t->contextMenuSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->switchViewSlot(); break;
        case 14: _t->pageMemoryRightsSlot(); break;
        case 15: _t->refreshMapSlot(); break;
        case 16: _t->findPatternSlot(); break;
        case 17: _t->dumpMemorySlot(); break;
        case 18: _t->loadMemorySlot(); break;
        case 19: _t->commentSlot(); break;
        case 20: _t->selectAddressSlot((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 21: _t->gotoOriginSlot(); break;
        case 22: _t->gotoExpressionSlot(); break;
        case 23: _t->addVirtualModSlot(); break;
        case 24: _t->findReferencesSlot(); break;
        case 25: _t->selectionGetSlot((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 26: _t->selectionSetSlot((*reinterpret_cast< const SELECTIONDATA*(*)>(_a[1]))); break;
        case 27: _t->disassembleAtSlot((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MemoryMapView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemoryMapView::showReferences)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MemoryMapView::staticMetaObject = { {
    &StdIconTable::staticMetaObject,
    qt_meta_stringdata_MemoryMapView.data,
    qt_meta_data_MemoryMapView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MemoryMapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MemoryMapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MemoryMapView.stringdata0))
        return static_cast<void*>(this);
    return StdIconTable::qt_metacast(_clname);
}

int MemoryMapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdIconTable::qt_metacall(_c, _id, _a);
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
void MemoryMapView::showReferences()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
