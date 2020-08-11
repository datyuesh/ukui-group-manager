/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a groupmanager_adaptor.h: ../../group-manager-server/org.ukui.groupmanager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef GROUPMANAGER_ADAPTOR_H
#define GROUPMANAGER_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.ukui.groupmanager.interface
 */
class InterfaceAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.ukui.groupmanager.interface")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.ukui.groupmanager.interface\">\n"
"    <method name=\"get\">\n"
"      <arg direction=\"out\" type=\"av\"/>\n"
"    </method>\n"
"    <method name=\"add\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"groupName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"groupId\"/>\n"
"    </method>\n"
"    <method name=\"set\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"groupName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"groupId\"/>\n"
"    </method>\n"
"    <method name=\"del\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"groupName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"groupId\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    InterfaceAdaptor(QObject *parent);
    virtual ~InterfaceAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    bool add(const QString &groupName, const QString &groupId);
    bool del(const QString &groupName, const QString &groupId);
    QVariantList get();
    bool set(const QString &groupName, const QString &groupId);
Q_SIGNALS: // SIGNALS
};

#endif
