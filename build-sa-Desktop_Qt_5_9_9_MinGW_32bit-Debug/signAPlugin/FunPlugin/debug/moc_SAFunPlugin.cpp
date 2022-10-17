/****************************************************************************
** Meta object code from reading C++ file 'SAFunPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/signAPlugin/FunPlugin/SAFunPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAFunPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAFunPlugin_t {
    QByteArrayData data[15];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAFunPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAFunPlugin_t qt_meta_stringdata_SAFunPlugin = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SAFunPlugin"
QT_MOC_LITERAL(1, 12, 12), // "on_sumAction"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "on_meanAction"
QT_MOC_LITERAL(4, 40, 13), // "on_diffAction"
QT_MOC_LITERAL(5, 54, 19), // "on_statisticsAction"
QT_MOC_LITERAL(6, 74, 13), // "on_histAction"
QT_MOC_LITERAL(7, 88, 16), // "on_detrendDirect"
QT_MOC_LITERAL(8, 105, 18), // "on_setWindowToWave"
QT_MOC_LITERAL(9, 124, 17), // "on_spectrumAction"
QT_MOC_LITERAL(10, 142, 22), // "on_powerSpectrumAction"
QT_MOC_LITERAL(11, 165, 21), // "on_tmeFrequencyAction"
QT_MOC_LITERAL(12, 187, 20), // "on_sigmaDetectAction"
QT_MOC_LITERAL(13, 208, 20), // "on_pointSmoothAction"
QT_MOC_LITERAL(14, 229, 27) // "on_fittingFigureCurveAction"

    },
    "SAFunPlugin\0on_sumAction\0\0on_meanAction\0"
    "on_diffAction\0on_statisticsAction\0"
    "on_histAction\0on_detrendDirect\0"
    "on_setWindowToWave\0on_spectrumAction\0"
    "on_powerSpectrumAction\0on_tmeFrequencyAction\0"
    "on_sigmaDetectAction\0on_pointSmoothAction\0"
    "on_fittingFigureCurveAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAFunPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SAFunPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAFunPlugin *_t = static_cast<SAFunPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_sumAction(); break;
        case 1: _t->on_meanAction(); break;
        case 2: _t->on_diffAction(); break;
        case 3: _t->on_statisticsAction(); break;
        case 4: _t->on_histAction(); break;
        case 5: _t->on_detrendDirect(); break;
        case 6: _t->on_setWindowToWave(); break;
        case 7: _t->on_spectrumAction(); break;
        case 8: _t->on_powerSpectrumAction(); break;
        case 9: _t->on_tmeFrequencyAction(); break;
        case 10: _t->on_sigmaDetectAction(); break;
        case 11: _t->on_pointSmoothAction(); break;
        case 12: _t->on_fittingFigureCurveAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SAFunPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SAFunPlugin.data,
      qt_meta_data_SAFunPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAFunPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAFunPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAFunPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SAAbstractFunctionPackagePlugin"))
        return static_cast< SAAbstractFunctionPackagePlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int SAFunPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
