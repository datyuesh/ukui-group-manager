#include <QDBusArgument>
#include <QString>

#ifndef CUSTOM_STRUCT
#define	CUSTOM_STRUCT
struct custom_struct
{
    int drv_ID;
    QString name;
    QString full_name;
    int notify_mid;

    friend QDBusArgument &operator<<(QDBusArgument &argument, const custom_struct&mystruct)
    {
        argument.beginStructure();
        argument << mystruct.drv_ID << mystruct.name << mystruct.full_name << mystruct.notify_mid;
        argument.endStructure();
        return argument;
    }

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, custom_struct&mystruct)
    {
        argument.beginStructure();
        argument >> mystruct.drv_ID >> mystruct.name >> mystruct.full_name >> mystruct.notify_mid;
        argument.endStructure();
        return argument;
    }

};

Q_DECLARE_METATYPE(custom_struct)
#endif
