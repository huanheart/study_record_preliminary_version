/****************************************************************************
** Meta object code from reading C++ file 'qtmaterialslider_internal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../components/qtmaterialslider_internal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaterialslider_internal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtMaterialSliderStateMachine_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialSliderStateMachine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialSliderStateMachine_t qt_meta_stringdata_QtMaterialSliderStateMachine = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QtMaterialSliderStateMachine"

    },
    "QtMaterialSliderStateMachine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialSliderStateMachine[] = {

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

void QtMaterialSliderStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtMaterialSliderStateMachine::staticMetaObject = {
    { &QStateMachine::staticMetaObject, qt_meta_stringdata_QtMaterialSliderStateMachine.data,
      qt_meta_data_QtMaterialSliderStateMachine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialSliderStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialSliderStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialSliderStateMachine.stringdata0))
        return static_cast<void*>(this);
    return QStateMachine::qt_metacast(_clname);
}

int QtMaterialSliderStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStateMachine::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtMaterialSliderThumb_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialSliderThumb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialSliderThumb_t qt_meta_stringdata_QtMaterialSliderThumb = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtMaterialSliderThumb"
QT_MOC_LITERAL(1, 22, 8), // "diameter"
QT_MOC_LITERAL(2, 31, 11), // "borderWidth"
QT_MOC_LITERAL(3, 43, 11), // "borderColor"
QT_MOC_LITERAL(4, 55, 9), // "fillColor"
QT_MOC_LITERAL(5, 65, 8), // "haloSize"
QT_MOC_LITERAL(6, 74, 9) // "haloColor"

    },
    "QtMaterialSliderThumb\0diameter\0"
    "borderWidth\0borderColor\0fillColor\0"
    "haloSize\0haloColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialSliderThumb[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QReal, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QColor, 0x00095103,

       0        // eod
};

void QtMaterialSliderThumb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QtMaterialSliderThumb *_t = static_cast<QtMaterialSliderThumb *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->diameter(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->borderWidth(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->borderColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->fillColor(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->haloSize(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->haloColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QtMaterialSliderThumb *_t = static_cast<QtMaterialSliderThumb *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDiameter(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setBorderWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setFillColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setHaloSize(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setHaloColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtMaterialSliderThumb::staticMetaObject = {
    { &QtMaterialOverlayWidget::staticMetaObject, qt_meta_stringdata_QtMaterialSliderThumb.data,
      qt_meta_data_QtMaterialSliderThumb,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialSliderThumb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialSliderThumb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialSliderThumb.stringdata0))
        return static_cast<void*>(this);
    return QtMaterialOverlayWidget::qt_metacast(_clname);
}

int QtMaterialSliderThumb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtMaterialOverlayWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QtMaterialSliderTrack_t {
    QByteArrayData data[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialSliderTrack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialSliderTrack_t qt_meta_stringdata_QtMaterialSliderTrack = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtMaterialSliderTrack"
QT_MOC_LITERAL(1, 22, 9) // "fillColor"

    },
    "QtMaterialSliderTrack\0fillColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialSliderTrack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,

       0        // eod
};

void QtMaterialSliderTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QtMaterialSliderTrack *_t = static_cast<QtMaterialSliderTrack *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->fillColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QtMaterialSliderTrack *_t = static_cast<QtMaterialSliderTrack *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFillColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtMaterialSliderTrack::staticMetaObject = {
    { &QtMaterialOverlayWidget::staticMetaObject, qt_meta_stringdata_QtMaterialSliderTrack.data,
      qt_meta_data_QtMaterialSliderTrack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialSliderTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialSliderTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialSliderTrack.stringdata0))
        return static_cast<void*>(this);
    return QtMaterialOverlayWidget::qt_metacast(_clname);
}

int QtMaterialSliderTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtMaterialOverlayWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
