/****************************************************************************
** Meta object code from reading C++ file 'qtmaterialflatbutton_internal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../components/qtmaterialflatbutton_internal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaterialflatbutton_internal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtMaterialFlatButtonStateMachine_t {
    QByteArrayData data[10];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialFlatButtonStateMachine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialFlatButtonStateMachine_t qt_meta_stringdata_QtMaterialFlatButtonStateMachine = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QtMaterialFlatButtonStateMachine"
QT_MOC_LITERAL(1, 33, 13), // "buttonPressed"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 13), // "buttonChecked"
QT_MOC_LITERAL(4, 62, 15), // "buttonUnchecked"
QT_MOC_LITERAL(5, 78, 14), // "overlayOpacity"
QT_MOC_LITERAL(6, 93, 22), // "checkedOverlayProgress"
QT_MOC_LITERAL(7, 116, 11), // "haloOpacity"
QT_MOC_LITERAL(8, 128, 8), // "haloSize"
QT_MOC_LITERAL(9, 137, 15) // "haloScaleFactor"

    },
    "QtMaterialFlatButtonStateMachine\0"
    "buttonPressed\0\0buttonChecked\0"
    "buttonUnchecked\0overlayOpacity\0"
    "checkedOverlayProgress\0haloOpacity\0"
    "haloSize\0haloScaleFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialFlatButtonStateMachine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QtMaterialFlatButtonStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMaterialFlatButtonStateMachine *_t = static_cast<QtMaterialFlatButtonStateMachine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonPressed(); break;
        case 1: _t->buttonChecked(); break;
        case 2: _t->buttonUnchecked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtMaterialFlatButtonStateMachine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMaterialFlatButtonStateMachine::buttonPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtMaterialFlatButtonStateMachine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMaterialFlatButtonStateMachine::buttonChecked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtMaterialFlatButtonStateMachine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtMaterialFlatButtonStateMachine::buttonUnchecked)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QtMaterialFlatButtonStateMachine *_t = static_cast<QtMaterialFlatButtonStateMachine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->overlayOpacity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->checkedOverlayProgress(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->haloOpacity(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->haloSize(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->haloScaleFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QtMaterialFlatButtonStateMachine *_t = static_cast<QtMaterialFlatButtonStateMachine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOverlayOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setCheckedOverlayProgress(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setHaloOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setHaloSize(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setHaloScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QtMaterialFlatButtonStateMachine::staticMetaObject = {
    { &QStateMachine::staticMetaObject, qt_meta_stringdata_QtMaterialFlatButtonStateMachine.data,
      qt_meta_data_QtMaterialFlatButtonStateMachine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialFlatButtonStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialFlatButtonStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialFlatButtonStateMachine.stringdata0))
        return static_cast<void*>(this);
    return QStateMachine::qt_metacast(_clname);
}

int QtMaterialFlatButtonStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStateMachine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtMaterialFlatButtonStateMachine::buttonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtMaterialFlatButtonStateMachine::buttonChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtMaterialFlatButtonStateMachine::buttonUnchecked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
