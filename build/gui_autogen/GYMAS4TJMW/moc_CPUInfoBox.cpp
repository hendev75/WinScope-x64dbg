/****************************************************************************
** Meta object code from reading C++ file 'CPUInfoBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CPUInfoBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPUInfoBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CPUInfoBox_t {
    QByteArrayData data[19];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPUInfoBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPUInfoBox_t qt_meta_stringdata_CPUInfoBox = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CPUInfoBox"
QT_MOC_LITERAL(1, 11, 22), // "disasmSelectionChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "duint"
QT_MOC_LITERAL(4, 41, 5), // "parVA"
QT_MOC_LITERAL(5, 47, 15), // "dbgStateChanged"
QT_MOC_LITERAL(6, 63, 8), // "DBGSTATE"
QT_MOC_LITERAL(7, 72, 5), // "state"
QT_MOC_LITERAL(8, 78, 15), // "contextMenuSlot"
QT_MOC_LITERAL(9, 94, 3), // "pos"
QT_MOC_LITERAL(10, 98, 16), // "followActionSlot"
QT_MOC_LITERAL(11, 115, 10), // "modifySlot"
QT_MOC_LITERAL(12, 126, 19), // "findXReferencesSlot"
QT_MOC_LITERAL(13, 146, 11), // "copyAddress"
QT_MOC_LITERAL(14, 158, 7), // "copyRva"
QT_MOC_LITERAL(15, 166, 10), // "copyOffset"
QT_MOC_LITERAL(16, 177, 17), // "doubleClickedSlot"
QT_MOC_LITERAL(17, 195, 11), // "addInfoLine"
QT_MOC_LITERAL(18, 207, 8) // "infoLine"

    },
    "CPUInfoBox\0disasmSelectionChanged\0\0"
    "duint\0parVA\0dbgStateChanged\0DBGSTATE\0"
    "state\0contextMenuSlot\0pos\0followActionSlot\0"
    "modifySlot\0findXReferencesSlot\0"
    "copyAddress\0copyRva\0copyOffset\0"
    "doubleClickedSlot\0addInfoLine\0infoLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPUInfoBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,
      14,    0,   82,    2, 0x0a /* Public */,
      15,    0,   83,    2, 0x0a /* Public */,
      16,    0,   84,    2, 0x0a /* Public */,
      17,    1,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void CPUInfoBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPUInfoBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disasmSelectionChanged((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 1: _t->dbgStateChanged((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 2: _t->contextMenuSlot((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->followActionSlot(); break;
        case 4: _t->modifySlot(); break;
        case 5: _t->findXReferencesSlot(); break;
        case 6: _t->copyAddress(); break;
        case 7: _t->copyRva(); break;
        case 8: _t->copyOffset(); break;
        case 9: _t->doubleClickedSlot(); break;
        case 10: _t->addInfoLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPUInfoBox::staticMetaObject = { {
    &StdTable::staticMetaObject,
    qt_meta_stringdata_CPUInfoBox.data,
    qt_meta_data_CPUInfoBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPUInfoBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPUInfoBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPUInfoBox.stringdata0))
        return static_cast<void*>(this);
    return StdTable::qt_metacast(_clname);
}

int CPUInfoBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StdTable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
