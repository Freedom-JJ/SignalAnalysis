/****************************************************************************
** Meta object code from reading C++ file 'SAChartSetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/SAChartSetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAChartSetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAChartSetWidget_t {
    QByteArrayData data[12];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAChartSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAChartSetWidget_t qt_meta_stringdata_SAChartSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SAChartSetWidget"
QT_MOC_LITERAL(1, 17, 17), // "chartTitleChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "SAChart2D*"
QT_MOC_LITERAL(4, 47, 5), // "chart"
QT_MOC_LITERAL(5, 53, 4), // "text"
QT_MOC_LITERAL(6, 58, 13), // "onChartDelete"
QT_MOC_LITERAL(7, 72, 3), // "obj"
QT_MOC_LITERAL(8, 76, 18), // "onPlotItemAttached"
QT_MOC_LITERAL(9, 95, 12), // "QwtPlotItem*"
QT_MOC_LITERAL(10, 108, 4), // "item"
QT_MOC_LITERAL(11, 113, 2) // "on"

    },
    "SAChartSetWidget\0chartTitleChanged\0\0"
    "SAChart2D*\0chart\0text\0onChartDelete\0"
    "obj\0onPlotItemAttached\0QwtPlotItem*\0"
    "item\0on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAChartSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   34,    2, 0x08 /* Private */,
       8,    2,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   11,

       0        // eod
};

void SAChartSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAChartSetWidget *_t = static_cast<SAChartSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chartTitleChanged((*reinterpret_cast< SAChart2D*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onChartDelete((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->onPlotItemAttached((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (SAChartSetWidget::*_t)(SAChart2D * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAChartSetWidget::chartTitleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAChartSetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAChartSetWidget.data,
      qt_meta_data_SAChartSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAChartSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAChartSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAChartSetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAChartSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SAChartSetWidget::chartTitleChanged(SAChart2D * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
