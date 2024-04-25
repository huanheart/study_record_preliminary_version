/****************************************************************************
** Meta object code from reading C++ file 'cylinderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CylinderControl/cylinderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cylinderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CylinderWidget_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CylinderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CylinderWidget_t qt_meta_stringdata_CylinderWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CylinderWidget"
QT_MOC_LITERAL(1, 15, 24), // "CurrentTime_ToRecordTime"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "CurrentDateTime"
QT_MOC_LITERAL(4, 57, 8), // "InitTime"
QT_MOC_LITERAL(5, 66, 9), // "InitChart"
QT_MOC_LITERAL(6, 76, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 98, 18), // "on_forward_clicked"
QT_MOC_LITERAL(8, 117, 19), // "on_backward_clicked"
QT_MOC_LITERAL(9, 137, 18) // "on_refresh_clicked"

    },
    "CylinderWidget\0CurrentTime_ToRecordTime\0"
    "\0CurrentDateTime\0InitTime\0InitChart\0"
    "on_pushButton_clicked\0on_forward_clicked\0"
    "on_backward_clicked\0on_refresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CylinderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CylinderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CylinderWidget *_t = static_cast<CylinderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CurrentTime_ToRecordTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->InitTime(); break;
        case 2: _t->InitChart(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_forward_clicked(); break;
        case 5: _t->on_backward_clicked(); break;
        case 6: _t->on_refresh_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CylinderWidget::*_t)(QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CylinderWidget::CurrentTime_ToRecordTime)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CylinderWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CylinderWidget::InitTime)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CylinderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CylinderWidget.data,
      qt_meta_data_CylinderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CylinderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CylinderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CylinderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CylinderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CylinderWidget::CurrentTime_ToRecordTime(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CylinderWidget::InitTime()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
