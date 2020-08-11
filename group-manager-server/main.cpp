#include <QtDBus/QDBusConnection>
#include <QCoreApplication>
#include <QDebug>
#include <QDBusError>
#include <QDBusMetaType>
#include <QDBusMessage>
#include "group_manager_server.h"
#include "custom_struct.h"
#include "groupmanager_adaptor.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

    qRegisterMetaType<custom_struct>("custom_struct");
    qDBusRegisterMetaType<custom_struct>();
	QDBusConnection connection = QDBusConnection::systemBus();

    if (!connection.registerService("org.ukui.groupmanager")) {
		qDebug() << "error:" << connection.lastError().message();
		exit(-1);
	}
    group_manager_server *dbus_demo = new group_manager_server();
    new InterfaceAdaptor(dbus_demo);
    connection.registerObject("/org/ukui/groupmanager", dbus_demo);
//    QDBusMessage msg = QDBusMessage::createSignal("/org/ukui/groupmanager", "org.ukui.groupmanager.interface", "message");
//    QDBusConnection::sessionBus().send(msg);
	return a.exec();	
}
