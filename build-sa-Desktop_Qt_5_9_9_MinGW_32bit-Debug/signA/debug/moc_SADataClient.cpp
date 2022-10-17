/****************************************************************************
** Meta object code from reading C++ file 'SADataClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/SADataClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SADataClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SADataClient_t {
    QByteArrayData data[35];
    char stringdata0[505];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SADataClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SADataClient_t qt_meta_stringdata_SADataClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SADataClient"
QT_MOC_LITERAL(1, 13, 11), // "closeClient"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "messageInfo"
QT_MOC_LITERAL(4, 38, 4), // "info"
QT_MOC_LITERAL(5, 43, 15), // "SA::MeaasgeType"
QT_MOC_LITERAL(6, 59, 11), // "messageType"
QT_MOC_LITERAL(7, 71, 24), // "heartbeatCheckerTimerout"
QT_MOC_LITERAL(8, 96, 20), // "connectedServeResult"
QT_MOC_LITERAL(9, 117, 5), // "state"
QT_MOC_LITERAL(10, 123, 19), // "startConnectToServe"
QT_MOC_LITERAL(11, 143, 7), // "timeout"
QT_MOC_LITERAL(12, 151, 23), // "receive2DPointsDescribe"
QT_MOC_LITERAL(13, 175, 17), // "SAPropertiesGroup"
QT_MOC_LITERAL(14, 193, 3), // "res"
QT_MOC_LITERAL(15, 197, 10), // "sequenceID"
QT_MOC_LITERAL(16, 208, 11), // "extendValue"
QT_MOC_LITERAL(17, 220, 19), // "req2DPointsDescribe"
QT_MOC_LITERAL(18, 240, 16), // "QVector<QPointF>"
QT_MOC_LITERAL(19, 257, 4), // "arrs"
QT_MOC_LITERAL(20, 262, 9), // "sortcount"
QT_MOC_LITERAL(21, 272, 17), // "tryConnectToServe"
QT_MOC_LITERAL(22, 290, 10), // "retrycount"
QT_MOC_LITERAL(23, 301, 23), // "request2DPointsDescribe"
QT_MOC_LITERAL(24, 325, 17), // "onSocketConnected"
QT_MOC_LITERAL(25, 343, 16), // "QAbstractSocket*"
QT_MOC_LITERAL(26, 360, 6), // "socket"
QT_MOC_LITERAL(27, 367, 20), // "onSocketDisconnected"
QT_MOC_LITERAL(28, 388, 26), // "onHeartbeatCheckerTimerout"
QT_MOC_LITERAL(29, 415, 8), // "lastdate"
QT_MOC_LITERAL(30, 424, 19), // "onSocketErrorOccure"
QT_MOC_LITERAL(31, 444, 11), // "socketError"
QT_MOC_LITERAL(32, 456, 19), // "onClientErrorOccure"
QT_MOC_LITERAL(33, 476, 11), // "clientError"
QT_MOC_LITERAL(34, 488, 16) // "reconnectToServe"

    },
    "SADataClient\0closeClient\0\0messageInfo\0"
    "info\0SA::MeaasgeType\0messageType\0"
    "heartbeatCheckerTimerout\0connectedServeResult\0"
    "state\0startConnectToServe\0timeout\0"
    "receive2DPointsDescribe\0SAPropertiesGroup\0"
    "res\0sequenceID\0extendValue\0"
    "req2DPointsDescribe\0QVector<QPointF>\0"
    "arrs\0sortcount\0tryConnectToServe\0"
    "retrycount\0request2DPointsDescribe\0"
    "onSocketConnected\0QAbstractSocket*\0"
    "socket\0onSocketDisconnected\0"
    "onHeartbeatCheckerTimerout\0lastdate\0"
    "onSocketErrorOccure\0socketError\0"
    "onClientErrorOccure\0clientError\0"
    "reconnectToServe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SADataClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    2,  110,    2, 0x06 /* Public */,
       3,    1,  115,    2, 0x26 /* Public | MethodCloned */,
       7,    0,  118,    2, 0x06 /* Public */,
       8,    1,  119,    2, 0x06 /* Public */,
      10,    1,  122,    2, 0x06 /* Public */,
      12,    3,  125,    2, 0x06 /* Public */,
      17,    3,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    2,  139,    2, 0x0a /* Public */,
      21,    1,  144,    2, 0x2a /* Public | MethodCloned */,
      21,    0,  147,    2, 0x2a /* Public | MethodCloned */,
      23,    3,  148,    2, 0x0a /* Public */,
      23,    2,  155,    2, 0x2a /* Public | MethodCloned */,
      24,    1,  160,    2, 0x08 /* Private */,
      27,    0,  163,    2, 0x08 /* Private */,
      28,    1,  164,    2, 0x08 /* Private */,
      30,    1,  167,    2, 0x08 /* Private */,
      32,    1,  170,    2, 0x08 /* Private */,
      34,    0,  173,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::UInt,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int, QMetaType::Int,   19,   15,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   11,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int, QMetaType::Int,   19,   15,   20,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int,   19,   15,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,

       0        // eod
};

void SADataClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SADataClient *_t = static_cast<SADataClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeClient(); break;
        case 1: _t->messageInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SA::MeaasgeType(*)>(_a[2]))); break;
        case 2: _t->messageInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->heartbeatCheckerTimerout(); break;
        case 4: _t->connectedServeResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->startConnectToServe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->receive2DPointsDescribe((*reinterpret_cast< const SAPropertiesGroup(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 7: _t->req2DPointsDescribe((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->tryConnectToServe((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->tryConnectToServe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->tryConnectToServe(); break;
        case 11: _t->request2DPointsDescribe((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->request2DPointsDescribe((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->onSocketConnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 14: _t->onSocketDisconnected(); break;
        case 15: _t->onHeartbeatCheckerTimerout((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 16: _t->onSocketErrorOccure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->onClientErrorOccure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->reconnectToServe(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAPropertiesGroup >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        case 13:
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
            typedef void (SADataClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataClient::closeClient)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SADataClient::*_t)(const QString & , SA::MeaasgeType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataClient::messageInfo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SADataClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataClient::heartbeatCheckerTimerout)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SADataClient::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataClient::connectedServeResult)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SADataClient::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataClient::startConnectToServe)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SADataClient::*_t)(const SAPropertiesGroup & , int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataClient::receive2DPointsDescribe)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SADataClient::*_t)(const QVector<QPointF> & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SADataClient::req2DPointsDescribe)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject SADataClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SADataClient.data,
      qt_meta_data_SADataClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SADataClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SADataClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SADataClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SADataClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void SADataClient::closeClient()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SADataClient::messageInfo(const QString & _t1, SA::MeaasgeType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void SADataClient::heartbeatCheckerTimerout()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SADataClient::connectedServeResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SADataClient::startConnectToServe(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SADataClient::receive2DPointsDescribe(const SAPropertiesGroup & _t1, int _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SADataClient::req2DPointsDescribe(const QVector<QPointF> & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
