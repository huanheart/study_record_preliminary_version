/****************************************************************************
** Meta object code from reading C++ file 'mymaterialautocomplete.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ListControl/mymaterialautocomplete.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mymaterialautocomplete.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyMaterialAutoComplete_t {
    QByteArrayData data[10];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyMaterialAutoComplete_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyMaterialAutoComplete_t qt_meta_stringdata_MyMaterialAutoComplete = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MyMaterialAutoComplete"
QT_MOC_LITERAL(1, 23, 15), // "MyMateriaAppend"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "str"
QT_MOC_LITERAL(4, 44, 15), // "MyMateriaDelete"
QT_MOC_LITERAL(5, 60, 29), // "Update_MyMaterialAutoComplete"
QT_MOC_LITERAL(6, 90, 11), // "NewLineEdit"
QT_MOC_LITERAL(7, 102, 11), // "OldLineEdit"
QT_MOC_LITERAL(8, 114, 21), // "DeleteCurrentLineEdit"
QT_MOC_LITERAL(9, 136, 14) // "DeleteLineEdit"

    },
    "MyMaterialAutoComplete\0MyMateriaAppend\0"
    "\0str\0MyMateriaDelete\0Update_MyMaterialAutoComplete\0"
    "NewLineEdit\0OldLineEdit\0DeleteCurrentLineEdit\0"
    "DeleteLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyMaterialAutoComplete[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    2,   40,    2, 0x0a /* Public */,
       8,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void MyMaterialAutoComplete::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyMaterialAutoComplete *_t = static_cast<MyMaterialAutoComplete *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MyMateriaAppend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->MyMateriaDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Update_MyMaterialAutoComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->DeleteCurrentLineEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MyMaterialAutoComplete::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_MyMaterialAutoComplete.data,
      qt_meta_data_MyMaterialAutoComplete,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyMaterialAutoComplete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyMaterialAutoComplete::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyMaterialAutoComplete.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int MyMaterialAutoComplete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
