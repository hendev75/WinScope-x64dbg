/****************************************************************************
** Meta object code from reading C++ file 'TraceStack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Tracer/TraceStack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TraceStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraceStack_t {
    QByteArrayData data[19];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceStack_t qt_meta_stringdata_TraceStack = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TraceStack"
QT_MOC_LITERAL(1, 11, 23), // "displayReferencesWidget"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "xrefSignal"
QT_MOC_LITERAL(4, 47, 5), // "duint"
QT_MOC_LITERAL(5, 53, 4), // "addr"
QT_MOC_LITERAL(6, 58, 11), // "stackDumpAt"
QT_MOC_LITERAL(7, 70, 3), // "csp"
QT_MOC_LITERAL(8, 74, 11), // "gotoCspSlot"
QT_MOC_LITERAL(9, 86, 11), // "gotoCbpSlot"
QT_MOC_LITERAL(10, 98, 18), // "gotoExpressionSlot"
QT_MOC_LITERAL(11, 117, 12), // "gotoXrefSlot"
QT_MOC_LITERAL(12, 130, 20), // "selectionUpdatedSlot"
QT_MOC_LITERAL(13, 151, 16), // "followDisasmSlot"
QT_MOC_LITERAL(14, 168, 15), // "followStackSlot"
QT_MOC_LITERAL(15, 184, 14), // "binaryCopySlot"
QT_MOC_LITERAL(16, 199, 10), // "updateSlot"
QT_MOC_LITERAL(17, 210, 17), // "copyPtrColumnSlot"
QT_MOC_LITERAL(18, 228, 22) // "copyCommentsColumnSlot"

    },
    "TraceStack\0displayReferencesWidget\0\0"
    "xrefSignal\0duint\0addr\0stackDumpAt\0csp\0"
    "gotoCspSlot\0gotoCbpSlot\0gotoExpressionSlot\0"
    "gotoXrefSlot\0selectionUpdatedSlot\0"
    "followDisasmSlot\0followStackSlot\0"
    "binaryCopySlot\0updateSlot\0copyPtrColumnSlot\0"
    "copyCommentsColumnSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceStack[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   88,    2, 0x0a /* Public */,
       8,    0,   93,    2, 0x0a /* Public */,
       9,    0,   94,    2, 0x0a /* Public */,
      10,    0,   95,    2, 0x0a /* Public */,
      11,    0,   96,    2, 0x0a /* Public */,
      12,    0,   97,    2, 0x0a /* Public */,
      13,    0,   98,    2, 0x0a /* Public */,
      14,    0,   99,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x0a /* Public */,
      17,    0,  102,    2, 0x0a /* Public */,
      18,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    7,
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

       0        // eod
};

void TraceStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayReferencesWidget(); break;
        case 1: _t->xrefSignal((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 2: _t->stackDumpAt((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 3: _t->gotoCspSlot(); break;
        case 4: _t->gotoCbpSlot(); break;
        case 5: _t->gotoExpressionSlot(); break;
        case 6: _t->gotoXrefSlot(); break;
        case 7: _t->selectionUpdatedSlot(); break;
        case 8: _t->followDisasmSlot(); break;
        case 9: _t->followStackSlot(); break;
        case 10: _t->binaryCopySlot(); break;
        case 11: _t->updateSlot(); break;
        case 12: _t->copyPtrColumnSlot(); break;
        case 13: _t->copyCommentsColumnSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TraceStack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceStack::displayReferencesWidget)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TraceStack::*)(duint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceStack::xrefSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceStack::staticMetaObject = { {
    &HexDump::staticMetaObject,
    qt_meta_stringdata_TraceStack.data,
    qt_meta_data_TraceStack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceStack.stringdata0))
        return static_cast<void*>(this);
    return HexDump::qt_metacast(_clname);
}

int TraceStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HexDump::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TraceStack::displayReferencesWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TraceStack::xrefSignal(duint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
