/****************************************************************************
** Meta object code from reading C++ file 'SATcpClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signAServe/SATcpClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SATcpClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SATcpClient_t {
    QByteArrayData data[29];
    char stringdata0[385];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SATcpClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SATcpClient_t qt_meta_stringdata_SATcpClient = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SATcpClient"
QT_MOC_LITERAL(1, 12, 11), // "clientError"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "errcode"
QT_MOC_LITERAL(4, 33, 12), // "receiveToken"
QT_MOC_LITERAL(5, 46, 5), // "token"
QT_MOC_LITERAL(6, 52, 10), // "sequenceID"
QT_MOC_LITERAL(7, 63, 11), // "socketError"
QT_MOC_LITERAL(8, 75, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 104, 14), // "connectedServe"
QT_MOC_LITERAL(10, 119, 16), // "QAbstractSocket*"
QT_MOC_LITERAL(11, 136, 6), // "socket"
QT_MOC_LITERAL(12, 143, 17), // "disconnectedServe"
QT_MOC_LITERAL(13, 161, 17), // "heartbreatTimeout"
QT_MOC_LITERAL(14, 179, 12), // "lastDatetime"
QT_MOC_LITERAL(15, 192, 12), // "aboutToClose"
QT_MOC_LITERAL(16, 205, 14), // "connectToServe"
QT_MOC_LITERAL(17, 220, 7), // "timeout"
QT_MOC_LITERAL(18, 228, 19), // "disconnectFromServe"
QT_MOC_LITERAL(19, 248, 18), // "setHeartbreakCheck"
QT_MOC_LITERAL(20, 267, 6), // "enable"
QT_MOC_LITERAL(21, 274, 12), // "requestToken"
QT_MOC_LITERAL(22, 287, 3), // "pid"
QT_MOC_LITERAL(23, 291, 5), // "appid"
QT_MOC_LITERAL(24, 297, 17), // "requestHeartbreat"
QT_MOC_LITERAL(25, 315, 17), // "onSocketConnected"
QT_MOC_LITERAL(26, 333, 5), // "close"
QT_MOC_LITERAL(27, 339, 24), // "onHeartbreatCheckTimeout"
QT_MOC_LITERAL(28, 364, 20) // "onReceivedHeartbreat"

    },
    "SATcpClient\0clientError\0\0errcode\0"
    "receiveToken\0token\0sequenceID\0socketError\0"
    "QAbstractSocket::SocketError\0"
    "connectedServe\0QAbstractSocket*\0socket\0"
    "disconnectedServe\0heartbreatTimeout\0"
    "lastDatetime\0aboutToClose\0connectToServe\0"
    "timeout\0disconnectFromServe\0"
    "setHeartbreakCheck\0enable\0requestToken\0"
    "pid\0appid\0requestHeartbreat\0"
    "onSocketConnected\0close\0"
    "onHeartbreatCheckTimeout\0onReceivedHeartbreat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SATcpClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    2,  102,    2, 0x06 /* Public */,
       7,    1,  107,    2, 0x06 /* Public */,
       9,    1,  110,    2, 0x06 /* Public */,
      12,    0,  113,    2, 0x06 /* Public */,
      13,    1,  114,    2, 0x06 /* Public */,
      15,    0,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  118,    2, 0x0a /* Public */,
      16,    0,  121,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  122,    2, 0x0a /* Public */,
      19,    1,  123,    2, 0x0a /* Public */,
      21,    2,  126,    2, 0x0a /* Public */,
      24,    0,  131,    2, 0x0a /* Public */,
      25,    0,  132,    2, 0x0a /* Public */,
      26,    0,  133,    2, 0x0a /* Public */,
      27,    0,  134,    2, 0x08 /* Private */,
      28,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SATcpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SATcpClient *_t = static_cast<SATcpClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->receiveToken((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->connectedServe((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 4: _t->disconnectedServe(); break;
        case 5: _t->heartbreatTimeout((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 6: _t->aboutToClose(); break;
        case 7: _t->connectToServe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->connectToServe(); break;
        case 9: _t->disconnectFromServe(); break;
        case 10: _t->setHeartbreakCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->requestToken((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->requestHeartbreat(); break;
        case 13: _t->onSocketConnected(); break;
        case 14: _t->close(); break;
        case 15: _t->onHeartbreatCheckTimeout(); break;
        case 16: _t->onReceivedHeartbreat(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SATcpClient::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpClient::clientError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SATcpClient::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpClient::receiveToken)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SATcpClient::*_t)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpClient::socketError)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SATcpClient::*_t)(QAbstractSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpClient::connectedServe)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SATcpClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpClient::disconnectedServe)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SATcpClient::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpClient::heartbreatTimeout)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SATcpClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SATcpClient::aboutToClose)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject SATcpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SATcpClient.data,
      qt_meta_data_SATcpClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SATcpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SATcpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SATcpClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SATcpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SATcpClient::clientError(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SATcpClient::receiveToken(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SATcpClient::socketError(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SATcpClient::connectedServe(QAbstractSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SATcpClient::disconnectedServe()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SATcpClient::heartbreatTimeout(const QDateTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SATcpClient::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
