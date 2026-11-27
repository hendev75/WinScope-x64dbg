/****************************************************************************
** Meta object code from reading C++ file 'TraceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Tracer/TraceWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TraceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraceWidget_t {
    QByteArrayData data[15];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceWidget_t qt_meta_stringdata_TraceWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TraceWidget"
QT_MOC_LITERAL(1, 12, 9), // "closeFile"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "displayLogWidget"
QT_MOC_LITERAL(4, 40, 8), // "loadDump"
QT_MOC_LITERAL(5, 49, 20), // "displayLogWidgetSlot"
QT_MOC_LITERAL(6, 70, 21), // "traceSelectionChanged"
QT_MOC_LITERAL(7, 92, 10), // "TRACEINDEX"
QT_MOC_LITERAL(8, 103, 9), // "selection"
QT_MOC_LITERAL(9, 113, 17), // "parseFinishedSlot"
QT_MOC_LITERAL(10, 131, 13), // "closeFileSlot"
QT_MOC_LITERAL(11, 145, 8), // "xrefSlot"
QT_MOC_LITERAL(12, 154, 5), // "duint"
QT_MOC_LITERAL(13, 160, 4), // "addr"
QT_MOC_LITERAL(14, 165, 16) // "followActionSlot"

    },
    "TraceWidget\0closeFile\0\0displayLogWidget\0"
    "loadDump\0displayLogWidgetSlot\0"
    "traceSelectionChanged\0TRACEINDEX\0"
    "selection\0parseFinishedSlot\0closeFileSlot\0"
    "xrefSlot\0duint\0addr\0followActionSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    1,   63,    2, 0x09 /* Protected */,
       9,    0,   66,    2, 0x09 /* Protected */,
      10,    0,   67,    2, 0x09 /* Protected */,
      11,    1,   68,    2, 0x09 /* Protected */,
      14,    0,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void TraceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeFile(); break;
        case 1: _t->displayLogWidget(); break;
        case 2: { bool _r = _t->loadDump();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->displayLogWidgetSlot(); break;
        case 4: _t->traceSelectionChanged((*reinterpret_cast< TRACEINDEX(*)>(_a[1]))); break;
        case 5: _t->parseFinishedSlot(); break;
        case 6: _t->closeFileSlot(); break;
        case 7: _t->xrefSlot((*reinterpret_cast< duint(*)>(_a[1]))); break;
        case 8: _t->followActionSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TraceWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::closeFile)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TraceWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWidget::displayLogWidget)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TraceWidget.data,
    qt_meta_data_TraceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TraceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TraceWidget::closeFile()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TraceWidget::displayLogWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
