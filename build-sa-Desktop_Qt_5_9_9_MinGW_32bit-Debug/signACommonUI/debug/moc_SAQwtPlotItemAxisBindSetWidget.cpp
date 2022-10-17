/****************************************************************************
** Meta object code from reading C++ file 'SAQwtPlotItemAxisBindSetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/figureSet/SAQwtPlotItemAxisBindSetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAQwtPlotItemAxisBindSetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAQwtPlotItemAxisBindSetWidget_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAQwtPlotItemAxisBindSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAQwtPlotItemAxisBindSetWidget_t qt_meta_stringdata_SAQwtPlotItemAxisBindSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "SAQwtPlotItemAxisBindSetWidget"
QT_MOC_LITERAL(1, 31, 15), // "axisBindChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "xaxis"
QT_MOC_LITERAL(4, 54, 5), // "yaxis"
QT_MOC_LITERAL(5, 60, 12), // "onBtnChanged"
QT_MOC_LITERAL(6, 73, 2) // "id"

    },
    "SAQwtPlotItemAxisBindSetWidget\0"
    "axisBindChanged\0\0xaxis\0yaxis\0onBtnChanged\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAQwtPlotItemAxisBindSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void SAQwtPlotItemAxisBindSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAQwtPlotItemAxisBindSetWidget *_t = static_cast<SAQwtPlotItemAxisBindSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisBindChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onBtnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAQwtPlotItemAxisBindSetWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAQwtPlotItemAxisBindSetWidget::axisBindChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAQwtPlotItemAxisBindSetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAQwtPlotItemAxisBindSetWidget.data,
      qt_meta_data_SAQwtPlotItemAxisBindSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAQwtPlotItemAxisBindSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAQwtPlotItemAxisBindSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAQwtPlotItemAxisBindSetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAQwtPlotItemAxisBindSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SAQwtPlotItemAxisBindSetWidget::axisBindChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
