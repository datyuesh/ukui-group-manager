/*
* Copyright (C) 2020 Tianjin KYLIN Information Technology Co., Ltd.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, see <http://www.gnu.org/licenses/&gt;.
*
*/

#include <QObject>
#include <QtDBus>
#include <QDBusArgument>

struct custom_struct
{
    QString groupname;
    QString passphrase;
    QString groupid;
    QString usergroup;

    friend QDBusArgument &operator<<(QDBusArgument &argument, const custom_struct&mystruct)
    {
        argument.beginStructure();
        argument << mystruct.groupname << mystruct.passphrase << mystruct.groupid << mystruct.usergroup;
        argument.endStructure();
        return argument;
    }

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, custom_struct&mystruct)
    {
        argument.beginStructure();
        argument >> mystruct.groupname >> mystruct.passphrase >> mystruct.groupid >> mystruct.usergroup;
        argument.endStructure();
        return argument;
    }
	
};

//struct name
//{
//    QString                 subject_kind;
//    QMap<QString,QVariant>  subject_details;

//    friend QDBusArgument &operator<<(QDBusArgument &argument, const name&mystruct)
//    {
//        argument.beginStructure();
//        argument << mystruct.subject_kind ;//<< mystruct.subject_details;
//        argument.endStructure();
//        return argument;
//    }

//    friend const QDBusArgument &operator>>(const QDBusArgument &argument, name&mystruct)
//    {
//        argument.beginStructure();
//        argument >> mystruct.subject_kind ;//>> mystruct.subject_details;
//        argument.endStructure();
//        return argument;
//    }

//    friend QDBusArgument &operator<<(QDBusArgument &argument, const QMap<QString, QVariant> &subject_details)
//    {
//        int kid = qMetaTypeId<QString>();
//        int vid = qMetaTypeId<QVariant>();
//        argument.beginMap(kid, vid);
//        typename QMap<QString, QVariant>::ConstIterator it = subject_details.constBegin();
//        typename QMap<QString, QVariant>::ConstIterator end = subject_details.constEnd();
//        for ( ; it != end; ++it) {
//            argument.beginMapEntry();
//            argument << it.key() << it.value();
//            argument.endMapEntry();
//        }
//        argument.endMap();
//        return argument;
//    }

//    friend const QDBusArgument &operator>>(const QDBusArgument &argument, QMap<QString, QVariant> &subject_details)
//    {
//        argument.beginMap();
//        subject_details.clear();
//        while (!argument.atEnd()) {
//            QString key;
//            QVariant value;
//            argument.beginMapEntry();
//            argument >> key >> value;
//            subject_details.insertMulti(key, value);
//            argument.endMapEntry();
//        }
//        argument.endMap();
//        return argument;
//    }
//};



//Q_DECLARE_METATYPE(name)
Q_DECLARE_METATYPE(custom_struct)
