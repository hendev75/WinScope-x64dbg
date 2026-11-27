/****************************************************************************
** Meta object code from reading C++ file 'SymbolView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/SymbolView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SymbolView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModuleStdTable_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModuleStdTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModuleStdTable_t qt_meta_stringdata_ModuleStdTable = {
    {
QT_MOC_LITERAL(0, 0, 14) // "ModuleStdTable"

    },
    "ModuleStdTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModuleStdTable[] = {

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

void ModuleStdTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ModuleStdTable::staticMetaObject = { {
    &StdIconTable::staticMetaObject,
    qt_meta_stringdata_ModuleStdTable.data,
    qt_meta_data_ModuleStdTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModuleStdTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleStdTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleStdTable.stringdata0))
        return static_cast<void*>(this);
    return StdIconTable::qt_metacast(_clname);
}

int ModuleStdTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdIconTable::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SymbolView_t {
    QByteArrayData data[46];
    char stringdata0[672];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SymbolView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SymbolView_t qt_meta_stringdata_SymbolView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SymbolView"
QT_MOC_LITERAL(1, 11, 14), // "showReferences"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "updateStyle"
QT_MOC_LITERAL(4, 39, 14), // "reloadDataSlot"
QT_MOC_LITERAL(5, 54, 21), // "addMsgToSymbolLogSlot"
QT_MOC_LITERAL(6, 76, 3), // "msg"
QT_MOC_LITERAL(7, 80, 18), // "clearSymbolLogSlot"
QT_MOC_LITERAL(8, 99, 22), // "moduleSelectionChanged"
QT_MOC_LITERAL(9, 122, 5), // "duint"
QT_MOC_LITERAL(10, 128, 5), // "index"
QT_MOC_LITERAL(11, 134, 16), // "updateSymbolList"
QT_MOC_LITERAL(12, 151, 12), // "module_count"
QT_MOC_LITERAL(13, 164, 17), // "SYMBOLMODULEINFO*"
QT_MOC_LITERAL(14, 182, 7), // "modules"
QT_MOC_LITERAL(15, 190, 12), // "symbolFollow"
QT_MOC_LITERAL(16, 203, 16), // "symbolFollowDump"
QT_MOC_LITERAL(17, 220, 18), // "symbolFollowImport"
QT_MOC_LITERAL(18, 239, 18), // "symbolSelectModule"
QT_MOC_LITERAL(19, 258, 4), // "base"
QT_MOC_LITERAL(20, 263, 16), // "enterPressedSlot"
QT_MOC_LITERAL(21, 280, 17), // "symbolContextMenu"
QT_MOC_LITERAL(22, 298, 6), // "QMenu*"
QT_MOC_LITERAL(23, 305, 4), // "menu"
QT_MOC_LITERAL(24, 310, 20), // "symbolRefreshCurrent"
QT_MOC_LITERAL(25, 331, 13), // "labelHelpSlot"
QT_MOC_LITERAL(26, 345, 17), // "moduleContextMenu"
QT_MOC_LITERAL(27, 363, 12), // "moduleFollow"
QT_MOC_LITERAL(28, 376, 17), // "moduleEntryFollow"
QT_MOC_LITERAL(29, 394, 21), // "moduleDownloadSymbols"
QT_MOC_LITERAL(30, 416, 24), // "moduleDownloadAllSymbols"
QT_MOC_LITERAL(31, 441, 14), // "moduleCopyPath"
QT_MOC_LITERAL(32, 456, 12), // "moduleBrowse"
QT_MOC_LITERAL(33, 469, 13), // "moduleSetUser"
QT_MOC_LITERAL(34, 483, 15), // "moduleSetSystem"
QT_MOC_LITERAL(35, 499, 14), // "moduleSetParty"
QT_MOC_LITERAL(36, 514, 18), // "moduleFollowMemMap"
QT_MOC_LITERAL(37, 533, 16), // "toggleBreakpoint"
QT_MOC_LITERAL(38, 550, 14), // "toggleBookmark"
QT_MOC_LITERAL(39, 565, 20), // "refreshShortcutsSlot"
QT_MOC_LITERAL(40, 586, 21), // "emptySearchResultSlot"
QT_MOC_LITERAL(41, 608, 16), // "selectionGetSlot"
QT_MOC_LITERAL(42, 625, 14), // "SELECTIONDATA*"
QT_MOC_LITERAL(43, 640, 9), // "selection"
QT_MOC_LITERAL(44, 650, 10), // "moduleLoad"
QT_MOC_LITERAL(45, 661, 10) // "moduleFree"

    },
    "SymbolView\0showReferences\0\0updateStyle\0"
    "reloadDataSlot\0addMsgToSymbolLogSlot\0"
    "msg\0clearSymbolLogSlot\0moduleSelectionChanged\0"
    "duint\0index\0updateSymbolList\0module_count\0"
    "SYMBOLMODULEINFO*\0modules\0symbolFollow\0"
    "symbolFollowDump\0symbolFollowImport\0"
    "symbolSelectModule\0base\0enterPressedSlot\0"
    "symbolContextMenu\0QMenu*\0menu\0"
    "symbolRefreshCurrent\0labelHelpSlot\0"
    "moduleContextMenu\0moduleFollow\0"
    "moduleEntryFollow\0moduleDownloadSymbols\0"
    "moduleDownloadAllSymbols\0moduleCopyPath\0"
    "moduleBrowse\0moduleSetUser\0moduleSetSystem\0"
    "moduleSetParty\0moduleFollowMemMap\0"
    "toggleBreakpoint\0toggleBookmark\0"
    "refreshShortcutsSlot\0emptySearchResultSlot\0"
    "selectionGetSlot\0SELECTIONDATA*\0"
    "selection\0moduleLoad\0moduleFree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SymbolView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  179,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  180,    2, 0x08 /* Private */,
       4,    0,  181,    2, 0x08 /* Private */,
       5,    1,  182,    2, 0x08 /* Private */,
       7,    0,  185,    2, 0x08 /* Private */,
       8,    1,  186,    2, 0x08 /* Private */,
      11,    2,  189,    2, 0x08 /* Private */,
      15,    0,  194,    2, 0x08 /* Private */,
      16,    0,  195,    2, 0x08 /* Private */,
      17,    0,  196,    2, 0x08 /* Private */,
      18,    1,  197,    2, 0x08 /* Private */,
      20,    0,  200,    2, 0x08 /* Private */,
      21,    1,  201,    2, 0x08 /* Private */,
      24,    0,  204,    2, 0x08 /* Private */,
      25,    0,  205,    2, 0x08 /* Private */,
      26,    1,  206,    2, 0x08 /* Private */,
      27,    0,  209,    2, 0x08 /* Private */,
      28,    0,  210,    2, 0x08 /* Private */,
      29,    0,  211,    2, 0x08 /* Private */,
      30,    0,  212,    2, 0x08 /* Private */,
      31,    0,  213,    2, 0x08 /* Private */,
      32,    0,  214,    2, 0x08 /* Private */,
      33,    0,  215,    2, 0x08 /* Private */,
      34,    0,  216,    2, 0x08 /* Private */,
      35,    0,  217,    2, 0x08 /* Private */,
      36,    0,  218,    2, 0x08 /* Private */,
      37,    0,  219,    2, 0x08 /* Private */,
      38,    0,  220,    2, 0x08 /* Private */,
      39,    0,  221,    2, 0x08 /* Private */,
      40,    0,  222,    2, 0x08 /* Private */,
      41,    1,  223,    2, 0x08 /* Private */,
      44,    0,  226,    2, 0x08 /* Private */,
      45,    0,  227,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
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
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SymbolView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SymbolView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showReferences(); break;
        case 1: _t->updateStyle(); break;
        case 2: _t->reloadDataSlot(); break;
        case 3: _t->addMsgToSymbolLogSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->clearSymbolLogSlot(); break;
        case 5: _t->moduleSelectionChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 6: _t->updateSymbolList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SYMBOLMODULEINFO*(*)>(_a[2]))); break;
        case 7: _t->symbolFollow(); break;
        case 8: _t->symbolFollowDump(); break;
        case 9: _t->symbolFollowImport(); break;
        case 10: _t->symbolSelectModule((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 11: _t->enterPressedSlot(); break;
        case 12: _t->symbolContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 13: _t->symbolRefreshCurrent(); break;
        case 14: _t->labelHelpSlot(); break;
        case 15: _t->moduleContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 16: _t->moduleFollow(); break;
        case 17: _t->moduleEntryFollow(); break;
        case 18: _t->moduleDownloadSymbols(); break;
        case 19: _t->moduleDownloadAllSymbols(); break;
        case 20: _t->moduleCopyPath(); break;
        case 21: _t->moduleBrowse(); break;
        case 22: _t->moduleSetUser(); break;
        case 23: _t->moduleSetSystem(); break;
        case 24: _t->moduleSetParty(); break;
        case 25: _t->moduleFollowMemMap(); break;
        case 26: _t->toggleBreakpoint(); break;
        case 27: _t->toggleBookmark(); break;
        case 28: _t->refreshShortcutsSlot(); break;
        case 29: _t->emptySearchResultSlot(); break;
        case 30: _t->selectionGetSlot((*reinterpret_cast< SELECTIONDATA*(*)>(_a[1]))); break;
        case 31: _t->moduleLoad(); break;
        case 32: _t->moduleFree(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SymbolView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SymbolView::showReferences)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SymbolView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SymbolView.data,
    qt_meta_data_SymbolView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SymbolView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SymbolView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SymbolView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void SymbolView::showReferences()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
