/****************************************************************************
** Meta object code from reading C++ file 'SAEllipseRegionSelectEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signAChart/SAEllipseRegionSelectEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAEllipseRegionSelectEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAEllipseRegionSelectEditor_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAEllipseRegionSelectEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAEllipseRegionSelectEditor_t qt_meta_stringdata_SAEllipseRegionSelectEditor = {
    {
QT_MOC_LITERAL(0, 0, 27), // "SAEllipseRegionSelectEditor"
QT_MOC_LITERAL(1, 28, 14), // "onItemAttached"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "QwtPlotItem*"
QT_MOC_LITERAL(4, 57, 4), // "item"
QT_MOC_LITERAL(5, 62, 2) // "on"

    },
    "SAEllipseRegionSelectEditor\0onItemAttached\0"
    "\0QwtPlotItem*\0item\0on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAEllipseRegionSelectEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,

       0        // eod
};

void SAEllipseRegionSelectEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAEllipseRegionSelectEditor *_t = static_cast<SAEllipseRegionSelectEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onItemAttached((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject SAEllipseRegionSelectEditor::staticMetaObject = {
    { &SAAbstractRegionSelectEditor::staticMetaObject, qt_meta_stringdata_SAEllipseRegionSelectEditor.data,
      qt_meta_data_SAEllipseRegionSelectEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAEllipseRegionSelectEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAEllipseRegionSelectEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAEllipseRegionSelectEditor.stringdata0))
        return static_cast<void*>(this);
    return SAAbstractRegionSelectEditor::qt_metacast(_clname);
}

int SAEllipseRegionSelectEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SAAbstractRegionSelectEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
