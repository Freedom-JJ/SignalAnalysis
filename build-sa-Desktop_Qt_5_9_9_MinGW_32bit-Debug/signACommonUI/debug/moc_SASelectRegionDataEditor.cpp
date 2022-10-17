/****************************************************************************
** Meta object code from reading C++ file 'SASelectRegionDataEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/Chart2D/SASelectRegionDataEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SASelectRegionDataEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SASelectRegionDataEditor_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SASelectRegionDataEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SASelectRegionDataEditor_t qt_meta_stringdata_SASelectRegionDataEditor = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SASelectRegionDataEditor"
QT_MOC_LITERAL(1, 25, 27), // "onCurrentSelectItemsChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 19), // "QList<QwtPlotItem*>"
QT_MOC_LITERAL(4, 74, 5) // "items"

    },
    "SASelectRegionDataEditor\0"
    "onCurrentSelectItemsChanged\0\0"
    "QList<QwtPlotItem*>\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SASelectRegionDataEditor[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void SASelectRegionDataEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SASelectRegionDataEditor *_t = static_cast<SASelectRegionDataEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCurrentSelectItemsChanged((*reinterpret_cast< const QList<QwtPlotItem*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QwtPlotItem*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject SASelectRegionDataEditor::staticMetaObject = {
    { &SAAbstractPlotEditor::staticMetaObject, qt_meta_stringdata_SASelectRegionDataEditor.data,
      qt_meta_data_SASelectRegionDataEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SASelectRegionDataEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SASelectRegionDataEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SASelectRegionDataEditor.stringdata0))
        return static_cast<void*>(this);
    return SAAbstractPlotEditor::qt_metacast(_clname);
}

int SASelectRegionDataEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SAAbstractPlotEditor::qt_metacall(_c, _id, _a);
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
