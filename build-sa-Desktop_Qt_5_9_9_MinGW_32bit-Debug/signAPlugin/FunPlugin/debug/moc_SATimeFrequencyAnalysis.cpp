/****************************************************************************
** Meta object code from reading C++ file 'SATimeFrequencyAnalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/signAPlugin/FunPlugin/SATimeFrequencyAnalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SATimeFrequencyAnalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SATimeFrequencyAnalysis_t {
    QByteArrayData data[20];
    char stringdata0[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SATimeFrequencyAnalysis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SATimeFrequencyAnalysis_t qt_meta_stringdata_SATimeFrequencyAnalysis = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SATimeFrequencyAnalysis"
QT_MOC_LITERAL(1, 24, 13), // "onSliderMoved"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "value"
QT_MOC_LITERAL(4, 45, 18), // "onPushButtonImport"
QT_MOC_LITERAL(5, 64, 26), // "onLineEditIntervalFinished"
QT_MOC_LITERAL(6, 91, 22), // "onPushbuttonExportdata"
QT_MOC_LITERAL(7, 114, 20), // "onPushButtonLeftMove"
QT_MOC_LITERAL(8, 135, 21), // "onPushButtonRightMove"
QT_MOC_LITERAL(9, 157, 18), // "onPushButtonLocate"
QT_MOC_LITERAL(10, 176, 26), // "onButtonGroupMagSetToggled"
QT_MOC_LITERAL(11, 203, 2), // "id"
QT_MOC_LITERAL(12, 206, 7), // "checked"
QT_MOC_LITERAL(13, 214, 26), // "onButtonGroupPSDSetToggled"
QT_MOC_LITERAL(14, 241, 24), // "onRadioButtonFFT_Toggled"
QT_MOC_LITERAL(15, 266, 7), // "toggled"
QT_MOC_LITERAL(16, 274, 24), // "onRadioButtonPSD_Toggled"
QT_MOC_LITERAL(17, 299, 38), // "onSpinBoxIntervalLengthEditin..."
QT_MOC_LITERAL(18, 338, 34), // "onSpinBoxStartIndexEditingFin..."
QT_MOC_LITERAL(19, 373, 32) // "onSpinBoxEndIndexEditingFinished"

    },
    "SATimeFrequencyAnalysis\0onSliderMoved\0"
    "\0value\0onPushButtonImport\0"
    "onLineEditIntervalFinished\0"
    "onPushbuttonExportdata\0onPushButtonLeftMove\0"
    "onPushButtonRightMove\0onPushButtonLocate\0"
    "onButtonGroupMagSetToggled\0id\0checked\0"
    "onButtonGroupPSDSetToggled\0"
    "onRadioButtonFFT_Toggled\0toggled\0"
    "onRadioButtonPSD_Toggled\0"
    "onSpinBoxIntervalLengthEditingFinished\0"
    "onSpinBoxStartIndexEditingFinished\0"
    "onSpinBoxEndIndexEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SATimeFrequencyAnalysis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    0,   87,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    0,   89,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    2,   93,    2, 0x08 /* Private */,
      13,    2,   98,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SATimeFrequencyAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SATimeFrequencyAnalysis *_t = static_cast<SATimeFrequencyAnalysis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onPushButtonImport(); break;
        case 2: _t->onLineEditIntervalFinished(); break;
        case 3: _t->onPushbuttonExportdata(); break;
        case 4: _t->onPushButtonLeftMove(); break;
        case 5: _t->onPushButtonRightMove(); break;
        case 6: _t->onPushButtonLocate(); break;
        case 7: _t->onButtonGroupMagSetToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->onButtonGroupPSDSetToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->onRadioButtonFFT_Toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onRadioButtonPSD_Toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onSpinBoxIntervalLengthEditingFinished(); break;
        case 12: _t->onSpinBoxStartIndexEditingFinished(); break;
        case 13: _t->onSpinBoxEndIndexEditingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject SATimeFrequencyAnalysis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SATimeFrequencyAnalysis.data,
      qt_meta_data_SATimeFrequencyAnalysis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SATimeFrequencyAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SATimeFrequencyAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SATimeFrequencyAnalysis.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SATimeFrequencyAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
