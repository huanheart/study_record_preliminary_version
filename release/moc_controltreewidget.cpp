/****************************************************************************
** Meta object code from reading C++ file 'controltreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../controltreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controltreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_controltreewidget_t {
    QByteArrayData data[14];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controltreewidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controltreewidget_t qt_meta_stringdata_controltreewidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "controltreewidget"
QT_MOC_LITERAL(1, 18, 13), // "sendShowIndex"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "WidgetTabType"
QT_MOC_LITERAL(4, 47, 22), // "Please_hideLabelWidget"
QT_MOC_LITERAL(5, 70, 6), // "change"
QT_MOC_LITERAL(6, 77, 5), // "width"
QT_MOC_LITERAL(7, 83, 6), // "height"
QT_MOC_LITERAL(8, 90, 21), // "on_treeWidget_clicked"
QT_MOC_LITERAL(9, 112, 5), // "index"
QT_MOC_LITERAL(10, 118, 32), // "on_treeWidget_currentItemChanged"
QT_MOC_LITERAL(11, 151, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(12, 168, 7), // "current"
QT_MOC_LITERAL(13, 176, 8) // "previous"

    },
    "controltreewidget\0sendShowIndex\0\0"
    "WidgetTabType\0Please_hideLabelWidget\0"
    "change\0width\0height\0on_treeWidget_clicked\0"
    "index\0on_treeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controltreewidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   43,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x08 /* Private */,
      10,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,

       0        // eod
};

void controltreewidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        controltreewidget *_t = static_cast<controltreewidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendShowIndex((*reinterpret_cast< WidgetTabType(*)>(_a[1]))); break;
        case 1: _t->Please_hideLabelWidget(); break;
        case 2: _t->change((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_treeWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_treeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (controltreewidget::*_t)(WidgetTabType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&controltreewidget::sendShowIndex)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (controltreewidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&controltreewidget::Please_hideLabelWidget)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject controltreewidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_controltreewidget.data,
      qt_meta_data_controltreewidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *controltreewidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controltreewidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_controltreewidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int controltreewidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void controltreewidget::sendShowIndex(WidgetTabType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void controltreewidget::Please_hideLabelWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
