/****************************************************************************
** Meta object code from reading C++ file 'SAQwtAxisSetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/figureSet/SAQwtAxisSetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAQwtAxisSetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAQwtAxisSetWidget_t {
    QByteArrayData data[22];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAQwtAxisSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAQwtAxisSetWidget_t qt_meta_stringdata_SAQwtAxisSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SAQwtAxisSetWidget"
QT_MOC_LITERAL(1, 19, 10), // "enableAxis"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "enable"
QT_MOC_LITERAL(4, 38, 4), // "axid"
QT_MOC_LITERAL(5, 43, 23), // "onEnableCheckBoxClicked"
QT_MOC_LITERAL(6, 67, 5), // "state"
QT_MOC_LITERAL(7, 73, 21), // "onLineEditTextChanged"
QT_MOC_LITERAL(8, 95, 4), // "text"
QT_MOC_LITERAL(9, 100, 17), // "onAxisFontChanged"
QT_MOC_LITERAL(10, 118, 4), // "font"
QT_MOC_LITERAL(11, 123, 26), // "onAxisLabelAligmentChanged"
QT_MOC_LITERAL(12, 150, 13), // "Qt::Alignment"
QT_MOC_LITERAL(13, 164, 2), // "al"
QT_MOC_LITERAL(14, 167, 26), // "onAxisLabelRotationChanged"
QT_MOC_LITERAL(15, 194, 1), // "v"
QT_MOC_LITERAL(16, 196, 24), // "onAxisMarginValueChanged"
QT_MOC_LITERAL(17, 221, 21), // "onAxisMaxScaleChanged"
QT_MOC_LITERAL(18, 243, 21), // "onAxisMinScaleChanged"
QT_MOC_LITERAL(19, 265, 17), // "onScaleDivChanged"
QT_MOC_LITERAL(20, 283, 19), // "onScaleStyleChanged"
QT_MOC_LITERAL(21, 303, 2) // "id"

    },
    "SAQwtAxisSetWidget\0enableAxis\0\0enable\0"
    "axid\0onEnableCheckBoxClicked\0state\0"
    "onLineEditTextChanged\0text\0onAxisFontChanged\0"
    "font\0onAxisLabelAligmentChanged\0"
    "Qt::Alignment\0al\0onAxisLabelRotationChanged\0"
    "v\0onAxisMarginValueChanged\0"
    "onAxisMaxScaleChanged\0onAxisMinScaleChanged\0"
    "onScaleDivChanged\0onScaleStyleChanged\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAQwtAxisSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   74,    2, 0x08 /* Private */,
       7,    1,   77,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      14,    1,   86,    2, 0x08 /* Private */,
      16,    1,   89,    2, 0x08 /* Private */,
      17,    1,   92,    2, 0x08 /* Private */,
      18,    1,   95,    2, 0x08 /* Private */,
      19,    0,   98,    2, 0x08 /* Private */,
      20,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QFont,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void SAQwtAxisSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAQwtAxisSetWidget *_t = static_cast<SAQwtAxisSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableAxis((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onEnableCheckBoxClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onLineEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onAxisFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 4: _t->onAxisLabelAligmentChanged((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 5: _t->onAxisLabelRotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->onAxisMarginValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onAxisMaxScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->onAxisMinScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->onScaleDivChanged(); break;
        case 10: _t->onScaleStyleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAQwtAxisSetWidget::*_t)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAQwtAxisSetWidget::enableAxis)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAQwtAxisSetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAQwtAxisSetWidget.data,
      qt_meta_data_SAQwtAxisSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAQwtAxisSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAQwtAxisSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAQwtAxisSetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAQwtAxisSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SAQwtAxisSetWidget::enableAxis(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
