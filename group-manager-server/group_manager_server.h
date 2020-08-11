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
    bool add(QString groupName, QString groupId);
    bool set(QString groupName,QString groupId);
    bool del(QString groupName,QString groupId);

private:
	int dbus_integer;
	QString dbus_string;
	QVariant dbus_variant;
    QList<custom_struct> value;

signals:
    void message();
    void message_2();
    void message_3();

};
