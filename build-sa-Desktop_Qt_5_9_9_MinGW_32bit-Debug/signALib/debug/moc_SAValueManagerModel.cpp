/****************************************************************************
** Meta object code from reading C++ file 'SAValueManagerModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signALib/SAValueManagerModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAValueManagerModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAValueManagerModel_t {
    QByteArrayData data[12];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAValueManagerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAValueManagerModel_t qt_meta_stringdata_SAValueManagerModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SAValueManagerModel"
QT_MOC_LITERAL(1, 20, 11), // "onDataAdded"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "QList<SAAbstractDatas*>"
QT_MOC_LITERAL(4, 57, 5), // "datas"
QT_MOC_LITERAL(5, 63, 13), // "onDataDeleted"
QT_MOC_LITERAL(6, 77, 16), // "dataBeDeletedPtr"
QT_MOC_LITERAL(7, 94, 11), // "onDataClear"
QT_MOC_LITERAL(8, 106, 17), // "onDataNameChanged"
QT_MOC_LITERAL(9, 124, 16), // "SAAbstractDatas*"
QT_MOC_LITERAL(10, 141, 4), // "data"
QT_MOC_LITERAL(11, 146, 7) // "oldName"

    },
    "SAValueManagerModel\0onDataAdded\0\0"
    "QList<SAAbstractDatas*>\0datas\0"
    "onDataDeleted\0dataBeDeletedPtr\0"
    "onDataClear\0onDataNameChanged\0"
    "SAAbstractDatas*\0data\0oldName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAValueManagerModel[] = {

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
       5,    1,   37,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,

       0        // eod
};

void SAValueManagerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAValueManagerModel *_t = static_cast<SAValueManagerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDataAdded((*reinterpret_cast< const QList<SAAbstractDatas*>(*)>(_a[1]))); break;
        case 1: _t->onDataDeleted((*reinterpret_cast< const QList<SAAbstractDatas*>(*)>(_a[1]))); break;
        case 2: _t->onDataClear(); break;
        case 3: _t->onDataNameChanged((*reinterpret_cast< SAAbstractDatas*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SAValueManagerModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_SAValueManagerModel.data,
      qt_meta_data_SAValueManagerModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAValueManagerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAValueManagerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAValueManagerModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int SAValueManagerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
