/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i groupmanager_adaptor.h -a :groupmanager_adaptor.cpp ../../group-manager-server/org.ukui.groupmanager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "groupmanager_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class InterfaceAdaptor
 */

InterfaceAdaptor::InterfaceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

InterfaceAdaptor::~InterfaceAdaptor()
{
    // destructor
}

bool InterfaceAdaptor::add(const QString &groupName, const QString &groupId)
{
    // handle method call org.ukui.groupmanager.interface.add
    bool out0;
    QMetaObject::invokeMethod(parent(), "add", Q_RETURN_ARG(bool, out0), Q_ARG(QString, groupName), Q_ARG(QString, groupId));
    return out0;
}

bool InterfaceAdaptor::del(const QString &groupName, const QString &groupId)
{
    // handle method call org.ukui.groupmanager.interface.del
    bool out0;
    QMetaObject::invokeMethod(parent(), "del", Q_RETURN_ARG(bool, out0), Q_ARG(QString, groupName), Q_ARG(QString, groupId));
    return out0;
}

QVariantList InterfaceAdaptor::get()
{
    // handle method call org.ukui.groupmanager.interface.get
    QVariantList out0;
    QMetaObject::invokeMethod(parent(), "get", Q_RETURN_ARG(QVariantList, out0));
    return out0;
}

bool InterfaceAdaptor::set(const QString &groupName, const QString &groupId)
{
    // handle method call org.ukui.groupmanager.interface.set
    bool out0;
    QMetaObject::invokeMethod(parent(), "set", Q_RETURN_ARG(bool, out0), Q_ARG(QString, groupName), Q_ARG(QString, groupId));
    return out0;
}

