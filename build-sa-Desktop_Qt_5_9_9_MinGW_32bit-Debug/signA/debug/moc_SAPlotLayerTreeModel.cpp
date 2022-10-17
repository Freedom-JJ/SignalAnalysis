/****************************************************************************
** Meta object code from reading C++ file 'SAPlotLayerTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/model/SAPlotLayerTreeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAPlotLayerTreeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAPlotLayerTreeModel_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAPlotLayerTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAPlotLayerTreeModel_t qt_meta_stringdata_SAPlotLayerTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SAPlotLayerTreeModel"
QT_MOC_LITERAL(1, 21, 12), // "modelReseted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "onChartAdded"
QT_MOC_LITERAL(4, 48, 8), // "QwtPlot*"
QT_MOC_LITERAL(5, 57, 4), // "plot"
QT_MOC_LITERAL(6, 62, 17), // "onChartWillRemove"
QT_MOC_LITERAL(7, 80, 19), // "onChartItemAttached"
QT_MOC_LITERAL(8, 100, 12), // "QwtPlotItem*"
QT_MOC_LITERAL(9, 113, 8), // "plotItem"
QT_MOC_LITERAL(10, 122, 2) // "on"

    },
    "SAPlotLayerTreeModel\0modelReseted\0\0"
    "onChartAdded\0QwtPlot*\0plot\0onChartWillRemove\0"
    "onChartItemAttached\0QwtPlotItem*\0"
    "plotItem\0on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAPlotLayerTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       7,    2,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,

       0        // eod
};

void SAPlotLayerTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAPlotLayerTreeModel *_t = static_cast<SAPlotLayerTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelReseted(); break;
        case 1: _t->onChartAdded((*reinterpret_cast< QwtPlot*(*)>(_a[1]))); break;
        case 2: _t->onChartWillRemove((*reinterpret_cast< QwtPlot*(*)>(_a[1]))); break;
        case 3: _t->onChartItemAttached((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlot* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlot* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAPlotLayerTreeModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAPlotLayerTreeModel::modelReseted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAPlotLayerTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_SAPlotLayerTreeModel.data,
      qt_meta_data_SAPlotLayerTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAPlotLayerTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAPlotLayerTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAPlotLayerTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int SAPlotLayerTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
void SAPlotLayerTreeModel::modelReseted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
