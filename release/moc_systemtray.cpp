/****************************************************************************
** Meta object code from reading C++ file 'systemtray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../systemtray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemTray_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemTray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemTray_t qt_meta_stringdata_SystemTray = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SystemTray"
QT_MOC_LITERAL(1, 11, 14), // "ShowMainWindow"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "showAboutUs"
QT_MOC_LITERAL(4, 39, 9) // "aboutSlot"

    },
    "SystemTray\0ShowMainWindow\0\0showAboutUs\0"
    "aboutSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemTray[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SystemTray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemTray *_t = static_cast<SystemTray *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowMainWindow(); break;
        case 1: _t->showAboutUs(); break;
        case 2: _t->aboutSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SystemTray::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTray::ShowMainWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SystemTray::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTray::showAboutUs)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SystemTray::staticMetaObject = {
    { &QSystemTrayIcon::staticMetaObject, qt_meta_stringdata_SystemTray.data,
      qt_meta_data_SystemTray,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SystemTray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTray.stringdata0))
        return static_cast<void*>(this);
    return QSystemTrayIcon::qt_metacast(_clname);
}

int SystemTray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SystemTray::ShowMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SystemTray::showAboutUs()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
