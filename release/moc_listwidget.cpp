/****************************************************************************
** Meta object code from reading C++ file 'listwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ListControl/listwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListWidget_t {
    QByteArrayData data[27];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListWidget_t qt_meta_stringdata_ListWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ListWidget"
QT_MOC_LITERAL(1, 11, 9), // "SaveValue"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "value"
QT_MOC_LITERAL(4, 28, 25), // "ShowCurrentListWidget_two"
QT_MOC_LITERAL(5, 54, 10), // "CurrentNum"
QT_MOC_LITERAL(6, 65, 16), // "LabelInformation"
QT_MOC_LITERAL(7, 82, 11), // "Information"
QT_MOC_LITERAL(8, 94, 14), // "ShowListWidget"
QT_MOC_LITERAL(9, 109, 21), // "DeleteCurrentLineEdit"
QT_MOC_LITERAL(10, 131, 8), // "LineEdit"
QT_MOC_LITERAL(11, 140, 16), // "DeleteMapElement"
QT_MOC_LITERAL(12, 157, 9), // "CarryList"
QT_MOC_LITERAL(13, 167, 19), // "QList<ListControl*>"
QT_MOC_LITERAL(14, 187, 4), // "list"
QT_MOC_LITERAL(15, 192, 16), // "InitCurrentLabel"
QT_MOC_LITERAL(16, 209, 9), // "JsonArray"
QT_MOC_LITERAL(17, 219, 11), // "write_label"
QT_MOC_LITERAL(18, 231, 9), // "SaveLabel"
QT_MOC_LITERAL(19, 241, 15), // "Whether_to_send"
QT_MOC_LITERAL(20, 257, 6), // "decide"
QT_MOC_LITERAL(21, 264, 17), // "DeleteListControl"
QT_MOC_LITERAL(22, 282, 9), // "DeleteNum"
QT_MOC_LITERAL(23, 292, 16), // "UpdateListWidget"
QT_MOC_LITERAL(24, 309, 3), // "str"
QT_MOC_LITERAL(25, 313, 17), // "Update_ListWidget"
QT_MOC_LITERAL(26, 331, 13) // "RecvLabelJson"

    },
    "ListWidget\0SaveValue\0\0value\0"
    "ShowCurrentListWidget_two\0CurrentNum\0"
    "LabelInformation\0Information\0"
    "ShowListWidget\0DeleteCurrentLineEdit\0"
    "LineEdit\0DeleteMapElement\0CarryList\0"
    "QList<ListControl*>\0list\0InitCurrentLabel\0"
    "JsonArray\0write_label\0SaveLabel\0"
    "Whether_to_send\0decide\0DeleteListControl\0"
    "DeleteNum\0UpdateListWidget\0str\0"
    "Update_ListWidget\0RecvLabelJson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    2,   77,    2, 0x06 /* Public */,
       8,    0,   82,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,
      11,    1,   86,    2, 0x06 /* Public */,
      12,    1,   89,    2, 0x06 /* Public */,
      15,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   95,    2, 0x0a /* Public */,
      18,    2,   98,    2, 0x0a /* Public */,
      21,    1,  103,    2, 0x0a /* Public */,
      23,    2,  106,    2, 0x0a /* Public */,
      26,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QJsonArray,   16,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 19,    7,   20,
    QMetaType::Void, QMetaType::LongLong,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 25,   24,   20,
    QMetaType::Void, QMetaType::QJsonArray,   16,

       0        // eod
};

void ListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListWidget *_t = static_cast<ListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SaveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ShowCurrentListWidget_two((*reinterpret_cast< long long(*)>(_a[1])),(*reinterpret_cast< LabelInformation(*)>(_a[2]))); break;
        case 2: _t->ShowListWidget(); break;
        case 3: _t->DeleteCurrentLineEdit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->DeleteMapElement((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->CarryList((*reinterpret_cast< QList<ListControl*>(*)>(_a[1]))); break;
        case 6: _t->InitCurrentLabel((*reinterpret_cast< QJsonArray(*)>(_a[1]))); break;
        case 7: _t->write_label((*reinterpret_cast< LabelInformation(*)>(_a[1]))); break;
        case 8: _t->SaveLabel((*reinterpret_cast< LabelInformation(*)>(_a[1])),(*reinterpret_cast< Whether_to_send(*)>(_a[2]))); break;
        case 9: _t->DeleteListControl((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 10: _t->UpdateListWidget((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Update_ListWidget(*)>(_a[2]))); break;
        case 11: _t->RecvLabelJson((*reinterpret_cast< QJsonArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ListControl*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ListWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListWidget::SaveValue)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ListWidget::*_t)(long long , LabelInformation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListWidget::ShowCurrentListWidget_two)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ListWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListWidget::ShowListWidget)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ListWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListWidget::DeleteCurrentLineEdit)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ListWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListWidget::DeleteMapElement)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ListWidget::*_t)(QList<ListControl*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListWidget::CarryList)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ListWidget::*_t)(QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListWidget::InitCurrentLabel)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject ListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListWidget.data,
      qt_meta_data_ListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ListWidget::SaveValue(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ListWidget::ShowCurrentListWidget_two(long long _t1, LabelInformation _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ListWidget::ShowListWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ListWidget::DeleteCurrentLineEdit(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ListWidget::DeleteMapElement(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ListWidget::CarryList(QList<ListControl*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ListWidget::InitCurrentLabel(QJsonArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
