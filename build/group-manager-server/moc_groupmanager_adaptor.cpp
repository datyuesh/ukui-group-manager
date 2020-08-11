/****************************************************************************
** Meta object code from reading C++ file 'groupmanager_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "groupmanager_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupmanager_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InterfaceAdaptor_t {
    QByteArrayData data[12];
    char stringdata0[894];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfaceAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfaceAdaptor_t qt_meta_stringdata_InterfaceAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InterfaceAdaptor"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 31), // "org.ukui.groupmanager.interface"
QT_MOC_LITERAL(3, 65, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 85, 773), // "  <interface name=\"org.ukui...."
QT_MOC_LITERAL(5, 777, 3), // "add"
QT_MOC_LITERAL(6, 781, 0), // ""
QT_MOC_LITERAL(7, 782, 9), // "groupName"
QT_MOC_LITERAL(8, 792, 7), // "groupId"
QT_MOC_LITERAL(9, 800, 3), // "del"
QT_MOC_LITERAL(10, 804, 3), // "get"
QT_MOC_LITERAL(11, 808, 3) // "set"

    },
    "InterfaceAdaptor\0D-Bus Interface\0"
    "org.ukui.groupmanager.interface\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.ukui.groupmanager.interface\">\n    <method na"
    "me=\"get\">\n      <arg direction=\"out\" type=\"av\"/>\n    </method>"
    "\n    <method name=\"add\">\n      <arg direction=\"out\" type=\"b\"/>"
    "\n      <arg direction=\"in\" type=\"s\" name=\"groupName\"/>\n      <"
    "arg direction=\"in\" type=\"s\" name=\"groupId\"/>\n    </method>\n   "
    " <method name=\"set\">\n      <arg direction=\"out\" type=\"b\"/>\n   "
    "   <arg direction=\"in\" type=\"s\" name=\"groupName\"/>\n      <arg d"
    "irection=\"in\" type=\"s\" name=\"groupId\"/>\n    </method>\n    <met"
    "hod name=\"del\">\n      <arg direction=\"out\" type=\"b\"/>\n      <a"
    "rg direction=\"in\" type=\"s\" name=\"groupName\"/>\n      <arg direct"
    "ion=\"in\" type=\"s\" name=\"groupId\"/>\n    </method>\n  </interface"
    ">\n\0"
    "add\0\0groupName\0groupId\0del\0get\0set"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
       4,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    2,   38,    6, 0x0a /* Public */,
       9,    2,   43,    6, 0x0a /* Public */,
      10,    0,   48,    6, 0x0a /* Public */,
      11,    2,   49,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::QVariantList,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    7,    8,

       0        // eod
};

void InterfaceAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InterfaceAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->add((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->del((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QVariantList _r = _t->get();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->set((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InterfaceAdaptor::staticMetaObject = { {
    &QDBusAbstractAdaptor::staticMetaObject,
    qt_meta_stringdata_InterfaceAdaptor.data,
    qt_meta_data_InterfaceAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InterfaceAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int InterfaceAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
