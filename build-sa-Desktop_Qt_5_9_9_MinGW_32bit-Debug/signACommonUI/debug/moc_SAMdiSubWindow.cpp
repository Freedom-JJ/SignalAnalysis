/****************************************************************************
** Meta object code from reading C++ file 'SAMdiSubWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signACommonUI/SAMdiSubWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAMdiSubWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAMdiSubWindow_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAMdiSubWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAMdiSubWindow_t qt_meta_stringdata_SAMdiSubWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SAMdiSubWindow"
QT_MOC_LITERAL(1, 15, 12), // "closedWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "SAMdiSubWindow*"
QT_MOC_LITERAL(4, 45, 12), // "hiddenWindow"
QT_MOC_LITERAL(5, 58, 15) // "showContextMenu"

    },
    "SAMdiSubWindow\0closedWindow\0\0"
    "SAMdiSubWindow*\0hiddenWindow\0"
    "showContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAMdiSubWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void SAMdiSubWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SAMdiSubWindow *_t = static_cast<SAMdiSubWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closedWindow((*reinterpret_cast< SAMdiSubWindow*(*)>(_a[1]))); break;
        case 1: _t->hiddenWindow((*reinterpret_cast< SAMdiSubWindow*(*)>(_a[1]))); break;
        case 2: _t->showContextMenu(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SAMdiSubWindow::*_t)(SAMdiSubWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAMdiSubWindow::closedWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SAMdiSubWindow::*_t)(SAMdiSubWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAMdiSubWindow::hiddenWindow)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SAMdiSubWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAMdiSubWindow::showContextMenu)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SAMdiSubWindow::staticMetaObject = {
    { &QMdiSubWindow::staticMetaObject, qt_meta_stringdata_SAMdiSubWindow.data,
      qt_meta_data_SAMdiSubWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SAMdiSubWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAMdiSubWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAMdiSubWindow.stringdata0))
        return static_cast<void*>(this);
    return QMdiSubWindow::qt_metacast(_clname);
}

int SAMdiSubWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiSubWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SAMdiSubWindow::closedWindow(SAMdiSubWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAMdiSubWindow::hiddenWindow(SAMdiSubWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SAMdiSubWindow::showContextMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
