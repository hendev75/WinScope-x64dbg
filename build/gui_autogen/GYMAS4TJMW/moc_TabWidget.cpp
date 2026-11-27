/****************************************************************************
** Meta object code from reading C++ file 'TabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/Src/Gui/TabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MHTabWidget_t {
    QByteArrayData data[20];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MHTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MHTabWidget_t qt_meta_stringdata_MHTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MHTabWidget"
QT_MOC_LITERAL(1, 12, 17), // "tabMovedTabWidget"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "from"
QT_MOC_LITERAL(4, 36, 2), // "to"
QT_MOC_LITERAL(5, 39, 9), // "AttachTab"
QT_MOC_LITERAL(6, 49, 8), // "QWidget*"
QT_MOC_LITERAL(7, 58, 6), // "parent"
QT_MOC_LITERAL(8, 65, 9), // "DetachTab"
QT_MOC_LITERAL(9, 75, 5), // "index"
QT_MOC_LITERAL(10, 81, 9), // "DeleteTab"
QT_MOC_LITERAL(11, 91, 8), // "tabMoved"
QT_MOC_LITERAL(12, 100, 15), // "OnDetachFocused"
QT_MOC_LITERAL(13, 116, 14), // "currentChanged"
QT_MOC_LITERAL(14, 131, 15), // "setCurrentIndex"
QT_MOC_LITERAL(15, 147, 15), // "showPreviousTab"
QT_MOC_LITERAL(16, 163, 11), // "showNextTab"
QT_MOC_LITERAL(17, 175, 16), // "showPreviousView"
QT_MOC_LITERAL(18, 192, 12), // "showNextView"
QT_MOC_LITERAL(19, 205, 16) // "deleteCurrentTab"

    },
    "MHTabWidget\0tabMovedTabWidget\0\0from\0"
    "to\0AttachTab\0QWidget*\0parent\0DetachTab\0"
    "index\0DeleteTab\0tabMoved\0OnDetachFocused\0"
    "currentChanged\0setCurrentIndex\0"
    "showPreviousTab\0showNextTab\0"
    "showPreviousView\0showNextView\0"
    "deleteCurrentTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MHTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   84,    2, 0x0a /* Public */,
       8,    2,   87,    2, 0x0a /* Public */,
      10,    1,   92,    2, 0x0a /* Public */,
      11,    2,   95,    2, 0x0a /* Public */,
      12,    1,  100,    2, 0x0a /* Public */,
      13,    1,  103,    2, 0x0a /* Public */,
      14,    1,  106,    2, 0x0a /* Public */,
      15,    0,  109,    2, 0x0a /* Public */,
      16,    0,  110,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x0a /* Public */,
      18,    0,  112,    2, 0x0a /* Public */,
      19,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QPoint,    9,    2,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MHTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MHTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabMovedTabWidget((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->AttachTab((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->DetachTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 3: _t->DeleteTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->tabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OnDetachFocused((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->showPreviousTab(); break;
        case 9: _t->showNextTab(); break;
        case 10: _t->showPreviousView(); break;
        case 11: _t->showNextView(); break;
        case 12: _t->deleteCurrentTab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MHTabWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MHTabWidget::tabMovedTabWidget)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MHTabWidget::staticMetaObject = { {
    &QTabWidget::staticMetaObject,
    qt_meta_stringdata_MHTabWidget.data,
    qt_meta_data_MHTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MHTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MHTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MHTabWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MultiItemsDataProvider"))
        return static_cast< MultiItemsDataProvider*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int MHTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MHTabWidget::tabMovedTabWidget(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MHDetachedWindow_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MHDetachedWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MHDetachedWindow_t qt_meta_stringdata_MHDetachedWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MHDetachedWindow"
QT_MOC_LITERAL(1, 17, 7), // "OnClose"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "QWidget*"
QT_MOC_LITERAL(4, 35, 6), // "widget"
QT_MOC_LITERAL(5, 42, 9) // "OnFocused"

    },
    "MHDetachedWindow\0OnClose\0\0QWidget*\0"
    "widget\0OnFocused"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MHDetachedWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MHDetachedWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MHDetachedWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnClose((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->OnFocused((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MHDetachedWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MHDetachedWindow::OnClose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MHDetachedWindow::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MHDetachedWindow::OnFocused)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MHDetachedWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MHDetachedWindow.data,
    qt_meta_data_MHDetachedWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MHDetachedWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MHDetachedWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MHDetachedWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MHDetachedWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MHDetachedWindow::OnClose(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MHDetachedWindow::OnFocused(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
