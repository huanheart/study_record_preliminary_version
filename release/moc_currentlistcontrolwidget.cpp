/****************************************************************************
** Meta object code from reading C++ file 'currentlistcontrolwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ListControl/currentlistcontrolwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentlistcontrolwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurrentListControlWidget_t {
    QByteArrayData data[21];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurrentListControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurrentListControlWidget_t qt_meta_stringdata_CurrentListControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CurrentListControlWidget"
QT_MOC_LITERAL(1, 25, 15), // "SaveInformation"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "LabelInformation"
QT_MOC_LITERAL(4, 59, 11), // "Information"
QT_MOC_LITERAL(5, 71, 15), // "Whether_to_send"
QT_MOC_LITERAL(6, 87, 6), // "decide"
QT_MOC_LITERAL(7, 94, 29), // "Update_MyMaterialAutoComplete"
QT_MOC_LITERAL(8, 124, 11), // "NewLineEdit"
QT_MOC_LITERAL(9, 136, 11), // "OldLineEdit"
QT_MOC_LITERAL(10, 148, 17), // "DeleteListControl"
QT_MOC_LITERAL(11, 166, 10), // "CurrentNum"
QT_MOC_LITERAL(12, 177, 14), // "DeleteComBoBox"
QT_MOC_LITERAL(13, 192, 8), // "LineEdit"
QT_MOC_LITERAL(14, 201, 16), // "DeleteMapElement"
QT_MOC_LITERAL(15, 218, 16), // "UpdateMapElement"
QT_MOC_LITERAL(16, 235, 17), // "ChangeInformation"
QT_MOC_LITERAL(17, 253, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(18, 275, 16), // "on_Query_clicked"
QT_MOC_LITERAL(19, 292, 15), // "on_Save_clicked"
QT_MOC_LITERAL(20, 308, 18) // "on_AddTask_clicked"

    },
    "CurrentListControlWidget\0SaveInformation\0"
    "\0LabelInformation\0Information\0"
    "Whether_to_send\0decide\0"
    "Update_MyMaterialAutoComplete\0NewLineEdit\0"
    "OldLineEdit\0DeleteListControl\0CurrentNum\0"
    "DeleteComBoBox\0LineEdit\0DeleteMapElement\0"
    "UpdateMapElement\0ChangeInformation\0"
    "on_pushButton_clicked\0on_Query_clicked\0"
    "on_Save_clicked\0on_AddTask_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurrentListControlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       7,    2,   74,    2, 0x06 /* Public */,
      10,    1,   79,    2, 0x06 /* Public */,
      12,    1,   82,    2, 0x06 /* Public */,
      14,    1,   85,    2, 0x06 /* Public */,
      15,    2,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,   93,    2, 0x0a /* Public */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,
      19,    0,  100,    2, 0x08 /* Private */,
      20,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 3,   11,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CurrentListControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurrentListControlWidget *_t = static_cast<CurrentListControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SaveInformation((*reinterpret_cast< LabelInformation(*)>(_a[1])),(*reinterpret_cast< Whether_to_send(*)>(_a[2]))); break;
        case 1: _t->Update_MyMaterialAutoComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->DeleteListControl((*reinterpret_cast< long long(*)>(_a[1]))); break;
        case 3: _t->DeleteComBoBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->DeleteMapElement((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->UpdateMapElement((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->ChangeInformation((*reinterpret_cast< long long(*)>(_a[1])),(*reinterpret_cast< LabelInformation(*)>(_a[2]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_Query_clicked(); break;
        case 9: _t->on_Save_clicked(); break;
        case 10: _t->on_AddTask_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CurrentListControlWidget::*_t)(LabelInformation , Whether_to_send );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentListControlWidget::SaveInformation)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CurrentListControlWidget::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentListControlWidget::Update_MyMaterialAutoComplete)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CurrentListControlWidget::*_t)(long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentListControlWidget::DeleteListControl)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CurrentListControlWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentListControlWidget::DeleteComBoBox)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CurrentListControlWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentListControlWidget::DeleteMapElement)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CurrentListControlWidget::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentListControlWidget::UpdateMapElement)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject CurrentListControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CurrentListControlWidget.data,
      qt_meta_data_CurrentListControlWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CurrentListControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurrentListControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentListControlWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CurrentListControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CurrentListControlWidget::SaveInformation(LabelInformation _t1, Whether_to_send _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurrentListControlWidget::Update_MyMaterialAutoComplete(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CurrentListControlWidget::DeleteListControl(long long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CurrentListControlWidget::DeleteComBoBox(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CurrentListControlWidget::DeleteMapElement(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CurrentListControlWidget::UpdateMapElement(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
