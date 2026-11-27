/****************************************************************************
** Meta object code from reading C++ file 'CPUArgumentWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CPUArgumentWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPUArgumentWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CPUArgumentWidget_t {
    QByteArrayData data[18];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPUArgumentWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPUArgumentWidget_t qt_meta_stringdata_CPUArgumentWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CPUArgumentWidget"
QT_MOC_LITERAL(1, 18, 17), // "disassembleAtSlot"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "duint"
QT_MOC_LITERAL(4, 43, 4), // "addr"
QT_MOC_LITERAL(5, 48, 3), // "cip"
QT_MOC_LITERAL(6, 52, 11), // "refreshData"
QT_MOC_LITERAL(7, 64, 15), // "contextMenuSlot"
QT_MOC_LITERAL(8, 80, 3), // "pos"
QT_MOC_LITERAL(9, 84, 16), // "followDisasmSlot"
QT_MOC_LITERAL(10, 101, 14), // "followDumpSlot"
QT_MOC_LITERAL(11, 116, 15), // "followStackSlot"
QT_MOC_LITERAL(12, 132, 23), // "onCopyToClipboardAction"
QT_MOC_LITERAL(13, 156, 45), // "on_comboCallingConvention_cur..."
QT_MOC_LITERAL(14, 202, 5), // "index"
QT_MOC_LITERAL(15, 208, 28), // "on_spinArgCount_valueChanged"
QT_MOC_LITERAL(16, 237, 4), // "arg1"
QT_MOC_LITERAL(17, 242, 28) // "on_checkBoxLock_stateChanged"

    },
    "CPUArgumentWidget\0disassembleAtSlot\0"
    "\0duint\0addr\0cip\0refreshData\0contextMenuSlot\0"
    "pos\0followDisasmSlot\0followDumpSlot\0"
    "followStackSlot\0onCopyToClipboardAction\0"
    "on_comboCallingConvention_currentIndexChanged\0"
    "index\0on_spinArgCount_valueChanged\0"
    "arg1\0on_checkBoxLock_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPUArgumentWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,
      15,    1,   80,    2, 0x08 /* Private */,
      17,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void CPUArgumentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPUArgumentWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disassembleAtSlot((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        case 1: _t->refreshData(); break;
        case 2: _t->contextMenuSlot((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->followDisasmSlot(); break;
        case 4: _t->followDumpSlot(); break;
        case 5: _t->followStackSlot(); break;
        case 6: _t->onCopyToClipboardAction(); break;
        case 7: _t->on_comboCallingConvention_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinArgCount_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxLock_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPUArgumentWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CPUArgumentWidget.data,
    qt_meta_data_CPUArgumentWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPUArgumentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPUArgumentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPUArgumentWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CPUArgumentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
