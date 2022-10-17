/****************************************************************************
** Meta object code from reading C++ file 'SAValueManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signALib/SAValueManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAValueManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAValueManager_t {
    QByteArrayData data[18];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAValueManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAValueManager_t qt_meta_stringdata_SAValueManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SAValueManager"
QT_MOC_LITERAL(1, 15, 18), // "messageInformation"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "des"
QT_MOC_LITERAL(4, 39, 15), // "SA::MeaasgeType"
QT_MOC_LITERAL(5, 55, 4), // "type"
QT_MOC_LITERAL(6, 60, 15), // "dataNameChanged"
QT_MOC_LITERAL(7, 76, 16), // "SAAbstractDatas*"
QT_MOC_LITERAL(8, 93, 4), // "data"
QT_MOC_LITERAL(9, 98, 7), // "oldName"
QT_MOC_LITERAL(10, 106, 9), // "dataAdded"
QT_MOC_LITERAL(11, 116, 23), // "QList<SAAbstractDatas*>"
QT_MOC_LITERAL(12, 140, 5), // "datas"
QT_MOC_LITERAL(13, 146, 11), // "dataRemoved"
QT_MOC_LITERAL(14, 158, 16), // "dataBeDeletedPtr"
QT_MOC_LITERAL(15, 175, 9), // "dataClear"
QT_MOC_LITERAL(16, 185, 4), // "redo"
QT_MOC_LITERAL(17, 190, 4) // "undo"

    },
    "SAValueManager\0messageInformation\0\0"
    "des\0SA::MeaasgeType\0type\0dataNameChanged\0"
    "SAAbstractDatas*\0data\0oldName\0dataAdded\0"
    "QList<SAAbstractDatas*>\0datas\0dataRemoved\0"
    "dataBeDeletedPtr\0dataClear\0redo\0undo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAValueManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,
      10,    1,   59,    2, 0x06 /* Public */,
      13,    1,   62,    2, 0x06 /* Public */,
      15,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   66,    2, 0x0a /* Public */,
      17,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SAValueManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAValueManager *_t = static_cast<SAValueManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageInformation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SA::MeaasgeType(*)>(_a[2]))); break;
        case 1: _t->dataNameChanged((*reinterpret_cast< SAAbstractDatas*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->dataAdded((*reinterpret_cast< const QList<SAAbstractDatas*>(*)>(_a[1]))); break;
        case 3: _t->dataRemoved((*reinterpret_cast< const QList<SAAbstractDatas*>(*)>(_a[1]))); break;
        case 4: _t->dataClear(); break;
        case 5: _t->redo(); break;
        case 6: _t->undo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAValueManager::*_t)(const QString & , SA::MeaasgeType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAValueManager::messageInformation)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SAValueManager::*_t)(SAAbstractDatas * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAValueManager::dataNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SAValueManager::*_t)(const QList<SAAbstractDatas*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAValueManager::dataAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SAValueManager::*_t)(const QList<SAAbstractDatas*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAValueManager::dataRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SAValueManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAValueManager::dataClear)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject SAValueManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SAValueManager.data,
      qt_meta_data_SAValueManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAValueManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAValueManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAValueManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SAValueManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SAValueManager::messageInformation(const QString & _t1, SA::MeaasgeType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAValueManager::dataNameChanged(SAAbstractDatas * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SAValueManager::dataAdded(const QList<SAAbstractDatas*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SAValueManager::dataRemoved(const QList<SAAbstractDatas*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SAValueManager::dataClear()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
