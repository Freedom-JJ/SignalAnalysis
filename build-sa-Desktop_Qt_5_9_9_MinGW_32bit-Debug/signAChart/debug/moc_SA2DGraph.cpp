/****************************************************************************
** Meta object code from reading C++ file 'SA2DGraph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signAChart/SA2DGraph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SA2DGraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScrollBar_t {
    QByteArrayData data[12];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrollBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrollBar_t qt_meta_stringdata_ScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ScrollBar"
QT_MOC_LITERAL(1, 10, 11), // "sliderMoved"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "Qt::Orientation"
QT_MOC_LITERAL(4, 39, 12), // "valueChanged"
QT_MOC_LITERAL(5, 52, 7), // "setBase"
QT_MOC_LITERAL(6, 60, 3), // "min"
QT_MOC_LITERAL(7, 64, 3), // "max"
QT_MOC_LITERAL(8, 68, 10), // "moveSlider"
QT_MOC_LITERAL(9, 79, 17), // "catchValueChanged"
QT_MOC_LITERAL(10, 97, 5), // "value"
QT_MOC_LITERAL(11, 103, 16) // "catchSliderMoved"

    },
    "ScrollBar\0sliderMoved\0\0Qt::Orientation\0"
    "valueChanged\0setBase\0min\0max\0moveSlider\0"
    "catchValueChanged\0value\0catchSliderMoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrollBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       4,    3,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   58,    2, 0x0a /* Public */,
       8,    2,   63,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void ScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScrollBar *_t = static_cast<ScrollBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderMoved((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->setBase((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->moveSlider((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->catchValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->catchSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ScrollBar::*_t)(Qt::Orientation , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScrollBar::sliderMoved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ScrollBar::*_t)(Qt::Orientation , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScrollBar::valueChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ScrollBar::staticMetaObject = {
    { &QScrollBar::staticMetaObject, qt_meta_stringdata_ScrollBar.data,
      qt_meta_data_ScrollBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollBar::qt_metacast(_clname);
}

int ScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ScrollBar::sliderMoved(Qt::Orientation _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScrollBar::valueChanged(Qt::Orientation _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ScrollZoomer_t {
    QByteArrayData data[9];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrollZoomer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrollZoomer_t qt_meta_stringdata_ScrollZoomer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ScrollZoomer"
QT_MOC_LITERAL(1, 13, 19), // "on_enable_scrollBar"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "enable"
QT_MOC_LITERAL(4, 41, 14), // "scrollBarMoved"
QT_MOC_LITERAL(5, 56, 15), // "Qt::Orientation"
QT_MOC_LITERAL(6, 72, 1), // "o"
QT_MOC_LITERAL(7, 74, 3), // "min"
QT_MOC_LITERAL(8, 78, 3) // "max"

    },
    "ScrollZoomer\0on_enable_scrollBar\0\0"
    "enable\0scrollBarMoved\0Qt::Orientation\0"
    "o\0min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrollZoomer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    3,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double,    6,    7,    8,

       0        // eod
};

void ScrollZoomer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScrollZoomer *_t = static_cast<ScrollZoomer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_enable_scrollBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->scrollBarMoved((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject ScrollZoomer::staticMetaObject = {
    { &QwtPlotZoomer::staticMetaObject, qt_meta_stringdata_ScrollZoomer.data,
      qt_meta_data_ScrollZoomer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScrollZoomer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrollZoomer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrollZoomer.stringdata0))
        return static_cast<void*>(this);
    return QwtPlotZoomer::qt_metacast(_clname);
}

int ScrollZoomer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlotZoomer::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_Zoomer_qwt_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Zoomer_qwt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Zoomer_qwt_t qt_meta_stringdata_Zoomer_qwt = {
    {
QT_MOC_LITERAL(0, 0, 10) // "Zoomer_qwt"

    },
    "Zoomer_qwt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Zoomer_qwt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Zoomer_qwt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Zoomer_qwt::staticMetaObject = {
    { &ScrollZoomer::staticMetaObject, qt_meta_stringdata_Zoomer_qwt.data,
      qt_meta_data_Zoomer_qwt,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Zoomer_qwt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Zoomer_qwt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Zoomer_qwt.stringdata0))
        return static_cast<void*>(this);
    return ScrollZoomer::qt_metacast(_clname);
}

int Zoomer_qwt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScrollZoomer::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SA2DGraph_t {
    QByteArrayData data[40];
    char stringdata0[560];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SA2DGraph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SA2DGraph_t qt_meta_stringdata_SA2DGraph = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SA2DGraph"
QT_MOC_LITERAL(1, 10, 19), // "enableZoomerChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "enable"
QT_MOC_LITERAL(4, 38, 19), // "enablePickerChanged"
QT_MOC_LITERAL(5, 58, 17), // "enableGridChanged"
QT_MOC_LITERAL(6, 76, 18), // "enableGridXChanged"
QT_MOC_LITERAL(7, 95, 18), // "enableGridYChanged"
QT_MOC_LITERAL(8, 114, 21), // "enableGridXMinChanged"
QT_MOC_LITERAL(9, 136, 21), // "enableGridYMinChanged"
QT_MOC_LITERAL(10, 158, 19), // "enablePannerChanged"
QT_MOC_LITERAL(11, 178, 19), // "enableLegendChanged"
QT_MOC_LITERAL(12, 198, 24), // "enableLegendPanelChanged"
QT_MOC_LITERAL(13, 223, 24), // "enableYDataPickerChanged"
QT_MOC_LITERAL(14, 248, 25), // "enableXYDataPickerChanged"
QT_MOC_LITERAL(15, 274, 12), // "enableZoomer"
QT_MOC_LITERAL(16, 287, 11), // "setZoomBase"
QT_MOC_LITERAL(17, 299, 12), // "setZoomReset"
QT_MOC_LITERAL(18, 312, 6), // "zoomIn"
QT_MOC_LITERAL(19, 319, 7), // "zoomOut"
QT_MOC_LITERAL(20, 327, 16), // "zoomInCompatible"
QT_MOC_LITERAL(21, 344, 12), // "enablePicker"
QT_MOC_LITERAL(22, 357, 10), // "enableGrid"
QT_MOC_LITERAL(23, 368, 6), // "isShow"
QT_MOC_LITERAL(24, 375, 11), // "enableGridX"
QT_MOC_LITERAL(25, 387, 11), // "enableGridY"
QT_MOC_LITERAL(26, 399, 14), // "enableGridXMin"
QT_MOC_LITERAL(27, 414, 14), // "enableGridYMin"
QT_MOC_LITERAL(28, 429, 12), // "enablePanner"
QT_MOC_LITERAL(29, 442, 12), // "enableLegend"
QT_MOC_LITERAL(30, 455, 17), // "enableLegendPanel"
QT_MOC_LITERAL(31, 473, 10), // "markYValue"
QT_MOC_LITERAL(32, 484, 4), // "data"
QT_MOC_LITERAL(33, 489, 8), // "strLabel"
QT_MOC_LITERAL(34, 498, 3), // "clr"
QT_MOC_LITERAL(35, 502, 8), // "showItem"
QT_MOC_LITERAL(36, 511, 8), // "itemInfo"
QT_MOC_LITERAL(37, 520, 2), // "on"
QT_MOC_LITERAL(38, 523, 17), // "enableYDataPicker"
QT_MOC_LITERAL(39, 541, 18) // "enableXYDataPicker"

    },
    "SA2DGraph\0enableZoomerChanged\0\0enable\0"
    "enablePickerChanged\0enableGridChanged\0"
    "enableGridXChanged\0enableGridYChanged\0"
    "enableGridXMinChanged\0enableGridYMinChanged\0"
    "enablePannerChanged\0enableLegendChanged\0"
    "enableLegendPanelChanged\0"
    "enableYDataPickerChanged\0"
    "enableXYDataPickerChanged\0enableZoomer\0"
    "setZoomBase\0setZoomReset\0zoomIn\0zoomOut\0"
    "zoomInCompatible\0enablePicker\0enableGrid\0"
    "isShow\0enableGridX\0enableGridY\0"
    "enableGridXMin\0enableGridYMin\0"
    "enablePanner\0enableLegend\0enableLegendPanel\0"
    "markYValue\0data\0strLabel\0clr\0showItem\0"
    "itemInfo\0on\0enableYDataPicker\0"
    "enableXYDataPicker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SA2DGraph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       4,    1,  237,    2, 0x06 /* Public */,
       5,    1,  240,    2, 0x06 /* Public */,
       6,    1,  243,    2, 0x06 /* Public */,
       7,    1,  246,    2, 0x06 /* Public */,
       8,    1,  249,    2, 0x06 /* Public */,
       9,    1,  252,    2, 0x06 /* Public */,
      10,    1,  255,    2, 0x06 /* Public */,
      11,    1,  258,    2, 0x06 /* Public */,
      12,    1,  261,    2, 0x06 /* Public */,
      13,    1,  264,    2, 0x06 /* Public */,
      14,    1,  267,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  270,    2, 0x0a /* Public */,
      15,    0,  273,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  274,    2, 0x0a /* Public */,
      17,    0,  275,    2, 0x0a /* Public */,
      18,    0,  276,    2, 0x0a /* Public */,
      19,    0,  277,    2, 0x0a /* Public */,
      20,    0,  278,    2, 0x0a /* Public */,
      21,    1,  279,    2, 0x0a /* Public */,
      21,    0,  282,    2, 0x2a /* Public | MethodCloned */,
      22,    1,  283,    2, 0x0a /* Public */,
      22,    0,  286,    2, 0x2a /* Public | MethodCloned */,
      24,    1,  287,    2, 0x0a /* Public */,
      24,    0,  290,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  291,    2, 0x0a /* Public */,
      25,    0,  294,    2, 0x2a /* Public | MethodCloned */,
      26,    1,  295,    2, 0x0a /* Public */,
      26,    0,  298,    2, 0x2a /* Public | MethodCloned */,
      27,    1,  299,    2, 0x0a /* Public */,
      27,    0,  302,    2, 0x2a /* Public | MethodCloned */,
      28,    1,  303,    2, 0x0a /* Public */,
      28,    0,  306,    2, 0x2a /* Public | MethodCloned */,
      29,    1,  307,    2, 0x0a /* Public */,
      29,    0,  310,    2, 0x2a /* Public | MethodCloned */,
      30,    1,  311,    2, 0x0a /* Public */,
      30,    0,  314,    2, 0x2a /* Public | MethodCloned */,
      31,    3,  315,    2, 0x0a /* Public */,
      31,    2,  322,    2, 0x2a /* Public | MethodCloned */,
      35,    2,  327,    2, 0x0a /* Public */,
      38,    1,  332,    2, 0x0a /* Public */,
      38,    0,  335,    2, 0x2a /* Public | MethodCloned */,
      39,    1,  336,    2, 0x0a /* Public */,
      39,    0,  339,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::QString, QMetaType::QColor,   32,   33,   34,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   32,   33,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,   36,   37,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void SA2DGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SA2DGraph *_t = static_cast<SA2DGraph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableZoomerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enablePickerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enableGridChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableGridXChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enableGridYChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enableGridXMinChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->enableGridYMinChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->enablePannerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->enableLegendChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->enableLegendPanelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->enableYDataPickerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->enableXYDataPickerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->enableZoomer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->enableZoomer(); break;
        case 14: _t->setZoomBase(); break;
        case 15: _t->setZoomReset(); break;
        case 16: _t->zoomIn(); break;
        case 17: _t->zoomOut(); break;
        case 18: _t->zoomInCompatible(); break;
        case 19: _t->enablePicker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->enablePicker(); break;
        case 21: _t->enableGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->enableGrid(); break;
        case 23: _t->enableGridX((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->enableGridX(); break;
        case 25: _t->enableGridY((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->enableGridY(); break;
        case 27: _t->enableGridXMin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->enableGridXMin(); break;
        case 29: _t->enableGridYMin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->enableGridYMin(); break;
        case 31: _t->enablePanner((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->enablePanner(); break;
        case 33: _t->enableLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->enableLegend(); break;
        case 35: _t->enableLegendPanel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->enableLegendPanel(); break;
        case 37: _t->markYValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 38: _t->markYValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 39: _t->showItem((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->enableYDataPicker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->enableYDataPicker(); break;
        case 42: _t->enableXYDataPicker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->enableXYDataPicker(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableZoomerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enablePickerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableGridChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableGridXChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableGridYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableGridXMinChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableGridYMinChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enablePannerChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableLegendChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableLegendPanelChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableYDataPickerChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (SA2DGraph::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SA2DGraph::enableXYDataPickerChanged)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject SA2DGraph::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_SA2DGraph.data,
      qt_meta_data_SA2DGraph,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SA2DGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SA2DGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SA2DGraph.stringdata0))
        return static_cast<void*>(this);
    return QwtPlot::qt_metacast(_clname);
}

int SA2DGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void SA2DGraph::enableZoomerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SA2DGraph::enablePickerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SA2DGraph::enableGridChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SA2DGraph::enableGridXChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SA2DGraph::enableGridYChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SA2DGraph::enableGridXMinChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SA2DGraph::enableGridYMinChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SA2DGraph::enablePannerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SA2DGraph::enableLegendChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SA2DGraph::enableLegendPanelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SA2DGraph::enableYDataPickerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SA2DGraph::enableXYDataPickerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
