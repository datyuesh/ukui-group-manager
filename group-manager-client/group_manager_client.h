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
#include <QDBusInterface>
#include <QDBusPendingCallWatcher>
#include <QMap>
#include "custom_struct.h"

class group_manager_client : public QObject
{
	Q_OBJECT
public:
    explicit group_manager_client(QObject *parent = nullptr);

    //void check_permission();
    QList<custom_struct *> *get_group_info();
    void do_commit_async(QString method, QString groupName, QString groupId, QString userName);

private:
	void ConnectToService();
    void ConnectToPolkit();
    QList<custom_struct *>  *value;

private slots:
	void signalTestSlot();

private:
    QDBusInterface *serviceInterface;
    QDBusInterface *policykitInterface;
};
