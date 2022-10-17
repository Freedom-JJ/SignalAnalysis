/****************************************************************************
** Meta object code from reading C++ file 'ctkProxyStyle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/3rdParty/ctk/ctkProxyStyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkProxyStyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkProxyStyle_t {
    QByteArrayData data[15];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkProxyStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkProxyStyle_t qt_meta_stringdata_ctkProxyStyle = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkProxyStyle"
QT_MOC_LITERAL(1, 14, 26), // "standardIconImplementation"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "StandardPixmap"
QT_MOC_LITERAL(4, 57, 12), // "standardIcon"
QT_MOC_LITERAL(5, 70, 19), // "const QStyleOption*"
QT_MOC_LITERAL(6, 90, 6), // "option"
QT_MOC_LITERAL(7, 97, 14), // "const QWidget*"
QT_MOC_LITERAL(8, 112, 6), // "widget"
QT_MOC_LITERAL(9, 119, 27), // "layoutSpacingImplementation"
QT_MOC_LITERAL(10, 147, 24), // "QSizePolicy::ControlType"
QT_MOC_LITERAL(11, 172, 8), // "control1"
QT_MOC_LITERAL(12, 181, 8), // "control2"
QT_MOC_LITERAL(13, 190, 15), // "Qt::Orientation"
QT_MOC_LITERAL(14, 206, 11) // "orientation"

    },
    "ctkProxyStyle\0standardIconImplementation\0"
    "\0StandardPixmap\0standardIcon\0"
    "const QStyleOption*\0option\0const QWidget*\0"
    "widget\0layoutSpacingImplementation\0"
    "QSizePolicy::ControlType\0control1\0"
    "control2\0Qt::Orientation\0orientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkProxyStyle[] = {

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
       1,    3,   34,    2, 0x09 /* Protected */,
       9,    5,   41,    2, 0x09 /* Protected */,
       9,    4,   52,    2, 0x29 /* Protected | MethodCloned */,
       9,    3,   61,    2, 0x29 /* Protected | MethodCloned */,

 // slots: parameters
    QMetaType::QIcon, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Int, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 13, 0x80000000 | 5, 0x80000000 | 7,   11,   12,   14,    6,    8,
    QMetaType::Int, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 13, 0x80000000 | 5,   11,   12,   14,    6,
    QMetaType::Int, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 13,   11,   12,   14,

       0        // eod
};

void ctkProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ctkProxyStyle *_t = static_cast<ctkProxyStyle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])),(*reinterpret_cast< const QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QStyleOption*(*)>(_a[4])),(*reinterpret_cast< const QWidget*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QStyleOption*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->layoutSpacingImplementation((*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[1])),(*reinterpret_cast< QSizePolicy::ControlType(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject ctkProxyStyle::staticMetaObject = {
    { &QProxyStyle::staticMetaObject, qt_meta_stringdata_ctkProxyStyle.data,
      qt_meta_data_ctkProxyStyle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ctkProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkProxyStyle.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int ctkProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
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
