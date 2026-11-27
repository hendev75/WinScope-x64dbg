/****************************************************************************
** Meta object code from reading C++ file 'CalculatorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CalculatorDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalculatorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalculatorDialog_t {
    QByteArrayData data[22];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculatorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculatorDialog_t qt_meta_stringdata_CalculatorDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CalculatorDialog"
QT_MOC_LITERAL(1, 17, 12), // "validAddress"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "valid"
QT_MOC_LITERAL(4, 37, 17), // "expressionChanged"
QT_MOC_LITERAL(5, 55, 15), // "validExpression"
QT_MOC_LITERAL(6, 71, 12), // "validPointer"
QT_MOC_LITERAL(7, 84, 5), // "dsint"
QT_MOC_LITERAL(8, 90, 5), // "value"
QT_MOC_LITERAL(9, 96, 28), // "on_txtExpression_textChanged"
QT_MOC_LITERAL(10, 125, 4), // "arg1"
QT_MOC_LITERAL(11, 130, 20), // "on_txtHex_textEdited"
QT_MOC_LITERAL(12, 151, 26), // "on_txtSignedDec_textEdited"
QT_MOC_LITERAL(13, 178, 28), // "on_txtUnsignedDec_textEdited"
QT_MOC_LITERAL(14, 207, 20), // "on_txtOct_textEdited"
QT_MOC_LITERAL(15, 228, 22), // "on_txtBytes_textEdited"
QT_MOC_LITERAL(16, 251, 20), // "on_txtBin_textEdited"
QT_MOC_LITERAL(17, 272, 22), // "on_txtAscii_textEdited"
QT_MOC_LITERAL(18, 295, 24), // "on_txtUnicode_textEdited"
QT_MOC_LITERAL(19, 320, 18), // "on_btnGoto_clicked"
QT_MOC_LITERAL(20, 339, 22), // "on_btnGotoDump_clicked"
QT_MOC_LITERAL(21, 362, 27) // "on_btnGotoMemoryMap_clicked"

    },
    "CalculatorDialog\0validAddress\0\0valid\0"
    "expressionChanged\0validExpression\0"
    "validPointer\0dsint\0value\0"
    "on_txtExpression_textChanged\0arg1\0"
    "on_txtHex_textEdited\0on_txtSignedDec_textEdited\0"
    "on_txtUnsignedDec_textEdited\0"
    "on_txtOct_textEdited\0on_txtBytes_textEdited\0"
    "on_txtBin_textEdited\0on_txtAscii_textEdited\0"
    "on_txtUnicode_textEdited\0on_btnGoto_clicked\0"
    "on_btnGotoDump_clicked\0"
    "on_btnGotoMemoryMap_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculatorDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   87,    2, 0x08 /* Private */,
       9,    1,   94,    2, 0x08 /* Private */,
      11,    1,   97,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      13,    1,  103,    2, 0x08 /* Private */,
      14,    1,  106,    2, 0x08 /* Private */,
      15,    1,  109,    2, 0x08 /* Private */,
      16,    1,  112,    2, 0x08 /* Private */,
      17,    1,  115,    2, 0x08 /* Private */,
      18,    1,  118,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,
      20,    0,  122,    2, 0x08 /* Private */,
      21,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Bool, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalculatorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalculatorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->validAddress((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->expressionChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< dsint(*)>(_a[3]))); break;
        case 2: _t->on_txtExpression_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_txtHex_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_txtSignedDec_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_txtUnsignedDec_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_txtOct_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_txtBytes_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_txtBin_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_txtAscii_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_txtUnicode_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_btnGoto_clicked(); break;
        case 12: _t->on_btnGotoDump_clicked(); break;
        case 13: _t->on_btnGotoMemoryMap_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (CalculatorDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalculatorDialog::validAddress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalculatorDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CalculatorDialog.data,
    qt_meta_data_CalculatorDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalculatorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculatorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalculatorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CalculatorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
bool CalculatorDialog::validAddress(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
