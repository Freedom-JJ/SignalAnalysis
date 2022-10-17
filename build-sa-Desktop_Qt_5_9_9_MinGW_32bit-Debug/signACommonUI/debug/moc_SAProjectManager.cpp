/****************************************************************************
** Meta object code from reading C++ file 'SAProjectManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/SAProjectManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAProjectManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAProjectManager_t {
    QByteArrayData data[16];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAProjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAProjectManager_t qt_meta_stringdata_SAProjectManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SAProjectManager"
QT_MOC_LITERAL(1, 17, 18), // "messageInformation"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 3), // "des"
QT_MOC_LITERAL(4, 41, 15), // "SA::MeaasgeType"
QT_MOC_LITERAL(5, 57, 4), // "type"
QT_MOC_LITERAL(6, 62, 17), // "dirtyStateChanged"
QT_MOC_LITERAL(7, 80, 7), // "isdirty"
QT_MOC_LITERAL(8, 88, 13), // "onDataRemoved"
QT_MOC_LITERAL(9, 102, 23), // "QList<SAAbstractDatas*>"
QT_MOC_LITERAL(10, 126, 16), // "dataBeDeletedPtr"
QT_MOC_LITERAL(11, 143, 11), // "onDataClear"
QT_MOC_LITERAL(12, 155, 17), // "onDataNameChanged"
QT_MOC_LITERAL(13, 173, 16), // "SAAbstractDatas*"
QT_MOC_LITERAL(14, 190, 4), // "data"
QT_MOC_LITERAL(15, 195, 7) // "oldName"

    },
    "SAProjectManager\0messageInformation\0"
    "\0des\0SA::MeaasgeType\0type\0dirtyStateChanged\0"
    "isdirty\0onDataRemoved\0QList<SAAbstractDatas*>\0"
    "dataBeDeletedPtr\0onDataClear\0"
    "onDataNameChanged\0SAAbstractDatas*\0"
    "data\0oldName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAProjectManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   47,    2, 0x08 /* Private */,
      11,    0,   50,    2, 0x08 /* Private */,
      12,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,

       0        // eod
};

void SAProjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAProjectManager *_t = static_cast<SAProjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageInformation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SA::MeaasgeType(*)>(_a[2]))); break;
        case 1: _t->dirtyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onDataRemoved((*reinterpret_cast< const QList<SAAbstractDatas*>(*)>(_a[1]))); break;
        case 3: _t->onDataClear(); break;
        case 4: _t->onDataNameChanged((*reinterpret_cast< SAAbstractDatas*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAProjectManager::*_t)(const QString & , SA::MeaasgeType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAProjectManager::messageInformation)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SAProjectManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAProjectManager::dirtyStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SAProjectManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SAProjectManager.data,
      qt_meta_data_SAProjectManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAProjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAProjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAProjectManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SAProjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SAProjectManager::messageInformation(const QString & _t1, SA::MeaasgeType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAProjectManager::dirtyStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
