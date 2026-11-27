/****************************************************************************
** Meta object code from reading C++ file 'HexEditDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/HexEditDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HexEditDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HexEditDialog_t {
    QByteArrayData data[18];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HexEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HexEditDialog_t qt_meta_stringdata_HexEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "HexEditDialog"
QT_MOC_LITERAL(1, 14, 11), // "updateStyle"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 22), // "on_chkKeepSize_toggled"
QT_MOC_LITERAL(4, 50, 7), // "checked"
QT_MOC_LITERAL(5, 58, 27), // "on_chkFromSelection_toggled"
QT_MOC_LITERAL(6, 86, 15), // "dataChangedSlot"
QT_MOC_LITERAL(7, 102, 14), // "dataEditedSlot"
QT_MOC_LITERAL(8, 117, 27), // "on_lineEditAscii_dataEdited"
QT_MOC_LITERAL(9, 145, 29), // "on_lineEditUnicode_dataEdited"
QT_MOC_LITERAL(10, 175, 30), // "on_lineEditCodepage_dataEdited"
QT_MOC_LITERAL(11, 206, 22), // "on_btnCodepage_clicked"
QT_MOC_LITERAL(12, 229, 27), // "on_stringEditor_textChanged"
QT_MOC_LITERAL(13, 257, 29), // "on_listType_currentRowChanged"
QT_MOC_LITERAL(14, 287, 10), // "currentRow"
QT_MOC_LITERAL(15, 298, 21), // "on_buttonCopy_clicked"
QT_MOC_LITERAL(16, 320, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(17, 344, 4) // "arg1"

    },
    "HexEditDialog\0updateStyle\0\0"
    "on_chkKeepSize_toggled\0checked\0"
    "on_chkFromSelection_toggled\0dataChangedSlot\0"
    "dataEditedSlot\0on_lineEditAscii_dataEdited\0"
    "on_lineEditUnicode_dataEdited\0"
    "on_lineEditCodepage_dataEdited\0"
    "on_btnCodepage_clicked\0"
    "on_stringEditor_textChanged\0"
    "on_listType_currentRowChanged\0currentRow\0"
    "on_buttonCopy_clicked\0on_spinBox_valueChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HexEditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       6,    0,   86,    2, 0x08 /* Private */,
       7,    0,   87,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void HexEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HexEditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateStyle(); break;
        case 1: _t->on_chkKeepSize_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_chkFromSelection_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dataChangedSlot(); break;
        case 4: _t->dataEditedSlot(); break;
        case 5: _t->on_lineEditAscii_dataEdited(); break;
        case 6: _t->on_lineEditUnicode_dataEdited(); break;
        case 7: _t->on_lineEditCodepage_dataEdited(); break;
        case 8: _t->on_btnCodepage_clicked(); break;
        case 9: _t->on_stringEditor_textChanged(); break;
        case 10: _t->on_listType_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_buttonCopy_clicked(); break;
        case 12: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HexEditDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_HexEditDialog.data,
    qt_meta_data_HexEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HexEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HexEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HexEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
