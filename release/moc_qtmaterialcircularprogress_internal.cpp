/****************************************************************************
** Meta object code from reading C++ file 'qtmaterialcircularprogress_internal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../components/qtmaterialcircularprogress_internal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaterialcircularprogress_internal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtMaterialCircularProgressDelegate_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialCircularProgressDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialCircularProgressDelegate_t qt_meta_stringdata_QtMaterialCircularProgressDelegate = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtMaterialCircularProgressDel..."
QT_MOC_LITERAL(1, 35, 10), // "dashOffset"
QT_MOC_LITERAL(2, 46, 10), // "dashLength"
QT_MOC_LITERAL(3, 57, 5) // "angle"

    },
    "QtMaterialCircularProgressDelegate\0"
    "dashOffset\0dashLength\0angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialCircularProgressDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QReal, 0x00095103,
       3, QMetaType::Int, 0x00095103,

       0        // eod
};

void QtMaterialCircularProgressDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QtMaterialCircularProgressDelegate *_t = static_cast<QtMaterialCircularProgressDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->dashOffset(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->dashLength(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->angle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QtMaterialCircularProgressDelegate *_t = static_cast<QtMaterialCircularProgressDelegate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDashOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setDashLength(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setAngle(*reinterpret_cast< int*>(_v)); break;
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

const QMetaObject QtMaterialCircularProgressDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtMaterialCircularProgressDelegate.data,
      qt_meta_data_QtMaterialCircularProgressDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialCircularProgressDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialCircularProgressDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialCircularProgressDelegate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtMaterialCircularProgressDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
