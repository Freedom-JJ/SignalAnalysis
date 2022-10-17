/****************************************************************************
** Meta object code from reading C++ file 'SAQwtPlotCurveItemSetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/figureSet/SAQwtPlotCurveItemSetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAQwtPlotCurveItemSetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAQwtPlotCurveItemSetWidget_t {
    QByteArrayData data[13];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAQwtPlotCurveItemSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAQwtPlotCurveItemSetWidget_t qt_meta_stringdata_SAQwtPlotCurveItemSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "SAQwtPlotCurveItemSetWidget"
QT_MOC_LITERAL(1, 28, 12), // "onPenChenged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "pen"
QT_MOC_LITERAL(4, 46, 28), // "onSPlineCheckBoxStateChanged"
QT_MOC_LITERAL(5, 75, 5), // "state"
QT_MOC_LITERAL(6, 81, 29), // "onBaseLineSpinBoxValueChanged"
QT_MOC_LITERAL(7, 111, 1), // "v"
QT_MOC_LITERAL(8, 113, 23), // "onSymbolComboBoxChanged"
QT_MOC_LITERAL(9, 137, 16), // "QwtSymbol::Style"
QT_MOC_LITERAL(10, 154, 5), // "style"
QT_MOC_LITERAL(11, 160, 24), // "onSymbolSetButtonClicked"
QT_MOC_LITERAL(12, 185, 19) // "onSymbolSetMenuHide"

    },
    "SAQwtPlotCurveItemSetWidget\0onPenChenged\0"
    "\0pen\0onSPlineCheckBoxStateChanged\0"
    "state\0onBaseLineSpinBoxValueChanged\0"
    "v\0onSymbolComboBoxChanged\0QwtSymbol::Style\0"
    "style\0onSymbolSetButtonClicked\0"
    "onSymbolSetMenuHide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAQwtPlotCurveItemSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
      11,    0,   56,    2, 0x08 /* Private */,
      12,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SAQwtPlotCurveItemSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAQwtPlotCurveItemSetWidget *_t = static_cast<SAQwtPlotCurveItemSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPenChenged((*reinterpret_cast< const QPen(*)>(_a[1]))); break;
        case 1: _t->onSPlineCheckBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onBaseLineSpinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onSymbolComboBoxChanged((*reinterpret_cast< QwtSymbol::Style(*)>(_a[1]))); break;
        case 4: _t->onSymbolSetButtonClicked(); break;
        case 5: _t->onSymbolSetMenuHide(); break;
        default: ;
        }
    }
}

const QMetaObject SAQwtPlotCurveItemSetWidget::staticMetaObject = {
    { &SAQwtPlotItemSetWidget::staticMetaObject, qt_meta_stringdata_SAQwtPlotCurveItemSetWidget.data,
      qt_meta_data_SAQwtPlotCurveItemSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAQwtPlotCurveItemSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAQwtPlotCurveItemSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAQwtPlotCurveItemSetWidget.stringdata0))
        return static_cast<void*>(this);
    return SAQwtPlotItemSetWidget::qt_metacast(_clname);
}

int SAQwtPlotCurveItemSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SAQwtPlotItemSetWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
