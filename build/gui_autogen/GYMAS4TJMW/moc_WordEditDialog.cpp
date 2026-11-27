/****************************************************************************
** Meta object code from reading C++ file 'WordEditDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/WordEditDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WordEditDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WordEditDialog_t {
    QByteArrayData data[11];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WordEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WordEditDialog_t qt_meta_stringdata_WordEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WordEditDialog"
QT_MOC_LITERAL(1, 15, 17), // "expressionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "validExpression"
QT_MOC_LITERAL(4, 50, 12), // "validPointer"
QT_MOC_LITERAL(5, 63, 5), // "dsint"
QT_MOC_LITERAL(6, 69, 5), // "value"
QT_MOC_LITERAL(7, 75, 28), // "on_signedLineEdit_textEdited"
QT_MOC_LITERAL(8, 104, 4), // "arg1"
QT_MOC_LITERAL(9, 109, 30), // "on_unsignedLineEdit_textEdited"
QT_MOC_LITERAL(10, 140, 25) // "on_hexLineEdit_textEdited"

    },
    "WordEditDialog\0expressionChanged\0\0"
    "validExpression\0validPointer\0dsint\0"
    "value\0on_signedLineEdit_textEdited\0"
    "arg1\0on_unsignedLineEdit_textEdited\0"
    "on_hexLineEdit_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WordEditDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,
       9,    1,   44,    2, 0x08 /* Private */,
      10,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void WordEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WordEditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< dsint(*)>(_a[3]))); break;
        case 1: _t->on_signedLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_unsignedLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_hexLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WordEditDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_WordEditDialog.data,
    qt_meta_data_WordEditDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WordEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WordEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WordEditDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WordEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
