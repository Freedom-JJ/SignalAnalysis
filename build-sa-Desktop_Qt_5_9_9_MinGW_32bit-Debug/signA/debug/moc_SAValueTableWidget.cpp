/****************************************************************************
** Meta object code from reading C++ file 'SAValueTableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/widget/SAValueTableWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAValueTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAValueTableWidget_t {
    QByteArrayData data[13];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAValueTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAValueTableWidget_t qt_meta_stringdata_SAValueTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SAValueTableWidget"
QT_MOC_LITERAL(1, 19, 37), // "onTableViewCustomContextMenuR..."
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 3), // "pos"
QT_MOC_LITERAL(4, 62, 28), // "onActionToLinerDataTriggered"
QT_MOC_LITERAL(5, 91, 35), // "onActionToPointFVectorDataTri..."
QT_MOC_LITERAL(6, 127, 13), // "onDataRemoved"
QT_MOC_LITERAL(7, 141, 23), // "QList<SAAbstractDatas*>"
QT_MOC_LITERAL(8, 165, 16), // "dataBeDeletedPtr"
QT_MOC_LITERAL(9, 182, 23), // "onActionInsertTriggered"
QT_MOC_LITERAL(10, 206, 23), // "onActionDeleteTriggered"
QT_MOC_LITERAL(11, 230, 22), // "onActionPasteTriggered"
QT_MOC_LITERAL(12, 253, 21) // "onActionCopyTriggered"

    },
    "SAValueTableWidget\0"
    "onTableViewCustomContextMenuRequested\0"
    "\0pos\0onActionToLinerDataTriggered\0"
    "onActionToPointFVectorDataTriggered\0"
    "onDataRemoved\0QList<SAAbstractDatas*>\0"
    "dataBeDeletedPtr\0onActionInsertTriggered\0"
    "onActionDeleteTriggered\0onActionPasteTriggered\0"
    "onActionCopyTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAValueTableWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SAValueTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAValueTableWidget *_t = static_cast<SAValueTableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTableViewCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->onActionToLinerDataTriggered(); break;
        case 2: _t->onActionToPointFVectorDataTriggered(); break;
        case 3: _t->onDataRemoved((*reinterpret_cast< const QList<SAAbstractDatas*>(*)>(_a[1]))); break;
        case 4: _t->onActionInsertTriggered(); break;
        case 5: _t->onActionDeleteTriggered(); break;
        case 6: _t->onActionPasteTriggered(); break;
        case 7: _t->onActionCopyTriggered(); break;
        default: ;
        }
    }
}

const QMetaObject SAValueTableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SAValueTableWidget.data,
      qt_meta_data_SAValueTableWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAValueTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAValueTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAValueTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAValueTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
