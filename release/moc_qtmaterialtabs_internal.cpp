/****************************************************************************
** Meta object code from reading C++ file 'qtmaterialtabs_internal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../components/qtmaterialtabs_internal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaterialtabs_internal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtMaterialTabsInkBar_t {
    QByteArrayData data[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialTabsInkBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialTabsInkBar_t qt_meta_stringdata_QtMaterialTabsInkBar = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtMaterialTabsInkBar"
QT_MOC_LITERAL(1, 21, 10) // "tweenValue"

    },
    "QtMaterialTabsInkBar\0tweenValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialTabsInkBar[] = {

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
       1, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QtMaterialTabsInkBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QtMaterialTabsInkBar *_t = static_cast<QtMaterialTabsInkBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->tweenValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QtMaterialTabsInkBar *_t = static_cast<QtMaterialTabsInkBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTweenValue(*reinterpret_cast< qreal*>(_v)); break;
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

const QMetaObject QtMaterialTabsInkBar::staticMetaObject = {
    { &QtMaterialOverlayWidget::staticMetaObject, qt_meta_stringdata_QtMaterialTabsInkBar.data,
      qt_meta_data_QtMaterialTabsInkBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialTabsInkBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialTabsInkBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialTabsInkBar.stringdata0))
        return static_cast<void*>(this);
    return QtMaterialOverlayWidget::qt_metacast(_clname);
}

int QtMaterialTabsInkBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QtMaterialTab_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialTab_t qt_meta_stringdata_QtMaterialTab = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QtMaterialTab"
QT_MOC_LITERAL(1, 14, 11), // "activateTab"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "QtMaterialTab\0activateTab\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialTab[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QtMaterialTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMaterialTab *_t = static_cast<QtMaterialTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateTab(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtMaterialTab::staticMetaObject = {
    { &QtMaterialFlatButton::staticMetaObject, qt_meta_stringdata_QtMaterialTab.data,
      qt_meta_data_QtMaterialTab,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialTab.stringdata0))
        return static_cast<void*>(this);
    return QtMaterialFlatButton::qt_metacast(_clname);
}

int QtMaterialTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtMaterialFlatButton::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
