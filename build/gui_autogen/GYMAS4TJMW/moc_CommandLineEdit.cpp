/****************************************************************************
** Meta object code from reading C++ file 'CommandLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CommandLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommandLineEdit_t {
    QByteArrayData data[17];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandLineEdit_t qt_meta_stringdata_CommandLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CommandLineEdit"
QT_MOC_LITERAL(1, 16, 18), // "autoCompleteUpdate"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "text"
QT_MOC_LITERAL(4, 41, 18), // "autoCompleteAddCmd"
QT_MOC_LITERAL(5, 60, 3), // "cmd"
QT_MOC_LITERAL(6, 64, 18), // "autoCompleteDelCmd"
QT_MOC_LITERAL(7, 83, 20), // "autoCompleteClearAll"
QT_MOC_LITERAL(8, 104, 18), // "registerScriptType"
QT_MOC_LITERAL(9, 123, 15), // "SCRIPTTYPEINFO*"
QT_MOC_LITERAL(10, 139, 4), // "info"
QT_MOC_LITERAL(11, 144, 20), // "unregisterScriptType"
QT_MOC_LITERAL(12, 165, 2), // "id"
QT_MOC_LITERAL(13, 168, 17), // "scriptTypeChanged"
QT_MOC_LITERAL(14, 186, 5), // "index"
QT_MOC_LITERAL(15, 192, 19), // "scriptTypeActivated"
QT_MOC_LITERAL(16, 212, 12) // "fontsUpdated"

    },
    "CommandLineEdit\0autoCompleteUpdate\0\0"
    "text\0autoCompleteAddCmd\0cmd\0"
    "autoCompleteDelCmd\0autoCompleteClearAll\0"
    "registerScriptType\0SCRIPTTYPEINFO*\0"
    "info\0unregisterScriptType\0id\0"
    "scriptTypeChanged\0index\0scriptTypeActivated\0"
    "fontsUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       7,    0,   68,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,
      15,    1,   78,    2, 0x0a /* Public */,
      16,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void CommandLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autoCompleteUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->autoCompleteAddCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->autoCompleteDelCmd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->autoCompleteClearAll(); break;
        case 4: _t->registerScriptType((*reinterpret_cast< SCRIPTTYPEINFO*(*)>(_a[1]))); break;
        case 5: _t->unregisterScriptType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->scriptTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->scriptTypeActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->fontsUpdated(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommandLineEdit::staticMetaObject = { {
    &HistoryLineEdit::staticMetaObject,
    qt_meta_stringdata_CommandLineEdit.data,
    qt_meta_data_CommandLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommandLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandLineEdit.stringdata0))
        return static_cast<void*>(this);
    return HistoryLineEdit::qt_metacast(_clname);
}

int CommandLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HistoryLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
