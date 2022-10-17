/****************************************************************************
** Meta object code from reading C++ file 'SALog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signALib/SALog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SALog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SALog_t {
    QByteArrayData data[18];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SALog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SALog_t qt_meta_stringdata_SALog = {
    {
QT_MOC_LITERAL(0, 0, 5), // "SALog"
QT_MOC_LITERAL(1, 6, 8), // "addedLog"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "SALogInfo"
QT_MOC_LITERAL(4, 26, 4), // "info"
QT_MOC_LITERAL(5, 31, 10), // "occurError"
QT_MOC_LITERAL(6, 42, 9), // "errString"
QT_MOC_LITERAL(7, 52, 19), // "appendLogInfoToFile"
QT_MOC_LITERAL(8, 72, 3), // "str"
QT_MOC_LITERAL(9, 76, 19), // "onWtiterErrorHappen"
QT_MOC_LITERAL(10, 96, 4), // "code"
QT_MOC_LITERAL(11, 101, 7), // "LogType"
QT_MOC_LITERAL(12, 109, 10), // "TypeNormal"
QT_MOC_LITERAL(13, 120, 11), // "TypeWarning"
QT_MOC_LITERAL(14, 132, 9), // "TypeError"
QT_MOC_LITERAL(15, 142, 12), // "TypeCritical"
QT_MOC_LITERAL(16, 155, 9), // "TypeDebug"
QT_MOC_LITERAL(17, 165, 8) // "TypeUser"

    },
    "SALog\0addedLog\0\0SALogInfo\0info\0"
    "occurError\0errString\0appendLogInfoToFile\0"
    "str\0onWtiterErrorHappen\0code\0LogType\0"
    "TypeNormal\0TypeWarning\0TypeError\0"
    "TypeCritical\0TypeDebug\0TypeUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SALog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,    6,

 // enums: name, flags, count, data
      11, 0x0,    6,   52,

 // enum data: key, value
      12, uint(SALog::TypeNormal),
      13, uint(SALog::TypeWarning),
      14, uint(SALog::TypeError),
      15, uint(SALog::TypeCritical),
      16, uint(SALog::TypeDebug),
      17, uint(SALog::TypeUser),

       0        // eod
};

void SALog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SALog *_t = static_cast<SALog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addedLog((*reinterpret_cast< const SALogInfo(*)>(_a[1]))); break;
        case 1: _t->occurError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->appendLogInfoToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onWtiterErrorHappen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SALogInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SALog::*_t)(const SALogInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SALog::addedLog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SALog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SALog::occurError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SALog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SALog::appendLogInfoToFile)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SALog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SALog.data,
      qt_meta_data_SALog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SALog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SALog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SALog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SALog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SALog::addedLog(const SALogInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SALog::occurError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SALog::appendLogInfoToFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
