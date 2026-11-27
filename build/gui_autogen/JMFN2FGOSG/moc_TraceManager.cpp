/****************************************************************************
** Meta object code from reading C++ file 'TraceManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Tracer/TraceManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TraceManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraceManager_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceManager_t qt_meta_stringdata_TraceManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TraceManager"
QT_MOC_LITERAL(1, 13, 16), // "displayLogWidget"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "open"
QT_MOC_LITERAL(4, 36, 8), // "openSlot"
QT_MOC_LITERAL(5, 45, 9), // "DeleteTab"
QT_MOC_LITERAL(6, 55, 5), // "index"
QT_MOC_LITERAL(7, 61, 12), // "closeAllTabs"
QT_MOC_LITERAL(8, 74, 20) // "toggleTraceRecording"

    },
    "TraceManager\0displayLogWidget\0\0open\0"
    "openSlot\0DeleteTab\0index\0closeAllTabs\0"
    "toggleTraceRecording"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       5,    1,   49,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TraceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayLogWidget(); break;
        case 1: _t->open(); break;
        case 2: _t->openSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->DeleteTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->closeAllTabs(); break;
        case 5: _t->toggleTraceRecording(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TraceManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceManager::displayLogWidget)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceManager::staticMetaObject = { {
    &MHTabWidget::staticMetaObject,
    qt_meta_stringdata_TraceManager.data,
    qt_meta_data_TraceManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceManager.stringdata0))
        return static_cast<void*>(this);
    return MHTabWidget::qt_metacast(_clname);
}

int TraceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MHTabWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TraceManager::displayLogWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
