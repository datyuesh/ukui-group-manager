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

#include <QCoreApplication>
#include "group_manager_client.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	
    qRegisterMetaType<custom_struct>("custom_struct");
    qDBusRegisterMetaType<custom_struct>();
//    qRegisterMetaType<name>("name");
//    qDBusRegisterMetaType<name>();

    group_manager_client demo;

    //demo.do_commit_async("add","xcxc","1011");

	return a.exec();
}
