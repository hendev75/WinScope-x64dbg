/****************************************************************************
** Meta object code from reading C++ file 'GotoDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/GotoDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GotoDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GotoDialog_t {
    QByteArrayData data[15];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GotoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GotoDialog_t qt_meta_stringdata_GotoDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GotoDialog"
QT_MOC_LITERAL(1, 11, 17), // "expressionChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "validExpression"
QT_MOC_LITERAL(4, 46, 12), // "validPointer"
QT_MOC_LITERAL(5, 59, 5), // "dsint"
QT_MOC_LITERAL(6, 65, 5), // "value"
QT_MOC_LITERAL(7, 71, 26), // "disableAutoCompleteUpdated"
QT_MOC_LITERAL(8, 98, 19), // "on_buttonOk_clicked"
QT_MOC_LITERAL(9, 118, 12), // "finishedSlot"
QT_MOC_LITERAL(10, 131, 6), // "result"
QT_MOC_LITERAL(11, 138, 14), // "textEditedSlot"
QT_MOC_LITERAL(12, 153, 4), // "text"
QT_MOC_LITERAL(13, 158, 13), // "linkActivated"
QT_MOC_LITERAL(14, 172, 4) // "link"

    },
    "GotoDialog\0expressionChanged\0\0"
    "validExpression\0validPointer\0dsint\0"
    "value\0disableAutoCompleteUpdated\0"
    "on_buttonOk_clicked\0finishedSlot\0"
    "result\0textEditedSlot\0text\0linkActivated\0"
    "link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GotoDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,
      11,    1,   56,    2, 0x08 /* Private */,
      13,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void GotoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GotoDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< dsint(*)>(_a[3]))); break;
        case 1: _t->disableAutoCompleteUpdated(); break;
        case 2: _t->on_buttonOk_clicked(); break;
        case 3: _t->finishedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->textEditedSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GotoDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_GotoDialog.data,
    qt_meta_data_GotoDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GotoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GotoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GotoDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GotoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
