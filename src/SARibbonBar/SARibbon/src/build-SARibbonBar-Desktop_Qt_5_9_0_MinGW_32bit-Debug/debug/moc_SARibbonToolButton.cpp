/****************************************************************************
** Meta object code from reading C++ file 'SARibbonToolButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SARibbonBar/SARibbonToolButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SARibbonToolButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SARibbonToolButton_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SARibbonToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SARibbonToolButton_t qt_meta_stringdata_SARibbonToolButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SARibbonToolButton"
QT_MOC_LITERAL(1, 19, 16), // "RibbonButtonType"
QT_MOC_LITERAL(2, 36, 11), // "LargeButton"
QT_MOC_LITERAL(3, 48, 11) // "SmallButton"

    },
    "SARibbonToolButton\0RibbonButtonType\0"
    "LargeButton\0SmallButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SARibbonToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(SARibbonToolButton::LargeButton),
       3, uint(SARibbonToolButton::SmallButton),

       0        // eod
};

void SARibbonToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SARibbonToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_SARibbonToolButton.data,
      qt_meta_data_SARibbonToolButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SARibbonToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SARibbonToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SARibbonToolButton.stringdata0))
        return static_cast<void*>(const_cast< SARibbonToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int SARibbonToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
