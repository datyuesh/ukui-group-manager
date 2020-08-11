/****************************************************************************
** Meta object code from reading C++ file 'group_manager_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../group-manager-server/group_manager_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group_manager_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_group_manager_server_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_group_manager_server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_group_manager_server_t qt_meta_stringdata_group_manager_server = {
    {
QT_MOC_LITERAL(0, 0, 20), // "group_manager_server"
QT_MOC_LITERAL(1, 21, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 37, 31), // "org.ukui.groupmanager.interface"
QT_MOC_LITERAL(3, 69, 7), // "message"
QT_MOC_LITERAL(4, 77, 0), // ""
QT_MOC_LITERAL(5, 78, 9), // "message_2"
QT_MOC_LITERAL(6, 88, 9), // "message_3"
QT_MOC_LITERAL(7, 98, 3), // "get"
QT_MOC_LITERAL(8, 102, 3), // "add"
QT_MOC_LITERAL(9, 106, 9), // "groupName"
QT_MOC_LITERAL(10, 116, 7), // "groupId"
QT_MOC_LITERAL(11, 124, 3), // "set"
QT_MOC_LITERAL(12, 128, 3) // "del"

    },
    "group_manager_server\0D-Bus Interface\0"
    "org.ukui.groupmanager.interface\0message\0"
    "\0message_2\0message_3\0get\0add\0groupName\0"
    "groupId\0set\0del"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_group_manager_server[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   51,    4, 0x06 /* Public */,
       5,    0,   52,    4, 0x06 /* Public */,
       6,    0,   53,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   54,    4, 0x0a /* Public */,
       8,    2,   55,    4, 0x0a /* Public */,
      11,    2,   60,    4, 0x0a /* Public */,
      12,    2,   65,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QVariantList,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    9,   10,

       0        // eod
};

void group_manager_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<group_manager_server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message(); break;
        case 1: _t->message_2(); break;
        case 2: _t->message_3(); break;
        case 3: { QVariantList _r = _t->get();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->add((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->set((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->del((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (group_manager_server::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&group_manager_server::message)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (group_manager_server::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&group_manager_server::message_2)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (group_manager_server::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&group_manager_server::message_3)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject group_manager_server::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_group_manager_server.data,
    qt_meta_data_group_manager_server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *group_manager_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *group_manager_server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_group_manager_server.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int group_manager_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void group_manager_server::message()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void group_manager_server::message_2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void group_manager_server::message_3()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
