/****************************************************************************
** Meta object code from reading C++ file 'hardwarewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/View/hardwarewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hardwarewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HardwareWindow_t {
    QByteArrayData data[7];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HardwareWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HardwareWindow_t qt_meta_stringdata_HardwareWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HardwareWindow"
QT_MOC_LITERAL(1, 15, 26), // "on_HWCheckBox_stateChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "state"
QT_MOC_LITERAL(4, 49, 28), // "on_initConnectButton_clicked"
QT_MOC_LITERAL(5, 78, 26), // "on_refindMacButton_clicked"
QT_MOC_LITERAL(6, 105, 25) // "on_initParaButton_clicked"

    },
    "HardwareWindow\0on_HWCheckBox_stateChanged\0"
    "\0state\0on_initConnectButton_clicked\0"
    "on_refindMacButton_clicked\0"
    "on_initParaButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HardwareWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HardwareWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HardwareWindow *_t = static_cast<HardwareWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_HWCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_initConnectButton_clicked(); break;
        case 2: _t->on_refindMacButton_clicked(); break;
        case 3: _t->on_initParaButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject HardwareWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HardwareWindow.data,
      qt_meta_data_HardwareWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HardwareWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HardwareWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HardwareWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
