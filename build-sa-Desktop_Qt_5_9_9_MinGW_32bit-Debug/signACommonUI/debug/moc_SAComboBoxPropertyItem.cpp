/****************************************************************************
** Meta object code from reading C++ file 'SAComboBoxPropertyItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/SAPropertyItem/SAComboBoxPropertyItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAComboBoxPropertyItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAComboBoxPropertyItem_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAComboBoxPropertyItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAComboBoxPropertyItem_t qt_meta_stringdata_SAComboBoxPropertyItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SAComboBoxPropertyItem"
QT_MOC_LITERAL(1, 23, 19), // "currentIndexChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "index"
QT_MOC_LITERAL(4, 50, 4), // "text"
QT_MOC_LITERAL(5, 55, 18), // "currentTextChanged"
QT_MOC_LITERAL(6, 74, 15), // "editTextChanged"
QT_MOC_LITERAL(7, 90, 15), // "setCurrentIndex"
QT_MOC_LITERAL(8, 106, 14), // "setCurrentText"
QT_MOC_LITERAL(9, 121, 11) // "setEditText"

    },
    "SAComboBoxPropertyItem\0currentIndexChanged\0"
    "\0index\0text\0currentTextChanged\0"
    "editTextChanged\0setCurrentIndex\0"
    "setCurrentText\0setEditText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAComboBoxPropertyItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       1,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   61,    2, 0x0a /* Public */,
       8,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void SAComboBoxPropertyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAComboBoxPropertyItem *_t = static_cast<SAComboBoxPropertyItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setCurrentText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setEditText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAComboBoxPropertyItem::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAComboBoxPropertyItem::currentIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SAComboBoxPropertyItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAComboBoxPropertyItem::currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SAComboBoxPropertyItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAComboBoxPropertyItem::currentTextChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SAComboBoxPropertyItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAComboBoxPropertyItem::editTextChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SAComboBoxPropertyItem::staticMetaObject = {
    { &SAPropertyItemContainer::staticMetaObject, qt_meta_stringdata_SAComboBoxPropertyItem.data,
      qt_meta_data_SAComboBoxPropertyItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAComboBoxPropertyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAComboBoxPropertyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAComboBoxPropertyItem.stringdata0))
        return static_cast<void*>(this);
    return SAPropertyItemContainer::qt_metacast(_clname);
}

int SAComboBoxPropertyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SAPropertyItemContainer::qt_metacall(_c, _id, _a);
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
void SAComboBoxPropertyItem::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAComboBoxPropertyItem::currentIndexChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SAComboBoxPropertyItem::currentTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SAComboBoxPropertyItem::editTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
