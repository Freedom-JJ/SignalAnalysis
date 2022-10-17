/****************************************************************************
** Meta object code from reading C++ file 'SAChart2D.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/Chart2D/SAChart2D.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAChart2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAChart2D_t {
    QByteArrayData data[13];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAChart2D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAChart2D_t qt_meta_stringdata_SAChart2D = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SAChart2D"
QT_MOC_LITERAL(1, 10, 22), // "selectionRegionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "QPainterPath"
QT_MOC_LITERAL(4, 47, 5), // "shape"
QT_MOC_LITERAL(5, 53, 25), // "currentSelectItemsChanged"
QT_MOC_LITERAL(6, 79, 19), // "QList<QwtPlotItem*>"
QT_MOC_LITERAL(7, 99, 5), // "items"
QT_MOC_LITERAL(8, 105, 22), // "enableSelectionChanged"
QT_MOC_LITERAL(9, 128, 13), // "SelectionMode"
QT_MOC_LITERAL(10, 142, 4), // "mode"
QT_MOC_LITERAL(11, 147, 2), // "on"
QT_MOC_LITERAL(12, 150, 19) // "onSelectionFinished"

    },
    "SAChart2D\0selectionRegionChanged\0\0"
    "QPainterPath\0shape\0currentSelectItemsChanged\0"
    "QList<QwtPlotItem*>\0items\0"
    "enableSelectionChanged\0SelectionMode\0"
    "mode\0on\0onSelectionFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAChart2D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       8,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void SAChart2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAChart2D *_t = static_cast<SAChart2D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionRegionChanged((*reinterpret_cast< const QPainterPath(*)>(_a[1]))); break;
        case 1: _t->currentSelectItemsChanged((*reinterpret_cast< const QList<QwtPlotItem*>(*)>(_a[1]))); break;
        case 2: _t->enableSelectionChanged((*reinterpret_cast< SelectionMode(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->onSelectionFinished((*reinterpret_cast< const QPainterPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QwtPlotItem*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAChart2D::*_t)(const QPainterPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAChart2D::selectionRegionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SAChart2D::*_t)(const QList<QwtPlotItem*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAChart2D::currentSelectItemsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SAChart2D::*_t)(SelectionMode , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAChart2D::enableSelectionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SAChart2D::staticMetaObject = {
    { &SA2DGraph::staticMetaObject, qt_meta_stringdata_SAChart2D.data,
      qt_meta_data_SAChart2D,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAChart2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAChart2D::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAChart2D.stringdata0))
        return static_cast<void*>(this);
    return SA2DGraph::qt_metacast(_clname);
}

int SAChart2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SA2DGraph::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SAChart2D::selectionRegionChanged(const QPainterPath & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAChart2D::currentSelectItemsChanged(const QList<QwtPlotItem*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SAChart2D::enableSelectionChanged(SelectionMode _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
