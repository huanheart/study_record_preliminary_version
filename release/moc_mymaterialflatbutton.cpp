/****************************************************************************
** Meta object code from reading C++ file 'mymaterialflatbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ListControl/mymaterialflatbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymaterialflatbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyMaterialFlatButton_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyMaterialFlatButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyMaterialFlatButton_t qt_meta_stringdata_MyMaterialFlatButton = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MyMaterialFlatButton"
QT_MOC_LITERAL(1, 21, 12), // "ClickedFinsh"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "LabelInformation"
QT_MOC_LITERAL(4, 52, 11) // "Information"

    },
    "MyMaterialFlatButton\0ClickedFinsh\0\0"
    "LabelInformation\0Information"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyMaterialFlatButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MyMaterialFlatButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyMaterialFlatButton *_t = static_cast<MyMaterialFlatButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ClickedFinsh((*reinterpret_cast< LabelInformation(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MyMaterialFlatButton::*_t)(LabelInformation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyMaterialFlatButton::ClickedFinsh)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MyMaterialFlatButton::staticMetaObject = {
    { &QtMaterialFlatButton::staticMetaObject, qt_meta_stringdata_MyMaterialFlatButton.data,
      qt_meta_data_MyMaterialFlatButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyMaterialFlatButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyMaterialFlatButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyMaterialFlatButton.stringdata0))
        return static_cast<void*>(this);
    return QtMaterialFlatButton::qt_metacast(_clname);
}

int MyMaterialFlatButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MyMaterialFlatButton::ClickedFinsh(LabelInformation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
