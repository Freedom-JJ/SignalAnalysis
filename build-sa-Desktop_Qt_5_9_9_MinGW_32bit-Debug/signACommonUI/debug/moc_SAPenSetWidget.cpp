/****************************************************************************
** Meta object code from reading C++ file 'SAPenSetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/SAPenSetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAPenSetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAPenSetWidget_t {
    QByteArrayData data[12];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAPenSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAPenSetWidget_t qt_meta_stringdata_SAPenSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SAPenSetWidget"
QT_MOC_LITERAL(1, 15, 10), // "penChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "newPen"
QT_MOC_LITERAL(4, 34, 21), // "onCurrentColorChanged"
QT_MOC_LITERAL(5, 56, 3), // "clr"
QT_MOC_LITERAL(6, 60, 24), // "onCurrentPenWidthChanged"
QT_MOC_LITERAL(7, 85, 1), // "v"
QT_MOC_LITERAL(8, 87, 24), // "onCurrentPenStyleChanged"
QT_MOC_LITERAL(9, 112, 12), // "Qt::PenStyle"
QT_MOC_LITERAL(10, 125, 5), // "style"
QT_MOC_LITERAL(11, 131, 29) // "onCurrentPenColorAlphaChanged"

    },
    "SAPenSetWidget\0penChanged\0\0newPen\0"
    "onCurrentColorChanged\0clr\0"
    "onCurrentPenWidthChanged\0v\0"
    "onCurrentPenStyleChanged\0Qt::PenStyle\0"
    "style\0onCurrentPenColorAlphaChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAPenSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
      11,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPen,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void SAPenSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAPenSetWidget *_t = static_cast<SAPenSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->penChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 1: _t->onCurrentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->onCurrentPenWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onCurrentPenStyleChanged((*reinterpret_cast< Qt::PenStyle(*)>(_a[1]))); break;
        case 4: _t->onCurrentPenColorAlphaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAPenSetWidget::*_t)(const QPen & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAPenSetWidget::penChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAPenSetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAPenSetWidget.data,
      qt_meta_data_SAPenSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAPenSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAPenSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAPenSetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAPenSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SAPenSetWidget::penChanged(const QPen & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
