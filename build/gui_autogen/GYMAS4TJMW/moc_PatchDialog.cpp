/****************************************************************************
** Meta object code from reading C++ file 'PatchDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/PatchDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PatchDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PatchDialog_t {
    QByteArrayData data[21];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PatchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PatchDialog_t qt_meta_stringdata_PatchDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PatchDialog"
QT_MOC_LITERAL(1, 12, 15), // "dbgStateChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "DBGSTATE"
QT_MOC_LITERAL(4, 38, 5), // "state"
QT_MOC_LITERAL(5, 44, 13), // "updatePatches"
QT_MOC_LITERAL(6, 58, 11), // "groupToggle"
QT_MOC_LITERAL(7, 70, 13), // "groupPrevious"
QT_MOC_LITERAL(8, 84, 9), // "groupNext"
QT_MOC_LITERAL(9, 94, 35), // "on_listModules_itemSelectionC..."
QT_MOC_LITERAL(10, 130, 26), // "on_listPatches_itemChanged"
QT_MOC_LITERAL(11, 157, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 174, 4), // "item"
QT_MOC_LITERAL(13, 179, 23), // "on_btnSelectAll_clicked"
QT_MOC_LITERAL(14, 203, 25), // "on_btnDeselectAll_clicked"
QT_MOC_LITERAL(15, 229, 29), // "on_btnRestoreSelected_clicked"
QT_MOC_LITERAL(16, 259, 35), // "on_listPatches_itemSelectionC..."
QT_MOC_LITERAL(17, 295, 24), // "on_btnPickGroups_clicked"
QT_MOC_LITERAL(18, 320, 23), // "on_btnPatchFile_clicked"
QT_MOC_LITERAL(19, 344, 20), // "on_btnImport_clicked"
QT_MOC_LITERAL(20, 365, 20) // "on_btnExport_clicked"

    },
    "PatchDialog\0dbgStateChanged\0\0DBGSTATE\0"
    "state\0updatePatches\0groupToggle\0"
    "groupPrevious\0groupNext\0"
    "on_listModules_itemSelectionChanged\0"
    "on_listPatches_itemChanged\0QListWidgetItem*\0"
    "item\0on_btnSelectAll_clicked\0"
    "on_btnDeselectAll_clicked\0"
    "on_btnRestoreSelected_clicked\0"
    "on_listPatches_itemSelectionChanged\0"
    "on_btnPickGroups_clicked\0"
    "on_btnPatchFile_clicked\0on_btnImport_clicked\0"
    "on_btnExport_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PatchDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    0,  106,    2, 0x08 /* Private */,
      20,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
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

void PatchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PatchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbgStateChanged((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 1: _t->updatePatches(); break;
        case 2: _t->groupToggle(); break;
        case 3: _t->groupPrevious(); break;
        case 4: _t->groupNext(); break;
        case 5: _t->on_listModules_itemSelectionChanged(); break;
        case 6: _t->on_listPatches_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_btnSelectAll_clicked(); break;
        case 8: _t->on_btnDeselectAll_clicked(); break;
        case 9: _t->on_btnRestoreSelected_clicked(); break;
        case 10: _t->on_listPatches_itemSelectionChanged(); break;
        case 11: _t->on_btnPickGroups_clicked(); break;
        case 12: _t->on_btnPatchFile_clicked(); break;
        case 13: _t->on_btnImport_clicked(); break;
        case 14: _t->on_btnExport_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PatchDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PatchDialog.data,
    qt_meta_data_PatchDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PatchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PatchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PatchDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PatchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
