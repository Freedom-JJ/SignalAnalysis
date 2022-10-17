/****************************************************************************
** Meta object code from reading C++ file 'SAAbstractRegionSelectEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signAChart/SAAbstractRegionSelectEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAAbstractRegionSelectEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAAbstractRegionSelectEditor_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAAbstractRegionSelectEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAAbstractRegionSelectEditor_t qt_meta_stringdata_SAAbstractRegionSelectEditor = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SAAbstractRegionSelectEditor"
QT_MOC_LITERAL(1, 29, 15), // "finishSelection"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 12), // "QPainterPath"
QT_MOC_LITERAL(4, 59, 5), // "shape"
QT_MOC_LITERAL(5, 65, 13), // "SelectionMode"
QT_MOC_LITERAL(6, 79, 15), // "SingleSelection"
QT_MOC_LITERAL(7, 95, 19), // "AdditionalSelection"
QT_MOC_LITERAL(8, 115, 20), // "SubtractionSelection"
QT_MOC_LITERAL(9, 136, 21) // "IntersectionSelection"

    },
    "SAAbstractRegionSelectEditor\0"
    "finishSelection\0\0QPainterPath\0shape\0"
    "SelectionMode\0SingleSelection\0"
    "AdditionalSelection\0SubtractionSelection\0"
    "IntersectionSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAAbstractRegionSelectEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // enums: name, flags, count, data
       5, 0x0,    4,   26,

 // enum data: key, value
       6, uint(SAAbstractRegionSelectEditor::SingleSelection),
       7, uint(SAAbstractRegionSelectEditor::AdditionalSelection),
       8, uint(SAAbstractRegionSelectEditor::SubtractionSelection),
       9, uint(SAAbstractRegionSelectEditor::IntersectionSelection),

       0        // eod
};

void SAAbstractRegionSelectEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAAbstractRegionSelectEditor *_t = static_cast<SAAbstractRegionSelectEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishSelection((*reinterpret_cast< const QPainterPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAAbstractRegionSelectEditor::*_t)(const QPainterPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAAbstractRegionSelectEditor::finishSelection)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SAAbstractRegionSelectEditor::staticMetaObject = {
    { &SAAbstractPlotEditor::staticMetaObject, qt_meta_stringdata_SAAbstractRegionSelectEditor.data,
      qt_meta_data_SAAbstractRegionSelectEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAAbstractRegionSelectEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAAbstractRegionSelectEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAAbstractRegionSelectEditor.stringdata0))
        return static_cast<void*>(this);
    return SAAbstractPlotEditor::qt_metacast(_clname);
}

int SAAbstractRegionSelectEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SAAbstractRegionSelectEditor::finishSelection(const QPainterPath & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
