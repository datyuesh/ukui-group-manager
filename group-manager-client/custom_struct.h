#include <QObject>
#include <QtDBus>
#include <QDBusArgument>

struct custom_struct
{
	int ID;
	QString name;
	QString full_name;
	int Iccid;
    friend QDBusArgument &operator<<(QDBusArgument &argument, const custom_struct&mystruct)
    {
        argument.beginStructure();
        argument << mystruct.ID << mystruct.name << mystruct.full_name << mystruct.Iccid;
        argument.endStructure();
        return argument;
    }

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, custom_struct&mystruct)
    {
        argument.beginStructure();
        argument >> mystruct.ID >> mystruct.name >> mystruct.full_name >> mystruct.Iccid;
        argument.endStructure();
        return argument;
    }
	
};

Q_DECLARE_METATYPE(custom_struct)
