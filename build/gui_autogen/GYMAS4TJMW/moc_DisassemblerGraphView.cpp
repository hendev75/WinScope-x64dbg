/****************************************************************************
** Meta object code from reading C++ file 'DisassemblerGraphView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/DisassemblerGraphView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DisassemblerGraphView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisassemblerGraphView_t {
    QByteArrayData data[48];
    char stringdata0[735];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisassemblerGraphView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisassemblerGraphView_t qt_meta_stringdata_DisassemblerGraphView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DisassemblerGraphView"
QT_MOC_LITERAL(1, 22, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "duint"
QT_MOC_LITERAL(4, 46, 5), // "parVA"
QT_MOC_LITERAL(5, 52, 16), // "displayLogWidget"
QT_MOC_LITERAL(6, 69, 11), // "detachGraph"
QT_MOC_LITERAL(7, 81, 13), // "loadGraphSlot"
QT_MOC_LITERAL(8, 95, 18), // "BridgeCFGraphList*"
QT_MOC_LITERAL(9, 114, 5), // "graph"
QT_MOC_LITERAL(10, 120, 4), // "addr"
QT_MOC_LITERAL(11, 125, 11), // "graphAtSlot"
QT_MOC_LITERAL(12, 137, 15), // "updateGraphSlot"
QT_MOC_LITERAL(13, 153, 17), // "colorsUpdatedSlot"
QT_MOC_LITERAL(14, 171, 16), // "fontsUpdatedSlot"
QT_MOC_LITERAL(15, 188, 20), // "shortcutsUpdatedSlot"
QT_MOC_LITERAL(16, 209, 18), // "toggleOverviewSlot"
QT_MOC_LITERAL(17, 228, 17), // "toggleSummarySlot"
QT_MOC_LITERAL(18, 246, 16), // "selectionGetSlot"
QT_MOC_LITERAL(19, 263, 14), // "SELECTIONDATA*"
QT_MOC_LITERAL(20, 278, 9), // "selection"
QT_MOC_LITERAL(21, 288, 26), // "tokenizerConfigUpdatedSlot"
QT_MOC_LITERAL(22, 315, 20), // "loadCurrentGraphSlot"
QT_MOC_LITERAL(23, 336, 17), // "disassembleAtSlot"
QT_MOC_LITERAL(24, 354, 2), // "va"
QT_MOC_LITERAL(25, 357, 3), // "cip"
QT_MOC_LITERAL(26, 361, 18), // "gotoExpressionSlot"
QT_MOC_LITERAL(27, 380, 14), // "gotoOriginSlot"
QT_MOC_LITERAL(28, 395, 16), // "gotoPreviousSlot"
QT_MOC_LITERAL(29, 412, 12), // "gotoNextSlot"
QT_MOC_LITERAL(30, 425, 20), // "toggleSyncOriginSlot"
QT_MOC_LITERAL(31, 446, 16), // "followActionSlot"
QT_MOC_LITERAL(32, 463, 21), // "followDisassemblySlot"
QT_MOC_LITERAL(33, 485, 11), // "refreshSlot"
QT_MOC_LITERAL(34, 497, 13), // "saveImageSlot"
QT_MOC_LITERAL(35, 511, 13), // "copyImageSlot"
QT_MOC_LITERAL(36, 525, 8), // "xrefSlot"
QT_MOC_LITERAL(37, 534, 16), // "mnemonicHelpSlot"
QT_MOC_LITERAL(38, 551, 15), // "fitToWindowSlot"
QT_MOC_LITERAL(39, 567, 16), // "zoomToCursorSlot"
QT_MOC_LITERAL(40, 584, 19), // "getCurrentGraphSlot"
QT_MOC_LITERAL(41, 604, 9), // "graphList"
QT_MOC_LITERAL(42, 614, 19), // "dbgStateChangedSlot"
QT_MOC_LITERAL(43, 634, 8), // "DBGSTATE"
QT_MOC_LITERAL(44, 643, 5), // "state"
QT_MOC_LITERAL(45, 649, 28), // "copyHighlightedTokenTextSlot"
QT_MOC_LITERAL(46, 678, 29), // "copyHighlightedTokenValueSlot"
QT_MOC_LITERAL(47, 708, 26) // "enableHighlightingModeSlot"

    },
    "DisassemblerGraphView\0selectionChanged\0"
    "\0duint\0parVA\0displayLogWidget\0detachGraph\0"
    "loadGraphSlot\0BridgeCFGraphList*\0graph\0"
    "addr\0graphAtSlot\0updateGraphSlot\0"
    "colorsUpdatedSlot\0fontsUpdatedSlot\0"
    "shortcutsUpdatedSlot\0toggleOverviewSlot\0"
    "toggleSummarySlot\0selectionGetSlot\0"
    "SELECTIONDATA*\0selection\0"
    "tokenizerConfigUpdatedSlot\0"
    "loadCurrentGraphSlot\0disassembleAtSlot\0"
    "va\0cip\0gotoExpressionSlot\0gotoOriginSlot\0"
    "gotoPreviousSlot\0gotoNextSlot\0"
    "toggleSyncOriginSlot\0followActionSlot\0"
    "followDisassemblySlot\0refreshSlot\0"
    "saveImageSlot\0copyImageSlot\0xrefSlot\0"
    "mnemonicHelpSlot\0fitToWindowSlot\0"
    "zoomToCursorSlot\0getCurrentGraphSlot\0"
    "graphList\0dbgStateChangedSlot\0DBGSTATE\0"
    "state\0copyHighlightedTokenTextSlot\0"
    "copyHighlightedTokenValueSlot\0"
    "enableHighlightingModeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisassemblerGraphView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  184,    2, 0x06 /* Public */,
       5,    0,  187,    2, 0x06 /* Public */,
       6,    0,  188,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,  189,    2, 0x0a /* Public */,
      11,    1,  194,    2, 0x0a /* Public */,
      12,    0,  197,    2, 0x0a /* Public */,
      13,    0,  198,    2, 0x0a /* Public */,
      14,    0,  199,    2, 0x0a /* Public */,
      15,    0,  200,    2, 0x0a /* Public */,
      16,    0,  201,    2, 0x0a /* Public */,
      17,    0,  202,    2, 0x0a /* Public */,
      18,    1,  203,    2, 0x0a /* Public */,
      21,    0,  206,    2, 0x0a /* Public */,
      22,    0,  207,    2, 0x0a /* Public */,
      23,    2,  208,    2, 0x0a /* Public */,
      26,    0,  213,    2, 0x0a /* Public */,
      27,    0,  214,    2, 0x0a /* Public */,
      28,    0,  215,    2, 0x0a /* Public */,
      29,    0,  216,    2, 0x0a /* Public */,
      30,    0,  217,    2, 0x0a /* Public */,
      31,    0,  218,    2, 0x0a /* Public */,
      32,    0,  219,    2, 0x0a /* Public */,
      33,    0,  220,    2, 0x0a /* Public */,
      34,    0,  221,    2, 0x0a /* Public */,
      35,    0,  222,    2, 0x0a /* Public */,
      36,    0,  223,    2, 0x0a /* Public */,
      37,    0,  224,    2, 0x0a /* Public */,
      38,    0,  225,    2, 0x0a /* Public */,
      39,    0,  226,    2, 0x0a /* Public */,
      40,    1,  227,    2, 0x0a /* Public */,
      42,    1,  230,    2, 0x0a /* Public */,
      45,    0,  233,    2, 0x0a /* Public */,
      46,    0,  234,    2, 0x0a /* Public */,
      47,    0,  235,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 3,    9,   10,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   24,   25,
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
    QMetaType::Void, 0x80000000 | 8,   41,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DisassemblerGraphView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisassemblerGraphView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 1: _t->displayLogWidget(); break;
        case 2: _t->detachGraph(); break;
        case 3: _t->loadGraphSlot((*reinterpret_cast< BridgeCFGraphList*(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 4: _t->graphAtSlot((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 5: _t->updateGraphSlot(); break;
        case 6: _t->colorsUpdatedSlot(); break;
        case 7: _t->fontsUpdatedSlot(); break;
        case 8: _t->shortcutsUpdatedSlot(); break;
        case 9: _t->toggleOverviewSlot(); break;
        case 10: _t->toggleSummarySlot(); break;
        case 11: _t->selectionGetSlot((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 12: _t->tokenizerConfigUpdatedSlot(); break;
        case 13: _t->loadCurrentGraphSlot(); break;
        case 14: _t->disassembleAtSlot((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 15: _t->gotoExpressionSlot(); break;
        case 16: _t->gotoOriginSlot(); break;
        case 17: _t->gotoPreviousSlot(); break;
        case 18: _t->gotoNextSlot(); break;
        case 19: _t->toggleSyncOriginSlot(); break;
        case 20: _t->followActionSlot(); break;
        case 21: _t->followDisassemblySlot(); break;
        case 22: _t->refreshSlot(); break;
        case 23: _t->saveImageSlot(); break;
        case 24: _t->copyImageSlot(); break;
        case 25: _t->xrefSlot(); break;
        case 26: _t->mnemonicHelpSlot(); break;
        case 27: _t->fitToWindowSlot(); break;
        case 28: _t->zoomToCursorSlot(); break;
        case 29: _t->getCurrentGraphSlot((*reinterpret_cast< BridgeCFGraphList*(*)>(_a[1]))); break;
        case 30: _t->dbgStateChangedSlot((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 31: _t->copyHighlightedTokenTextSlot(); break;
        case 32: _t->copyHighlightedTokenValueSlot(); break;
        case 33: _t->enableHighlightingModeSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisassemblerGraphView::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisassemblerGraphView::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DisassemblerGraphView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisassemblerGraphView::displayLogWidget)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DisassemblerGraphView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisassemblerGraphView::detachGraph)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DisassemblerGraphView::staticMetaObject = { {
    &QAbstractScrollArea::staticMetaObject,
    qt_meta_stringdata_DisassemblerGraphView.data,
    qt_meta_data_DisassemblerGraphView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisassemblerGraphView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisassemblerGraphView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisassemblerGraphView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ActionHelper<DisassemblerGraphView>"))
        return static_cast< ActionHelper<DisassemblerGraphView>*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int DisassemblerGraphView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void DisassemblerGraphView::selectionChanged(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DisassemblerGraphView::displayLogWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DisassemblerGraphView::detachGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
