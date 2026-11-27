/****************************************************************************
** Meta object code from reading C++ file 'RegistersView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/RegistersView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegistersView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegistersView_t {
    QByteArrayData data[44];
    char stringdata0[674];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegistersView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegistersView_t qt_meta_stringdata_RegistersView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RegistersView"
QT_MOC_LITERAL(1, 14, 7), // "refresh"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 20), // "refreshShortcutsSlot"
QT_MOC_LITERAL(4, 44, 21), // "debugStateChangedSlot"
QT_MOC_LITERAL(5, 66, 8), // "DBGSTATE"
QT_MOC_LITERAL(6, 75, 5), // "state"
QT_MOC_LITERAL(7, 81, 6), // "reload"
QT_MOC_LITERAL(8, 88, 7), // "ShowFPU"
QT_MOC_LITERAL(9, 96, 11), // "set_showfpu"
QT_MOC_LITERAL(10, 108, 21), // "onChangeFPUViewAction"
QT_MOC_LITERAL(11, 130, 12), // "InitMappings"
QT_MOC_LITERAL(12, 143, 16), // "fontsUpdatedSlot"
QT_MOC_LITERAL(13, 160, 12), // "shutdownSlot"
QT_MOC_LITERAL(14, 173, 16), // "getRegisterLabel"
QT_MOC_LITERAL(15, 190, 13), // "REGISTER_NAME"
QT_MOC_LITERAL(16, 204, 16), // "CompareRegisters"
QT_MOC_LITERAL(17, 221, 8), // "reg_name"
QT_MOC_LITERAL(18, 230, 17), // "REGDUMP_EXTENDED*"
QT_MOC_LITERAL(19, 248, 7), // "regdump"
QT_MOC_LITERAL(20, 256, 15), // "GetSizeRegister"
QT_MOC_LITERAL(21, 272, 6), // "size_t"
QT_MOC_LITERAL(22, 279, 26), // "GetRegStringValueFromValue"
QT_MOC_LITERAL(23, 306, 3), // "reg"
QT_MOC_LITERAL(24, 310, 11), // "const char*"
QT_MOC_LITERAL(25, 322, 5), // "value"
QT_MOC_LITERAL(26, 328, 21), // "GetTagWordStateString"
QT_MOC_LITERAL(27, 350, 27), // "GetControlWordPCStateString"
QT_MOC_LITERAL(28, 378, 27), // "GetControlWordRCStateString"
QT_MOC_LITERAL(29, 406, 21), // "GetMxCsrRCStateString"
QT_MOC_LITERAL(30, 428, 27), // "GetStatusWordTOPStateString"
QT_MOC_LITERAL(31, 456, 14), // "appendRegister"
QT_MOC_LITERAL(32, 471, 8), // "QString&"
QT_MOC_LITERAL(33, 480, 4), // "text"
QT_MOC_LITERAL(34, 485, 6), // "name64"
QT_MOC_LITERAL(35, 492, 6), // "name32"
QT_MOC_LITERAL(36, 499, 23), // "onCopyToClipboardAction"
QT_MOC_LITERAL(37, 523, 36), // "onCopyFloatingPointToClipboar..."
QT_MOC_LITERAL(38, 560, 29), // "onCopySymbolToClipboardAction"
QT_MOC_LITERAL(39, 590, 10), // "onSIMDMode"
QT_MOC_LITERAL(40, 601, 20), // "onXMMSizeAutoClicked"
QT_MOC_LITERAL(41, 622, 25), // "onAlwaysShowAVX512Clicked"
QT_MOC_LITERAL(42, 648, 9), // "onFpuMode"
QT_MOC_LITERAL(43, 658, 15) // "onCopyAllAction"

    },
    "RegistersView\0refresh\0\0refreshShortcutsSlot\0"
    "debugStateChangedSlot\0DBGSTATE\0state\0"
    "reload\0ShowFPU\0set_showfpu\0"
    "onChangeFPUViewAction\0InitMappings\0"
    "fontsUpdatedSlot\0shutdownSlot\0"
    "getRegisterLabel\0REGISTER_NAME\0"
    "CompareRegisters\0reg_name\0REGDUMP_EXTENDED*\0"
    "regdump\0GetSizeRegister\0size_t\0"
    "GetRegStringValueFromValue\0reg\0"
    "const char*\0value\0GetTagWordStateString\0"
    "GetControlWordPCStateString\0"
    "GetControlWordRCStateString\0"
    "GetMxCsrRCStateString\0GetStatusWordTOPStateString\0"
    "appendRegister\0QString&\0text\0name64\0"
    "name32\0onCopyToClipboardAction\0"
    "onCopyFloatingPointToClipboardAction\0"
    "onCopySymbolToClipboardAction\0onSIMDMode\0"
    "onXMMSizeAutoClicked\0onAlwaysShowAVX512Clicked\0"
    "onFpuMode\0onCopyAllAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegistersView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  150,    2, 0x0a /* Public */,
       4,    1,  151,    2, 0x0a /* Public */,
       7,    0,  154,    2, 0x0a /* Public */,
       8,    1,  155,    2, 0x0a /* Public */,
      10,    0,  158,    2, 0x0a /* Public */,
      11,    0,  159,    2, 0x09 /* Protected */,
      12,    0,  160,    2, 0x09 /* Protected */,
      13,    0,  161,    2, 0x09 /* Protected */,
      14,    1,  162,    2, 0x09 /* Protected */,
      16,    2,  165,    2, 0x09 /* Protected */,
      20,    1,  170,    2, 0x09 /* Protected */,
      22,    2,  173,    2, 0x09 /* Protected */,
      26,    1,  178,    2, 0x09 /* Protected */,
      27,    1,  181,    2, 0x09 /* Protected */,
      28,    1,  184,    2, 0x09 /* Protected */,
      29,    1,  187,    2, 0x09 /* Protected */,
      30,    1,  190,    2, 0x09 /* Protected */,
      31,    4,  193,    2, 0x09 /* Protected */,
      36,    0,  202,    2, 0x09 /* Protected */,
      37,    0,  203,    2, 0x09 /* Protected */,
      38,    0,  204,    2, 0x09 /* Protected */,
      39,    0,  205,    2, 0x09 /* Protected */,
      40,    0,  206,    2, 0x09 /* Protected */,
      41,    0,  207,    2, 0x09 /* Protected */,
      42,    0,  208,    2, 0x09 /* Protected */,
      43,    0,  209,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 15,    2,
    QMetaType::Int, 0x80000000 | 15, 0x80000000 | 18,   17,   19,
    0x80000000 | 21, 0x80000000 | 15,   17,
    QMetaType::QString, 0x80000000 | 15, 0x80000000 | 24,   23,   25,
    QMetaType::QString, QMetaType::UShort,    2,
    QMetaType::QString, QMetaType::UShort,    2,
    QMetaType::QString, QMetaType::UShort,    2,
    QMetaType::QString, QMetaType::UShort,    2,
    QMetaType::QString, QMetaType::UShort,    6,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 15, 0x80000000 | 24, 0x80000000 | 24,   33,   23,   34,   35,
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

