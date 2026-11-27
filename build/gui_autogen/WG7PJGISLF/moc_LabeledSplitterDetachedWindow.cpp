/****************************************************************************
** Meta object code from reading C++ file 'LabeledSplitterDetachedWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/BasicView/LabeledSplitterDetachedWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LabeledSplitterDetachedWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LabeledSplitterHandle_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabeledSplitterHandle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabeledSplitterHandle_t qt_meta_stringdata_LabeledSplitterHandle = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LabeledSplitterHandle"
QT_MOC_LITERAL(1, 22, 8), // "sizeHint"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "minimumSizeHint"
QT_MOC_LITERAL(4, 48, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(5, 63, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 76, 5), // "event"
QT_MOC_LITERAL(7, 82, 15), // "mousePressEvent"
QT_MOC_LITERAL(8, 98, 10), // "paintEvent"
QT_MOC_LITERAL(9, 109, 12), // "QPaintEvent*"
QT_MOC_LITERAL(10, 122, 16), // "contextMenuEvent"
QT_MOC_LITERAL(11, 139, 18) // "QContextMenuEvent*"

    },
    "LabeledSplitterHandle\0sizeHint\0\0"
    "minimumSizeHint\0mouseMoveEvent\0"
    "QMouseEvent*\0event\0mousePressEvent\0"
    "paintEvent\0QPaintEvent*\0contextMenuEvent\0"
    "QContextMenuEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabeledSplitterHandle[] = {

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
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    1,   46,    2, 0x09 /* Protected */,
       7,    1,   49,    2, 0x09 /* Protected */,
       8,    1,   52,    2, 0x09 /* Protected */,
      10,    1,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9,    6,
    QMetaType::Void, 0x80000000 | 11,    6,

       0        // eod
};

void LabeledSplitterHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LabeledSplitterHandle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 1: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 5: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LabeledSplitterHandle::staticMetaObject = { {
    &QSplitterHandle::staticMetaObject,
    qt_meta_stringdata_LabeledSplitterHandle.data,
    qt_meta_data_LabeledSplitterHandle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LabeledSplitterHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabeledSplitterHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LabeledSplitterHandle.stringdata0))
        return static_cast<void*>(this);
    return QSplitterHandle::qt_metacast(_clname);
}

int LabeledSplitterHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitterHandle::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LabeledSplitterDetachedWindow_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabeledSplitterDetachedWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabeledSplitterDetachedWindow_t qt_meta_stringdata_LabeledSplitterDetachedWindow = {
    {
QT_MOC_LITERAL(0, 0, 29), // "LabeledSplitterDetachedWindow"
QT_MOC_LITERAL(1, 30, 7), // "OnClose"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 30), // "LabeledSplitterDetachedWindow*"
QT_MOC_LITERAL(4, 70, 6) // "widget"

    },
    "LabeledSplitterDetachedWindow\0OnClose\0"
    "\0LabeledSplitterDetachedWindow*\0widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabeledSplitterDetachedWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void LabeledSplitterDetachedWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LabeledSplitterDetachedWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnClose((*reinterpret_cast< LabeledSplitterDetachedWindow*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LabeledSplitterDetachedWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LabeledSplitterDetachedWindow::*)(LabeledSplitterDetachedWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LabeledSplitterDetachedWindow::OnClose)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LabeledSplitterDetachedWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_LabeledSplitterDetachedWindow.data,
    qt_meta_data_LabeledSplitterDetachedWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LabeledSplitterDetachedWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabeledSplitterDetachedWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LabeledSplitterDetachedWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LabeledSplitterDetachedWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void LabeledSplitterDetachedWindow::OnClose(LabeledSplitterDetachedWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
