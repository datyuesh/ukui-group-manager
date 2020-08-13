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

//    friend QDBusArgument &operator<<(QDBusArgument &argument, const QMap<QString, QString> &map)
//    {
//        int kid = qMetaTypeId<QString>();
//        int vid = qMetaTypeId<QString>();
//        argument.beginMap(kid, vid);
//        typename QMap<QString, QString>::ConstIterator it = map.constBegin();
//        typename QMap<QString, QString>::ConstIterator end = map.constEnd();
//        for ( ; it != end; ++it) {
//            argument.beginMapEntry();
//            argument << it.key() << it.value();
//            argument.endMapEntry();
//        }
//        argument.endMap();
//        return argument;
//    }

//    friend const QDBusArgument &operator>>(const QDBusArgument &argument, QMap<QString, QString> &map)
//    {
//        argument.beginMap();
//        map.clear();
//        while (!argument.atEnd()) {
//            QString key;
//            QString value;
//            argument.beginMapEntry();
//            argument >> key >> value;
//            map.insertMulti(key, value);
//            argument.endMapEntry();
//        }
//        argument.endMap();
//        return argument;
//    }

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
