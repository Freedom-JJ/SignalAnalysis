/****************************************************************************
** Meta object code from reading C++ file 'NewProjectDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/View/NewProjectDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewProjectDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewProjectDialog_t {
    QByteArrayData data[8];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewProjectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewProjectDialog_t qt_meta_stringdata_NewProjectDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "NewProjectDialog"
QT_MOC_LITERAL(1, 17, 29), // "on_lineEdit_3_editingFinished"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 22), // "on_previousbtn_clicked"
QT_MOC_LITERAL(4, 71, 18), // "on_nextbtn_clicked"
QT_MOC_LITERAL(5, 90, 25), // "on_lineEdit_3_textChanged"
QT_MOC_LITERAL(6, 116, 4), // "arg1"
QT_MOC_LITERAL(7, 121, 16) // "on_okbtn_clicked"

    },
    "NewProjectDialog\0on_lineEdit_3_editingFinished\0"
    "\0on_previousbtn_clicked\0on_nextbtn_clicked\0"
    "on_lineEdit_3_textChanged\0arg1\0"
    "on_okbtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewProjectDialog[] = {

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
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void NewProjectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewProjectDialog *_t = static_cast<NewProjectDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_3_editingFinished(); break;
        case 1: _t->on_previousbtn_clicked(); break;
        case 2: _t->on_nextbtn_clicked(); break;
        case 3: _t->on_lineEdit_3_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_okbtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject NewProjectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewProjectDialog.data,
      qt_meta_data_NewProjectDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NewProjectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewProjectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewProjectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewProjectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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