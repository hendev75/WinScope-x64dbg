/****************************************************************************
** Meta object code from reading C++ file 'CPUSideBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/CPUSideBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPUSideBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CPUSideBar_t {
    QByteArrayData data[20];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPUSideBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPUSideBar_t qt_meta_stringdata_CPUSideBar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CPUSideBar"
QT_MOC_LITERAL(1, 11, 6), // "folded"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "updateSlots"
QT_MOC_LITERAL(4, 31, 12), // "updateColors"
QT_MOC_LITERAL(5, 44, 11), // "updateFonts"
QT_MOC_LITERAL(6, 56, 21), // "debugStateChangedSlot"
QT_MOC_LITERAL(7, 78, 8), // "DBGSTATE"
QT_MOC_LITERAL(8, 87, 5), // "state"
QT_MOC_LITERAL(9, 93, 6), // "reload"
QT_MOC_LITERAL(10, 100, 20), // "changeTopmostAddress"
QT_MOC_LITERAL(11, 121, 5), // "duint"
QT_MOC_LITERAL(12, 127, 1), // "i"
QT_MOC_LITERAL(13, 129, 15), // "setViewableRows"
QT_MOC_LITERAL(14, 145, 4), // "rows"
QT_MOC_LITERAL(15, 150, 12), // "setSelection"
QT_MOC_LITERAL(16, 163, 5), // "selVA"
QT_MOC_LITERAL(17, 169, 15), // "foldDisassembly"
QT_MOC_LITERAL(18, 185, 12), // "startAddress"
QT_MOC_LITERAL(19, 198, 6) // "length"

    },
    "CPUSideBar\0folded\0\0updateSlots\0"
    "updateColors\0updateFonts\0debugStateChangedSlot\0"
    "DBGSTATE\0state\0reload\0changeTopmostAddress\0"
    "duint\0i\0setViewableRows\0rows\0setSelection\0"
    "selVA\0foldDisassembly\0startAddress\0"
    "length"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPUSideBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,
      15,    1,   78,    2, 0x0a /* Public */,
      17,    2,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   14,
    QMetaType::Void, 0x80000000 | 11,   16,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   18,   19,

       0        // eod
};

void CPUSideBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CPUSideBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->folded(); break;
        case 1: _t->updateSlots(); break;
        case 2: _t->updateColors(); break;
        case 3: _t->updateFonts(); break;
        case 4: _t->debugStateChangedSlot((*reinterpret_cast< DBGSTATE(*)>(_a[1]))); break;
        case 5: _t->reload(); break;
        case 6: _t->changeTopmostAddress((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 7: _t->setViewableRows((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 8: _t->setSelection((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 9: _t->foldDisassembly((*reinterpret_cast< duint(*)>(_a[1])),(*reinterpret_cast< duint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CPUSideBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CPUSideBar::folded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CPUSideBar::staticMetaObject = { {
    &QAbstractScrollArea::staticMetaObject,
    qt_meta_stringdata_CPUSideBar.data,
    qt_meta_data_CPUSideBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CPUSideBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPUSideBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CPUSideBar.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int CPUSideBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CPUSideBar::folded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
