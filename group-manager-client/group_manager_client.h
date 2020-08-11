#include <QObject>
#include <QDBusInterface>
#include <QDBusPendingCallWatcher>
#include "custom_struct.h"

class group_manager_client : public QObject
{
	Q_OBJECT
public:
    explicit group_manager_client(QObject *parent = nullptr);

    QList<custom_struct *> *get_group_info();
    void do_commit_async(QString method, QString groupName, QString groupId);

private:
	void ConnectToService();
    QList<custom_struct *>  *value;

private slots:
	void signalTestSlot();

private:
	QDBusInterface                  *serviceInterface;
};
