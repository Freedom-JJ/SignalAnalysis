/****************************************************************************
** Meta object code from reading C++ file 'SAMessageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/widget/SAMessageWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAMessageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAMessageWidget_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAMessageWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAMessageWidget_t qt_meta_stringdata_SAMessageWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SAMessageWidget"
QT_MOC_LITERAL(1, 16, 9), // "addString"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "str"
QT_MOC_LITERAL(4, 31, 3), // "clr"
QT_MOC_LITERAL(5, 35, 14), // "insertTimeLine"
QT_MOC_LITERAL(6, 50, 17) // "addStringWithTime"

    },
    "SAMessageWidget\0addString\0\0str\0clr\0"
    "insertTimeLine\0addStringWithTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAMessageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a /* Public */,
       1,    1,   49,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   52,    2, 0x0a /* Public */,
       5,    0,   55,    2, 0x2a /* Public | MethodCloned */,
       6,    2,   56,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void SAMessageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAMessageWidget *_t = static_cast<SAMessageWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 1: _t->addString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->insertTimeLine((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->insertTimeLine(); break;
        case 4: _t->addStringWithTime((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 5: _t->addStringWithTime((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SAMessageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAMessageWidget.data,
      qt_meta_data_SAMessageWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAMessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAMessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAMessageWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAMessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
