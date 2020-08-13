#include "group_manager_client.h"
#include <QDBusInterface>
#include <QDBusConnection>
#include <QDBusReply>

group_manager_client::group_manager_client(QObject *parent)
{
    Q_UNUSED(parent);
	ConnectToService();
    //ConnectToPolkit();
}

void group_manager_client::ConnectToService()
{
    qDebug() << "ConnectToService";
    serviceInterface = new QDBusInterface("org.ukui.groupmanager",
                                        "/org/ukui/groupmanager",
                                        "org.ukui.groupmanager.interface",
                                         QDBusConnection::systemBus());
    if (!serviceInterface->isValid())
    {
        qDebug() << "fail to connect to service";
        qDebug() << qPrintable(QDBusConnection::systemBus().lastError().message());
        exit(1);
    }
    connect(serviceInterface, SIGNAL(message()), this, SLOT(signalTestSlot()));
    // 将以后所有DBus调用的超时设置为 milliseconds
    serviceInterface->setTimeout(2147483647); // -1 为默认的25s超时
}

void group_manager_client::ConnectToPolkit()
{
    qDebug() << "ConnectToPolkit";
    policykitInterface = new QDBusInterface("org.freedesktop.PolicyKit1",
                                        "/org/freedesktop/PolicyKit1/Authority",
                                        "org.freedesktop.PolicyKit1.Authority",
                                         QDBusConnection::systemBus());

    if (!policykitInterface->isValid())
    {
        qDebug() << "fail to connect to service";
        qDebug() << qPrintable(QDBusConnection::systemBus().lastError().message());
        exit(1);
    }
    policykitInterface->setTimeout(-1);
}

//void group_manager_client::check_permission()
//{
//    qDebug() << "check_permission";
//    QVariant tmp;
//    QDBusArgument argu;
//    //QDBusVariant;

//    name *subject = new name;
//    subject->subject_kind = "system-bus-name";
//    subject->subject_details.insert("name","None");
//    QMap<QString,QString> details;
//    details.insert(NULL,NULL);
//    argu << details;
//    //tmp = QVariant::fromValue(subject);

//    policykitInterface->call(QStringLiteral("CheckAuthorization"),subject,'org.ukui.groupmanager.action',
//                             argu,'None','None');

//}

QList<custom_struct *> *group_manager_client::get_group_info()
{
    qDebug() << "get group info";
    //check_permission();
    QDBusMessage msg = serviceInterface->call("get");
    if(msg.type() == QDBusMessage::ErrorMessage) {
        printf("get group info fail.\n");
    }
    QDBusArgument argument = msg.arguments().at(0).value<QDBusArgument>();
    QList<QVariant> infos;
    argument >> infos;
    qDebug() << "info size :" << infos.size() << argument.currentType();
//    for (auto info : value)
//    {
//        delete info;
//    }
//    value.clear();
    value = new QList<custom_struct *>();
    for (int i = 0; i < infos.size(); i++)
    {
        custom_struct *dbus_struct = new custom_struct;
        infos.at(i).value<QDBusArgument>() >> *dbus_struct;
        value->push_back(dbus_struct);
        qDebug() << value->at(i)->groupname << value->at(i)->groupid;
    }
    return value;
}

void group_manager_client::do_commit_async(QString method, QString groupName, QString groupId, QString userName)
{
    qDebug() << "do commit a sync : " << method;
    // QDBusReply<QString>返回值类型必须要和 method 返回值类型保持一致
    // call是同步调用，远程方法返回后才继续往下执行。
    QDBusReply<bool> reply = serviceInterface->call(method, groupName, groupId, userName);
     if (reply.isValid())
         // use the returned value
         qDebug() << "get call value" << reply.value();
     else
         // call failed. Show an error condition.
         qDebug() << "call failed" << reply.error();
}

void group_manager_client::signalTestSlot()
{
    qDebug() << "dbus signal has connected";
	return;
}
