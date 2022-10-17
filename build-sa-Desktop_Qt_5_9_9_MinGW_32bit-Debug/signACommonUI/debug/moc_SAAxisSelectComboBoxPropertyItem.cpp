/****************************************************************************
** Meta object code from reading C++ file 'SAAxisSelectComboBoxPropertyItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/figureSet/SAAxisSelectComboBoxPropertyItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAAxisSelectComboBoxPropertyItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAAxisSelectComboBoxPropertyItem_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAAxisSelectComboBoxPropertyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAAxisSelectComboBoxPropertyItem_t qt_meta_stringdata_SAAxisSelectComboBoxPropertyItem = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SAAxisSelectComboBoxPropertyItem"
QT_MOC_LITERAL(1, 33, 17), // "axisSelectChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 6), // "axisID"
QT_MOC_LITERAL(4, 59, 20), // "setCurrentSelectAxis"
QT_MOC_LITERAL(5, 80, 21), // "onCurrentIndexChanged"
QT_MOC_LITERAL(6, 102, 5) // "index"

    },
    "SAAxisSelectComboBoxPropertyItem\0"
    "axisSelectChanged\0\0axisID\0"
    "setCurrentSelectAxis\0onCurrentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAAxisSelectComboBoxPropertyItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void SAAxisSelectComboBoxPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAAxisSelectComboBoxPropertyItem *_t = static_cast<SAAxisSelectComboBoxPropertyItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisSelectChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setCurrentSelectAxis((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAAxisSelectComboBoxPropertyItem::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAAxisSelectComboBoxPropertyItem::axisSelectChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAAxisSelectComboBoxPropertyItem::staticMetaObject = {
    { &SAComboBoxPropertyItem::staticMetaObject, qt_meta_stringdata_SAAxisSelectComboBoxPropertyItem.data,
      qt_meta_data_SAAxisSelectComboBoxPropertyItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAAxisSelectComboBoxPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAAxisSelectComboBoxPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAAxisSelectComboBoxPropertyItem.stringdata0))
        return static_cast<void*>(this);
    return SAComboBoxPropertyItem::qt_metacast(_clname);
}

int SAAxisSelectComboBoxPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SAComboBoxPropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SAAxisSelectComboBoxPropertyItem::axisSelectChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
