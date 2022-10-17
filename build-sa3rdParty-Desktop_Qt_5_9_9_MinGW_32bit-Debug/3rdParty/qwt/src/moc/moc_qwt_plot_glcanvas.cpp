/****************************************************************************
** Meta object code from reading C++ file 'qwt_plot_glcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/3rdParty/qwt/src/qwt_plot_glcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt_plot_glcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QwtPlotGLCanvas_t {
    QByteArrayData data[19];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QwtPlotGLCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QwtPlotGLCanvas_t qt_meta_stringdata_QwtPlotGLCanvas = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QwtPlotGLCanvas"
QT_MOC_LITERAL(1, 16, 6), // "replot"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "borderPath"
QT_MOC_LITERAL(4, 35, 12), // "QPainterPath"
QT_MOC_LITERAL(5, 48, 11), // "frameShadow"
QT_MOC_LITERAL(6, 60, 6), // "Shadow"
QT_MOC_LITERAL(7, 67, 10), // "frameShape"
QT_MOC_LITERAL(8, 78, 5), // "Shape"
QT_MOC_LITERAL(9, 84, 9), // "lineWidth"
QT_MOC_LITERAL(10, 94, 12), // "midLineWidth"
QT_MOC_LITERAL(11, 107, 10), // "frameWidth"
QT_MOC_LITERAL(12, 118, 9), // "frameRect"
QT_MOC_LITERAL(13, 128, 5), // "Plain"
QT_MOC_LITERAL(14, 134, 6), // "Raised"
QT_MOC_LITERAL(15, 141, 6), // "Sunken"
QT_MOC_LITERAL(16, 148, 7), // "NoFrame"
QT_MOC_LITERAL(17, 156, 3), // "Box"
QT_MOC_LITERAL(18, 160, 5) // "Panel"

    },
    "QwtPlotGLCanvas\0replot\0\0borderPath\0"
    "QPainterPath\0frameShadow\0Shadow\0"
    "frameShape\0Shape\0lineWidth\0midLineWidth\0"
    "frameWidth\0frameRect\0Plain\0Raised\0"
    "Sunken\0NoFrame\0Box\0Panel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QwtPlotGLCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   28, // properties
       2,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::QRect,    2,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, 0x80000000 | 8, 0x0009510b,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Int, 0x00095001,
      12, QMetaType::QRect, 0x00094001,

 // enums: name, flags, count, data
       6, 0x0,    3,   54,
       8, 0x0,    3,   60,

 // enum data: key, value
      13, uint(QwtPlotGLCanvas::Plain),
      14, uint(QwtPlotGLCanvas::Raised),
      15, uint(QwtPlotGLCanvas::Sunken),
      16, uint(QwtPlotGLCanvas::NoFrame),
      17, uint(QwtPlotGLCanvas::Box),
      18, uint(QwtPlotGLCanvas::Panel),

       0        // eod
};

void QwtPlotGLCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QwtPlotGLCanvas *_t = static_cast<QwtPlotGLCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replot(); break;
        case 1: { QPainterPath _r = _t->borderPath((*reinterpret_cast< const QRect(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPainterPath*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QwtPlotGLCanvas *_t = static_cast<QwtPlotGLCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Shadow*>(_v) = _t->frameShadow(); break;
        case 1: *reinterpret_cast< Shape*>(_v) = _t->frameShape(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->midLineWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->frameWidth(); break;
        case 5: *reinterpret_cast< QRect*>(_v) = _t->frameRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QwtPlotGLCanvas *_t = static_cast<QwtPlotGLCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrameShadow(*reinterpret_cast< Shadow*>(_v)); break;
        case 1: _t->setFrameShape(*reinterpret_cast< Shape*>(_v)); break;
        case 2: _t->setLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMidLineWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QwtPlotGLCanvas::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_QwtPlotGLCanvas.data,
      qt_meta_data_QwtPlotGLCanvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QwtPlotGLCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QwtPlotGLCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QwtPlotGLCanvas.stringdata0))
        return static_cast<void*>(this);
    return QGLWidget::qt_metacast(_clname);
}

int QwtPlotGLCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
