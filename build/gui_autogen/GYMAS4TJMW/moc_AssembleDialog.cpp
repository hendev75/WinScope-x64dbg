/****************************************************************************
** Meta object code from reading C++ file 'AssembleDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/AssembleDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssembleDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssembleDialog_t {
    QByteArrayData data[15];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssembleDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssembleDialog_t qt_meta_stringdata_AssembleDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AssembleDialog"
QT_MOC_LITERAL(1, 15, 15), // "textChangedSlot"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "text"
QT_MOC_LITERAL(4, 37, 22), // "instructionChangedSlot"
QT_MOC_LITERAL(5, 60, 5), // "dsint"
QT_MOC_LITERAL(6, 66, 14), // "sizeDifference"
QT_MOC_LITERAL(7, 81, 4), // "data"
QT_MOC_LITERAL(8, 86, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(9, 110, 4), // "arg1"
QT_MOC_LITERAL(10, 115, 27), // "on_checkBoxKeepSize_clicked"
QT_MOC_LITERAL(11, 143, 7), // "checked"
QT_MOC_LITERAL(12, 151, 31), // "on_checkBoxFillWithNops_clicked"
QT_MOC_LITERAL(13, 183, 24), // "on_radioXEDParse_clicked"
QT_MOC_LITERAL(14, 208, 22) // "on_radioAsmjit_clicked"

    },
    "AssembleDialog\0textChangedSlot\0\0text\0"
    "instructionChangedSlot\0dsint\0"
    "sizeDifference\0data\0on_lineEdit_textChanged\0"
    "arg1\0on_checkBoxKeepSize_clicked\0"
    "checked\0on_checkBoxFillWithNops_clicked\0"
    "on_radioXEDParse_clicked\0"
    "on_radioAsmjit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssembleDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    2,   52,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      12,    1,   63,    2, 0x08 /* Private */,
      13,    0,   66,    2, 0x08 /* Private */,
      14,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssembleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssembleDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChangedSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->instructionChangedSlot((*reinterpret_cast< dsint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_checkBoxKeepSize_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_checkBoxFillWithNops_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioXEDParse_clicked(); break;
        case 6: _t->on_radioAsmjit_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssembleDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AssembleDialog.data,
    qt_meta_data_AssembleDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssembleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssembleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssembleDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AssembleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
