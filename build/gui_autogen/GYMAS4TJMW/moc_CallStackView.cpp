/****************************************************************************
** Meta object code from reading C++ file 'CallStackView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CallStackView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallStackView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallStackView_t {
    QByteArrayData data[15];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallStackView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallStackView_t qt_meta_stringdata_CallStackView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CallStackView"
QT_MOC_LITERAL(1, 14, 19), // "updateCallStackSlot"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "contextMenuSlot"
QT_MOC_LITERAL(4, 51, 3), // "pos"
QT_MOC_LITERAL(5, 55, 17), // "followAddressSlot"
QT_MOC_LITERAL(6, 73, 12), // "followToSlot"
QT_MOC_LITERAL(7, 86, 14), // "followFromSlot"
QT_MOC_LITERAL(8, 101, 26), // "showSuspectedCallStackSlot"
QT_MOC_LITERAL(9, 128, 19), // "followInThreadsSlot"
QT_MOC_LITERAL(10, 148, 16), // "renameThreadSlot"
QT_MOC_LITERAL(11, 165, 24), // "loadSymbolsForThreadSlot"
QT_MOC_LITERAL(12, 190, 21), // "highlightByModuleSlot"
QT_MOC_LITERAL(13, 212, 21), // "highlightBySymbolSlot"
QT_MOC_LITERAL(14, 234, 18) // "clearHighlightSlot"

    },
    "CallStackView\0updateCallStackSlot\0\0"
    "contextMenuSlot\0pos\0followAddressSlot\0"
    "followToSlot\0followFromSlot\0"
    "showSuspectedCallStackSlot\0"
    "followInThreadsSlot\0renameThreadSlot\0"
    "loadSymbolsForThreadSlot\0highlightByModuleSlot\0"
    "highlightBySymbolSlot\0clearHighlightSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallStackView[] = {

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
       1,    0,   74,    2, 0x09 /* Protected */,
       3,    1,   75,    2, 0x09 /* Protected */,
       5,    0,   78,    2, 0x09 /* Protected */,
       6,    0,   79,    2, 0x09 /* Protected */,
       7,    0,   80,    2, 0x09 /* Protected */,
       8,    0,   81,    2, 0x09 /* Protected */,
       9,    0,   82,    2, 0x09 /* Protected */,
      10,    0,   83,    2, 0x09 /* Protected */,
      11,    0,   84,    2, 0x09 /* Protected */,
      12,    0,   85,    2, 0x09 /* Protected */,
      13,    0,   86,    2, 0x09 /* Protected */,
      14,    0,   87,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
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

void CallStackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallStackView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCallStackSlot(); break;
        case 1: _t->contextMenuSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->followAddressSlot(); break;
        case 3: _t->followToSlot(); break;
        case 4: _t->followFromSlot(); break;
        case 5: _t->showSuspectedCallStackSlot(); break;
        case 6: _t->followInThreadsSlot(); break;
        case 7: _t->renameThreadSlot(); break;
        case 8: _t->loadSymbolsForThreadSlot(); break;
        case 9: _t->highlightByModuleSlot(); break;
        case 10: _t->highlightBySymbolSlot(); break;
        case 11: _t->clearHighlightSlot(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CallStackView::staticMetaObject = { {
    &StdIconTable::staticMetaObject,
    qt_meta_stringdata_CallStackView.data,
    qt_meta_data_CallStackView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CallStackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallStackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallStackView.stringdata0))
        return static_cast<void*>(this);
    return StdIconTable::qt_metacast(_clname);
}

int CallStackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdIconTable::qt_metacall(_c, _id, _a);
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
