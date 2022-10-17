/****************************************************************************
** Meta object code from reading C++ file 'SAColorSetPropertyItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/SAPropertyItem/SAColorSetPropertyItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAColorSetPropertyItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAColorSetPropertyItem_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAColorSetPropertyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAColorSetPropertyItem_t qt_meta_stringdata_SAColorSetPropertyItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SAColorSetPropertyItem"
QT_MOC_LITERAL(1, 23, 12), // "colorChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "onColorChanged"
QT_MOC_LITERAL(4, 52, 1), // "c"
QT_MOC_LITERAL(5, 54, 29), // "onCurrentPenColorAlphaChanged"
QT_MOC_LITERAL(6, 84, 1) // "v"

    },
    "SAColorSetPropertyItem\0colorChanged\0"
    "\0onColorChanged\0c\0onCurrentPenColorAlphaChanged\0"
    "v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAColorSetPropertyItem[] = {

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
       3,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void SAColorSetPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAColorSetPropertyItem *_t = static_cast<SAColorSetPropertyItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->onColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->onCurrentPenColorAlphaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAColorSetPropertyItem::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAColorSetPropertyItem::colorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAColorSetPropertyItem::staticMetaObject = {
    { &SAPropertyItemContainer::staticMetaObject, qt_meta_stringdata_SAColorSetPropertyItem.data,
      qt_meta_data_SAColorSetPropertyItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAColorSetPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAColorSetPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAColorSetPropertyItem.stringdata0))
        return static_cast<void*>(this);
    return SAPropertyItemContainer::qt_metacast(_clname);
}

int SAColorSetPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SAPropertyItemContainer::qt_metacall(_c, _id, _a);
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
void SAColorSetPropertyItem::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
