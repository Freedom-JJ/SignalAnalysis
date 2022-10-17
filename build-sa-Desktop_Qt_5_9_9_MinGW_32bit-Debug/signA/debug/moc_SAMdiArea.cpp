/****************************************************************************
** Meta object code from reading C++ file 'SAMdiArea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signA/mainWindows/SAMdiArea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAMdiArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAMdiArea_t {
    QByteArrayData data[10];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAMdiArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAMdiArea_t qt_meta_stringdata_SAMdiArea = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SAMdiArea"
QT_MOC_LITERAL(1, 10, 16), // "subWindowsClosed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "SAMdiSubWindow*"
QT_MOC_LITERAL(4, 44, 3), // "sub"
QT_MOC_LITERAL(5, 48, 16), // "subWindowsHidden"
QT_MOC_LITERAL(6, 65, 25), // "subWindowsShowContextMenu"
QT_MOC_LITERAL(7, 91, 17), // "onSubWindowClosed"
QT_MOC_LITERAL(8, 109, 17), // "onSubWindowHidden"
QT_MOC_LITERAL(9, 127, 26) // "onSubWindowShowContextMenu"

    },
    "SAMdiArea\0subWindowsClosed\0\0SAMdiSubWindow*\0"
    "sub\0subWindowsHidden\0subWindowsShowContextMenu\0"
    "onSubWindowClosed\0onSubWindowHidden\0"
    "onSubWindowShowContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAMdiArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void SAMdiArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAMdiArea *_t = static_cast<SAMdiArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subWindowsClosed((*reinterpret_cast< SAMdiSubWindow*(*)>(_a[1]))); break;
        case 1: _t->subWindowsHidden((*reinterpret_cast< SAMdiSubWindow*(*)>(_a[1]))); break;
        case 2: _t->subWindowsShowContextMenu(); break;
        case 3: _t->onSubWindowClosed((*reinterpret_cast< SAMdiSubWindow*(*)>(_a[1]))); break;
        case 4: _t->onSubWindowHidden((*reinterpret_cast< SAMdiSubWindow*(*)>(_a[1]))); break;
        case 5: _t->onSubWindowShowContextMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAMdiSubWindow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAMdiSubWindow* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAMdiSubWindow* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SAMdiSubWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAMdiArea::*_t)(SAMdiSubWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAMdiArea::subWindowsClosed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SAMdiArea::*_t)(SAMdiSubWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAMdiArea::subWindowsHidden)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SAMdiArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAMdiArea::subWindowsShowContextMenu)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SAMdiArea::staticMetaObject = {
    { &QMdiArea::staticMetaObject, qt_meta_stringdata_SAMdiArea.data,
      qt_meta_data_SAMdiArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAMdiArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAMdiArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAMdiArea.stringdata0))
        return static_cast<void*>(this);
    return QMdiArea::qt_metacast(_clname);
}

int SAMdiArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SAMdiArea::subWindowsClosed(SAMdiSubWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAMdiArea::subWindowsHidden(SAMdiSubWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SAMdiArea::subWindowsShowContextMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