void RegistersView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegistersView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->refreshShortcutsSlot(); break;
        case 2: _t->debugStateChangedSlot((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 3: _t->reload(); break;
        case 4: _t->ShowFPU((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onChangeFPUViewAction(); break;
        case 6: _t->InitMappings(); break;
        case 7: _t->fontsUpdatedSlot(); break;
        case 8: _t->shutdownSlot(); break;
        case 9: { QString _r = _t->getRegisterLabel((*reinterpret_cast< REGISTER_NAME(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->CompareRegisters((*reinterpret_cast< const REGISTER_NAME(*)>(_a[1])),(*reinterpret_cast< REGDUMP_EXTENDED*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: { size_t _r = _t->GetSizeRegister((*reinterpret_cast< const REGISTER_NAME(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< size_t*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->GetRegStringValueFromValue((*reinterpret_cast< REGISTER_NAME(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->GetTagWordStateString((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->GetControlWordPCStateString((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->GetControlWordRCStateString((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->GetMxCsrRCStateString((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->GetStatusWordTOPStateString((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->appendRegister((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< REGISTER_NAME(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4]))); break;
        case 19: _t->onCopyToClipboardAction(); break;
        case 20: _t->onCopyFloatingPointToClipboardAction(); break;
        case 21: _t->onCopySymbolToClipboardAction(); break;
        case 22: _t->onSIMDMode(); break;
        case 23: _t->onXMMSizeAutoClicked(); break;
        case 24: _t->onAlwaysShowAVX512Clicked(); break;
        case 25: _t->onFpuMode(); break;
        case 26: _t->onCopyAllAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegistersView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegistersView::refresh)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RegistersView::staticMetaObject = { {
    &QScrollArea::staticMetaObject,
    qt_meta_stringdata_RegistersView.data,
    qt_meta_data_RegistersView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RegistersView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegistersView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegistersView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ActionHelper<RegistersView>"))
        return static_cast< ActionHelper<RegistersView>*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int RegistersView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void RegistersView::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
