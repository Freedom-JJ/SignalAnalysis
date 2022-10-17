/****************************************************************************
** Meta object code from reading C++ file 'SATextReadWriter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signALib/SATextReadWriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SATextReadWriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SATextReadWriter_t {
    QByteArrayData data[36];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SATextReadWriter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SATextReadWriter_t qt_meta_stringdata_SATextReadWriter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SATextReadWriter"
QT_MOC_LITERAL(1, 17, 12), // "readComplete"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "str"
QT_MOC_LITERAL(4, 35, 9), // "isSuccess"
QT_MOC_LITERAL(5, 45, 15), // "readAllComplete"
QT_MOC_LITERAL(6, 61, 12), // "reachTextEnd"
QT_MOC_LITERAL(7, 74, 15), // "startedReadText"
QT_MOC_LITERAL(8, 90, 10), // "occurError"
QT_MOC_LITERAL(9, 101, 7), // "errcode"
QT_MOC_LITERAL(10, 109, 9), // "errString"
QT_MOC_LITERAL(11, 119, 13), // "startReadText"
QT_MOC_LITERAL(12, 133, 10), // "appendText"
QT_MOC_LITERAL(13, 144, 4), // "text"
QT_MOC_LITERAL(14, 149, 10), // "appendLine"
QT_MOC_LITERAL(15, 160, 5), // "flush"
QT_MOC_LITERAL(16, 166, 12), // "operatorFile"
QT_MOC_LITERAL(17, 179, 27), // "std::function<void(QFile*)>"
QT_MOC_LITERAL(18, 207, 3), // "fun"
QT_MOC_LITERAL(19, 211, 15), // "onStartReadText"
QT_MOC_LITERAL(20, 227, 9), // "ErrorCode"
QT_MOC_LITERAL(21, 237, 7), // "NoError"
QT_MOC_LITERAL(22, 245, 9), // "ReadError"
QT_MOC_LITERAL(23, 255, 10), // "WriteError"
QT_MOC_LITERAL(24, 266, 10), // "FatalError"
QT_MOC_LITERAL(25, 277, 13), // "ResourceError"
QT_MOC_LITERAL(26, 291, 9), // "OpenError"
QT_MOC_LITERAL(27, 301, 10), // "AbortError"
QT_MOC_LITERAL(28, 312, 12), // "TimeOutError"
QT_MOC_LITERAL(29, 325, 16), // "UnspecifiedError"
QT_MOC_LITERAL(30, 342, 11), // "RemoveError"
QT_MOC_LITERAL(31, 354, 11), // "RenameError"
QT_MOC_LITERAL(32, 366, 13), // "PositionError"
QT_MOC_LITERAL(33, 380, 11), // "ResizeError"
QT_MOC_LITERAL(34, 392, 16), // "PermissionsError"
QT_MOC_LITERAL(35, 409, 9) // "CopyError"

    },
    "SATextReadWriter\0readComplete\0\0str\0"
    "isSuccess\0readAllComplete\0reachTextEnd\0"
    "startedReadText\0occurError\0errcode\0"
    "errString\0startReadText\0appendText\0"
    "text\0appendLine\0flush\0operatorFile\0"
    "std::function<void(QFile*)>\0fun\0"
    "onStartReadText\0ErrorCode\0NoError\0"
    "ReadError\0WriteError\0FatalError\0"
    "ResourceError\0OpenError\0AbortError\0"
    "TimeOutError\0UnspecifiedError\0RemoveError\0"
    "RenameError\0PositionError\0ResizeError\0"
    "PermissionsError\0CopyError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SATextReadWriter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    0,   74,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    0,   76,    2, 0x06 /* Public */,
       8,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   82,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,
      14,    1,   86,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x0a /* Public */,
      19,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

 // enums: name, flags, count, data
      20, 0x0,   15,   98,

 // enum data: key, value
      21, uint(SATextReadWriter::NoError),
      22, uint(SATextReadWriter::ReadError),
      23, uint(SATextReadWriter::WriteError),
      24, uint(SATextReadWriter::FatalError),
      25, uint(SATextReadWriter::ResourceError),
      26, uint(SATextReadWriter::OpenError),
      27, uint(SATextReadWriter::AbortError),
      28, uint(SATextReadWriter::TimeOutError),
      29, uint(SATextReadWriter::UnspecifiedError),
      30, uint(SATextReadWriter::RemoveError),
      31, uint(SATextReadWriter::RenameError),
      32, uint(SATextReadWriter::PositionError),
      33, uint(SATextReadWriter::ResizeError),
      34, uint(SATextReadWriter::PermissionsError),
      35, uint(SATextReadWriter::CopyError),

       0        // eod
};

void SATextReadWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SATextReadWriter *_t = static_cast<SATextReadWriter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readComplete((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->readAllComplete(); break;
        case 2: _t->reachTextEnd(); break;
        case 3: _t->startedReadText(); break;
        case 4: _t->occurError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->startReadText(); break;
        case 6: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->appendLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { bool _r = _t->flush();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->operatorFile((*reinterpret_cast< std::function<void(QFile*)>(*)>(_a[1]))); break;
        case 10: _t->onStartReadText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SATextReadWriter::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATextReadWriter::readComplete)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SATextReadWriter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATextReadWriter::readAllComplete)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SATextReadWriter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATextReadWriter::reachTextEnd)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SATextReadWriter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATextReadWriter::startedReadText)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SATextReadWriter::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATextReadWriter::occurError)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject SATextReadWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SATextReadWriter.data,
      qt_meta_data_SATextReadWriter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SATextReadWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SATextReadWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SATextReadWriter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SATextReadWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SATextReadWriter::readComplete(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SATextReadWriter::readAllComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SATextReadWriter::reachTextEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SATextReadWriter::startedReadText()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SATextReadWriter::occurError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
