/****************************************************************************
** Meta object code from reading C++ file 'qtmaterialsnackbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../components/qtmaterialsnackbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmaterialsnackbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtMaterialSnackbar_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtMaterialSnackbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtMaterialSnackbar_t qt_meta_stringdata_QtMaterialSnackbar = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QtMaterialSnackbar"
QT_MOC_LITERAL(1, 19, 10), // "addMessage"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "message"
QT_MOC_LITERAL(4, 39, 17), // "addInstantMessage"
QT_MOC_LITERAL(5, 57, 7) // "dequeue"

    },
    "QtMaterialSnackbar\0addMessage\0\0message\0"
    "addInstantMessage\0dequeue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtMaterialSnackbar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void QtMaterialSnackbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtMaterialSnackbar *_t = static_cast<QtMaterialSnackbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addInstantMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->dequeue(); break;
        default: ;
        }
    }
}

const QMetaObject QtMaterialSnackbar::staticMetaObject = {
    { &QtMaterialOverlayWidget::staticMetaObject, qt_meta_stringdata_QtMaterialSnackbar.data,
      qt_meta_data_QtMaterialSnackbar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtMaterialSnackbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtMaterialSnackbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtMaterialSnackbar.stringdata0))
        return static_cast<void*>(this);
    return QtMaterialOverlayWidget::qt_metacast(_clname);
}

int QtMaterialSnackbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtMaterialOverlayWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
