/****************************************************************************
** Meta object code from reading C++ file 'SAQwtSymbolSetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/figureSet/SAQwtSymbolSetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAQwtSymbolSetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAQwtSymbolSetWidget_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAQwtSymbolSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAQwtSymbolSetWidget_t qt_meta_stringdata_SAQwtSymbolSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SAQwtSymbolSetWidget"
QT_MOC_LITERAL(1, 21, 16), // "symbolSetChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "QwtSymbol"
QT_MOC_LITERAL(4, 49, 6), // "symbol"
QT_MOC_LITERAL(5, 56, 21), // "onSymbolSelectChanged"
QT_MOC_LITERAL(6, 78, 16), // "QwtSymbol::Style"
QT_MOC_LITERAL(7, 95, 5), // "style"
QT_MOC_LITERAL(8, 101, 26), // "onSpinBoxSizeXValueChanged"
QT_MOC_LITERAL(9, 128, 1), // "v"
QT_MOC_LITERAL(10, 130, 26), // "onSpinBoxSizeYValueChanged"
QT_MOC_LITERAL(11, 157, 16), // "onEdgePenChanged"
QT_MOC_LITERAL(12, 174, 3), // "pen"
QT_MOC_LITERAL(13, 178, 19), // "onBrushColorChanged"
QT_MOC_LITERAL(14, 198, 3), // "clr"
QT_MOC_LITERAL(15, 202, 30) // "onBrushAlphaSliderValueChanged"

    },
    "SAQwtSymbolSetWidget\0symbolSetChanged\0"
    "\0QwtSymbol\0symbol\0onSymbolSelectChanged\0"
    "QwtSymbol::Style\0style\0"
    "onSpinBoxSizeXValueChanged\0v\0"
    "onSpinBoxSizeYValueChanged\0onEdgePenChanged\0"
    "pen\0onBrushColorChanged\0clr\0"
    "onBrushAlphaSliderValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAQwtSymbolSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
      10,    1,   58,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,
      13,    1,   64,    2, 0x08 /* Private */,
      15,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QPen,   12,
    QMetaType::Void, QMetaType::QColor,   14,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void SAQwtSymbolSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAQwtSymbolSetWidget *_t = static_cast<SAQwtSymbolSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->symbolSetChanged((*reinterpret_cast< const QwtSymbol(*)>(_a[1]))); break;
        case 1: _t->onSymbolSelectChanged((*reinterpret_cast< QwtSymbol::Style(*)>(_a[1]))); break;
        case 2: _t->onSpinBoxSizeXValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onSpinBoxSizeYValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onEdgePenChanged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 5: _t->onBrushColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->onBrushAlphaSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAQwtSymbolSetWidget::*_t)(const QwtSymbol & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAQwtSymbolSetWidget::symbolSetChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAQwtSymbolSetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAQwtSymbolSetWidget.data,
      qt_meta_data_SAQwtSymbolSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAQwtSymbolSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAQwtSymbolSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAQwtSymbolSetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAQwtSymbolSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SAQwtSymbolSetWidget::symbolSetChanged(const QwtSymbol & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
