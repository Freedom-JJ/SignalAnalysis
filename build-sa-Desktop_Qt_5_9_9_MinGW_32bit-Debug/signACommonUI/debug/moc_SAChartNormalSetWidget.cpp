/****************************************************************************
** Meta object code from reading C++ file 'SAChartNormalSetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/figureSet/SAChartNormalSetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAChartNormalSetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAChartNormalSetWidget_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAChartNormalSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAChartNormalSetWidget_t qt_meta_stringdata_SAChartNormalSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SAChartNormalSetWidget"
QT_MOC_LITERAL(1, 23, 17), // "chartTitleChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "SAChart2D*"
QT_MOC_LITERAL(4, 53, 5), // "chart"
QT_MOC_LITERAL(5, 59, 4), // "text"
QT_MOC_LITERAL(6, 64, 18), // "onTitleTextChanged"
QT_MOC_LITERAL(7, 83, 19), // "onFooterTextChanged"
QT_MOC_LITERAL(8, 103, 30), // "onCanvasBackgroundColorChanged"
QT_MOC_LITERAL(9, 134, 3), // "clr"
QT_MOC_LITERAL(10, 138, 26), // "onCanvasBorderColorChanged"
QT_MOC_LITERAL(11, 165, 20), // "onBorderWidthChanged"
QT_MOC_LITERAL(12, 186, 1) // "v"

    },
    "SAChartNormalSetWidget\0chartTitleChanged\0"
    "\0SAChart2D*\0chart\0text\0onTitleTextChanged\0"
    "onFooterTextChanged\0onCanvasBackgroundColorChanged\0"
    "clr\0onCanvasBorderColorChanged\0"
    "onBorderWidthChanged\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAChartNormalSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   49,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void SAChartNormalSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAChartNormalSetWidget *_t = static_cast<SAChartNormalSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chartTitleChanged((*reinterpret_cast< SAChart2D*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onTitleTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onFooterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onCanvasBackgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->onCanvasBorderColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->onBorderWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAChartNormalSetWidget::*_t)(SAChart2D * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAChartNormalSetWidget::chartTitleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAChartNormalSetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAChartNormalSetWidget.data,
      qt_meta_data_SAChartNormalSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAChartNormalSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAChartNormalSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAChartNormalSetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAChartNormalSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SAChartNormalSetWidget::chartTitleChanged(SAChart2D * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
