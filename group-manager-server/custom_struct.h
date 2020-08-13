#include <QDBusArgument>
#include <QString>

#ifndef CUSTOM_STRUCT
#define	CUSTOM_STRUCT
struct custom_struct
{
    QString groupname;
    QString passphrase;
    QString groupid;
    QString usergroup;

    friend QDBusArgument &operator<<(QDBusArgument &argument, const custom_struct&mystruct)
    {
        argument.beginStructure();
        argument << mystruct.groupname << mystruct.passphrase << mystruct.groupid << mystruct.usergroup;
        argument.endStructure();
        return argument;
    }

    friend const QDBusArgument &operator>>(const QDBusArgument &argument, custom_struct&mystruct)
    {
        argument.beginStructure();
        argument >> mystruct.groupname >> mystruct.passphrase >> mystruct.groupid >> mystruct.usergroup;
        argument.endStructure();
        return argument;
    }

};

Q_DECLARE_METATYPE(custom_struct)
#endif
