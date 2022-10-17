/****************************************************************************
** Meta object code from reading C++ file 'SADataFeatureWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/widget/SADataFeatureWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SADataFeatureWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SADataFeatureWidget_t {
    QByteArrayData data[22];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SADataFeatureWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SADataFeatureWidget_t qt_meta_stringdata_SADataFeatureWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SADataFeatureWidget"
QT_MOC_LITERAL(1, 20, 15), // "showMessageInfo"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "info"
QT_MOC_LITERAL(4, 42, 15), // "SA::MeaasgeType"
QT_MOC_LITERAL(5, 58, 11), // "messageType"
QT_MOC_LITERAL(6, 70, 19), // "mdiSubWindowActived"
QT_MOC_LITERAL(7, 90, 14), // "QMdiSubWindow*"
QT_MOC_LITERAL(8, 105, 6), // "subwnd"
QT_MOC_LITERAL(9, 112, 18), // "mdiSubWindowClosed"
QT_MOC_LITERAL(10, 131, 4), // "arg1"
QT_MOC_LITERAL(11, 136, 23), // "onToolButtonRequestCalc"
QT_MOC_LITERAL(12, 160, 17), // "onTreeViewClicked"
QT_MOC_LITERAL(13, 178, 5), // "index"
QT_MOC_LITERAL(14, 184, 35), // "onToolButtonClearDataFeatureC..."
QT_MOC_LITERAL(15, 220, 28), // "onToolButtonExpandAllClicked"
QT_MOC_LITERAL(16, 249, 26), // "onHeartbeatCheckerTimerout"
QT_MOC_LITERAL(17, 276, 25), // "onReceive2DPointsDescribe"
QT_MOC_LITERAL(18, 302, 17), // "SAPropertiesGroup"
QT_MOC_LITERAL(19, 320, 10), // "propgroups"
QT_MOC_LITERAL(20, 331, 10), // "sequenceID"
QT_MOC_LITERAL(21, 342, 11) // "extendValue"

    },
    "SADataFeatureWidget\0showMessageInfo\0"
    "\0info\0SA::MeaasgeType\0messageType\0"
    "mdiSubWindowActived\0QMdiSubWindow*\0"
    "subwnd\0mdiSubWindowClosed\0arg1\0"
    "onToolButtonRequestCalc\0onTreeViewClicked\0"
    "index\0onToolButtonClearDataFeatureClicked\0"
    "onToolButtonExpandAllClicked\0"
    "onHeartbeatCheckerTimerout\0"
    "onReceive2DPointsDescribe\0SAPropertiesGroup\0"
    "propgroups\0sequenceID\0extendValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SADataFeatureWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       1,    1,   69,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    3,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int, QMetaType::UInt,   19,   20,   21,

       0        // eod
};

void SADataFeatureWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SADataFeatureWidget *_t = static_cast<SADataFeatureWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMessageInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SA::MeaasgeType(*)>(_a[2]))); break;
        case 1: _t->showMessageInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mdiSubWindowActived((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 3: _t->mdiSubWindowClosed((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 4: _t->onToolButtonRequestCalc(); break;
        case 5: _t->onTreeViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->onToolButtonClearDataFeatureClicked(); break;
        case 7: _t->onToolButtonExpandAllClicked(); break;
        case 8: _t->onHeartbeatCheckerTimerout(); break;
        case 9: _t->onReceive2DPointsDescribe((*reinterpret_cast< const SAPropertiesGroup(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAPropertiesGroup >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SADataFeatureWidget::*_t)(const QString & , SA::MeaasgeType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataFeatureWidget::showMessageInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SADataFeatureWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SADataFeatureWidget.data,
      qt_meta_data_SADataFeatureWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SADataFeatureWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SADataFeatureWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SADataFeatureWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SADataFeatureWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SADataFeatureWidget::showMessageInfo(const QString & _t1, SA::MeaasgeType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
