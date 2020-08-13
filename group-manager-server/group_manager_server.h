#include <QObject>
#include <QList>
#include <QTextStream>
#include <QDebug>
#include <QProcess>

#include "custom_struct.h"

class group_manager_server : public QObject
{
	Q_OBJECT
    //定义Interface名称
    Q_CLASSINFO("D-Bus Interface", "org.ukui.groupmanager.interface")
public:
    explicit group_manager_server();

public slots:
    QVariantList get();
    bool add(QString groupName, QString groupId, QString userName);
    bool set(QString groupName, QString groupId, QString userName);
    bool del(QString groupName, QString groupId, QString userName);
    bool addUserToGroup(QString groupName, QString groupId, QString userName);
    bool delUserFromGroup(QString groupName, QString groupId, QString userName);

private:
    QList<custom_struct> value;

signals:
    void message();
};
