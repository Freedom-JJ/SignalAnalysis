/****************************************************************************
** Meta object code from reading C++ file 'SAFigureWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/Chart2D/SAFigureWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAFigureWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAFigureWindow_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAFigureWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAFigureWindow_t qt_meta_stringdata_SAFigureWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SAFigureWindow"
QT_MOC_LITERAL(1, 15, 10), // "chartAdded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "QwtPlot*"
QT_MOC_LITERAL(4, 36, 4), // "plot"
QT_MOC_LITERAL(5, 41, 15), // "chartWillRemove"
QT_MOC_LITERAL(6, 57, 20), // "currentWidgetChanged"
QT_MOC_LITERAL(7, 78, 8), // "QWidget*"
QT_MOC_LITERAL(8, 87, 1), // "w"
QT_MOC_LITERAL(9, 89, 4), // "redo"
QT_MOC_LITERAL(10, 94, 4), // "undo"
QT_MOC_LITERAL(11, 99, 18) // "clearRedoUndoStack"

    },
    "SAFigureWindow\0chartAdded\0\0QwtPlot*\0"
    "plot\0chartWillRemove\0currentWidgetChanged\0"
    "QWidget*\0w\0redo\0undo\0clearRedoUndoStack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAFigureWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   53,    2, 0x0a /* Public */,
      10,    0,   54,    2, 0x0a /* Public */,
      11,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SAFigureWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAFigureWindow *_t = static_cast<SAFigureWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chartAdded((*reinterpret_cast< QwtPlot*(*)>(_a[1]))); break;
        case 1: _t->chartWillRemove((*reinterpret_cast< QwtPlot*(*)>(_a[1]))); break;
        case 2: _t->currentWidgetChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->redo(); break;
        case 4: _t->undo(); break;
        case 5: _t->clearRedoUndoStack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (SAFigureWindow::*_t)(QwtPlot * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureWindow::chartAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SAFigureWindow::*_t)(QwtPlot * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureWindow::chartWillRemove)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SAFigureWindow::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureWindow::currentWidgetChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SAFigureWindow::staticMetaObject = {
    { &SAMainWindow::staticMetaObject, qt_meta_stringdata_SAFigureWindow.data,
      qt_meta_data_SAFigureWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAFigureWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAFigureWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAFigureWindow.stringdata0))
        return static_cast<void*>(this);
    return SAMainWindow::qt_metacast(_clname);
}

int SAFigureWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SAMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SAFigureWindow::chartAdded(QwtPlot * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAFigureWindow::chartWillRemove(QwtPlot * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SAFigureWindow::currentWidgetChanged(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
