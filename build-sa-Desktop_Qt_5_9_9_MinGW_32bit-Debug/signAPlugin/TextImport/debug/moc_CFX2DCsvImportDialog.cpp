/****************************************************************************
** Meta object code from reading C++ file 'CFX2DCsvImportDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/signAPlugin/TextImport/CFX2DCsvImportDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CFX2DCsvImportDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CFX2DCsvImportDialog_t {
    QByteArrayData data[9];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CFX2DCsvImportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CFX2DCsvImportDialog_t qt_meta_stringdata_CFX2DCsvImportDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CFX2DCsvImportDialog"
QT_MOC_LITERAL(1, 21, 10), // "addCsvFile"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "removeFile"
QT_MOC_LITERAL(4, 44, 6), // "parser"
QT_MOC_LITERAL(5, 51, 37), // "on_comboBox_codec_currentInde..."
QT_MOC_LITERAL(6, 89, 4), // "arg1"
QT_MOC_LITERAL(7, 94, 24), // "on_pushButton_ok_clicked"
QT_MOC_LITERAL(8, 119, 28) // "on_pushButton_cancel_clicked"

    },
    "CFX2DCsvImportDialog\0addCsvFile\0\0"
    "removeFile\0parser\0"
    "on_comboBox_codec_currentIndexChanged\0"
    "arg1\0on_pushButton_ok_clicked\0"
    "on_pushButton_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CFX2DCsvImportDialog[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CFX2DCsvImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CFX2DCsvImportDialog *_t = static_cast<CFX2DCsvImportDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addCsvFile(); break;
        case 1: _t->removeFile(); break;
        case 2: _t->parser(); break;
        case 3: _t->on_comboBox_codec_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_ok_clicked(); break;
        case 5: _t->on_pushButton_cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CFX2DCsvImportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CFX2DCsvImportDialog.data,
      qt_meta_data_CFX2DCsvImportDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CFX2DCsvImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CFX2DCsvImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CFX2DCsvImportDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CFX2DCsvImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
