/****************************************************************************
** Meta object code from reading C++ file 'productdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/View/productdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'productdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProductDialog_t {
    QByteArrayData data[7];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProductDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProductDialog_t qt_meta_stringdata_ProductDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProductDialog"
QT_MOC_LITERAL(1, 14, 18), // "on_openBtn_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "on_changeBtn_clicked"
QT_MOC_LITERAL(4, 55, 17), // "on_newBtn_clicked"
QT_MOC_LITERAL(5, 73, 20), // "on_searchBtn_clicked"
QT_MOC_LITERAL(6, 94, 20) // "on_deleteBtn_clicked"

    },
    "ProductDialog\0on_openBtn_clicked\0\0"
    "on_changeBtn_clicked\0on_newBtn_clicked\0"
    "on_searchBtn_clicked\0on_deleteBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProductDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProductDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProductDialog *_t = static_cast<ProductDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openBtn_clicked(); break;
        case 1: _t->on_changeBtn_clicked(); break;
        case 2: _t->on_newBtn_clicked(); break;
        case 3: _t->on_searchBtn_clicked(); break;
        case 4: _t->on_deleteBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ProductDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProductDialog.data,
      qt_meta_data_ProductDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProductDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProductDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProductDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProductDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
