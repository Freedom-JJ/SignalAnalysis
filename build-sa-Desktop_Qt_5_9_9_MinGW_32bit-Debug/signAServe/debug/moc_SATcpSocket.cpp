/****************************************************************************
** Meta object code from reading C++ file 'SATcpSocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signAServe/SATcpSocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SATcpSocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SATcpSocket_t {
    QByteArrayData data[28];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SATcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SATcpSocket_t qt_meta_stringdata_SATcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SATcpSocket"
QT_MOC_LITERAL(1, 12, 18), // "receivedHeartbreat"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "SAProtocolHeader"
QT_MOC_LITERAL(4, 49, 6), // "header"
QT_MOC_LITERAL(5, 56, 12), // "receiveToken"
QT_MOC_LITERAL(6, 69, 5), // "token"
QT_MOC_LITERAL(7, 75, 10), // "sequenceID"
QT_MOC_LITERAL(8, 86, 12), // "receiveError"
QT_MOC_LITERAL(9, 99, 3), // "msg"
QT_MOC_LITERAL(10, 103, 7), // "errcode"
QT_MOC_LITERAL(11, 111, 8), // "error_sa"
QT_MOC_LITERAL(12, 120, 5), // "errid"
QT_MOC_LITERAL(13, 126, 9), // "errstring"
QT_MOC_LITERAL(14, 136, 11), // "ensureWrite"
QT_MOC_LITERAL(15, 148, 4), // "data"
QT_MOC_LITERAL(16, 153, 13), // "SAXMLProtocol"
QT_MOC_LITERAL(17, 167, 3), // "xml"
QT_MOC_LITERAL(18, 171, 5), // "funid"
QT_MOC_LITERAL(19, 177, 8), // "uint32_t"
QT_MOC_LITERAL(20, 186, 11), // "extendValue"
QT_MOC_LITERAL(21, 198, 17), // "requestHeartbreat"
QT_MOC_LITERAL(22, 216, 12), // "requestToken"
QT_MOC_LITERAL(23, 229, 3), // "pid"
QT_MOC_LITERAL(24, 233, 5), // "appid"
QT_MOC_LITERAL(25, 239, 10), // "replyError"
QT_MOC_LITERAL(26, 250, 13), // "requestHeader"
QT_MOC_LITERAL(27, 264, 11) // "onReadyRead"

    },
    "SATcpSocket\0receivedHeartbreat\0\0"
    "SAProtocolHeader\0header\0receiveToken\0"
    "token\0sequenceID\0receiveError\0msg\0"
    "errcode\0error_sa\0errid\0errstring\0"
    "ensureWrite\0data\0SAXMLProtocol\0xml\0"
    "funid\0uint32_t\0extendValue\0requestHeartbreat\0"
    "requestToken\0pid\0appid\0replyError\0"
    "requestHeader\0onReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SATcpSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    2,   77,    2, 0x06 /* Public */,
       8,    3,   82,    2, 0x06 /* Public */,
      11,    2,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   94,    2, 0x0a /* Public */,
      14,    2,   97,    2, 0x0a /* Public */,
      14,    4,  102,    2, 0x0a /* Public */,
      21,    0,  111,    2, 0x0a /* Public */,
      22,    2,  112,    2, 0x0a /* Public */,
      25,    4,  117,    2, 0x0a /* Public */,
      25,    3,  126,    2, 0x0a /* Public */,
      27,    0,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,   10,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   15,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   15,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int, QMetaType::Int, 0x80000000 | 19,   17,   18,    7,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int,    7,   20,    9,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,   26,    9,   10,
    QMetaType::Void,

       0        // eod
};

void SATcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SATcpSocket *_t = static_cast<SATcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedHeartbreat((*reinterpret_cast< const SAProtocolHeader(*)>(_a[1]))); break;
        case 1: _t->receiveToken((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->receiveError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->error_sa((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->ensureWrite((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->ensureWrite((*reinterpret_cast< const SAProtocolHeader(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->ensureWrite((*reinterpret_cast< const SAXMLProtocol(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< uint32_t(*)>(_a[4]))); break;
        case 7: _t->requestHeartbreat(); break;
        case 8: _t->requestToken((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->replyError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->replyError((*reinterpret_cast< const SAProtocolHeader(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->onReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SATcpSocket::*_t)(const SAProtocolHeader & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpSocket::receivedHeartbreat)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SATcpSocket::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpSocket::receiveToken)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SATcpSocket::*_t)(const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpSocket::receiveError)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SATcpSocket::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpSocket::error_sa)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SATcpSocket::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_SATcpSocket.data,
      qt_meta_data_SATcpSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SATcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SATcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SATcpSocket.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int SATcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SATcpSocket::receivedHeartbreat(const SAProtocolHeader & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SATcpSocket::receiveToken(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SATcpSocket::receiveError(const QString & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SATcpSocket::error_sa(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
