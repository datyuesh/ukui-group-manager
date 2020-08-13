#include "group_manager_server.h"
#include "custom_struct.h"
#include <stdio.h>

group_manager_server::group_manager_server()
{
	
}

// 解析组文件
QVariantList group_manager_server::get()
{
    const QString fileName = "/etc/group";
    QFile groupFile(fileName);

    QVariantList value;
    QVariant cnt;
    int lineCount = 1;

    if(!groupFile.exists()){
        printf("/etc/group file not exist \n");
    }
    if(!groupFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        printf("open /etc/group fail \n");
    }

    QTextStream in(&groupFile);
    QString line = in.readLine();
    struct custom_struct demo[200];

    while(!line.isNull()){
        QStringList lineList = line.split(":");
        qDebug() << "以: 分割" <<lineList.at(0) << lineList.at(1) << lineList.at(2);
        line = in.readLine();

        demo[lineCount].groupname      = lineList.at(0);
        demo[lineCount].passphrase    = lineList.at(1);
        demo[lineCount].groupid = lineList.at(2);
        demo[lineCount].usergroup = lineList.at(3);
        cnt = QVariant::fromValue(demo[lineCount]);
        value << cnt;
        qDebug() << "以: 分割111" << demo[lineCount].groupname << demo[lineCount].groupid
                 << demo[lineCount].passphrase << demo[lineCount].usergroup;

        lineCount ++;
    }

    return value;
}

// 添加组
bool group_manager_server::add(QString groupName, QString groupId, QString userName)
{
    Q_UNUSED(userName);
    qDebug()<<"add";
    QString groupadd = "/usr/sbin/groupadd";
    QString addgroup = "/usr/sbin/addgroup";
    QString command;
    QFile groupaddFile("/usr/sbin/addgroup");
    QFile addgroupFile("/usr/sbin/groupadd");

    QProcess p(0);
    QStringList args;

    if(!addgroupFile.exists()){
        printf("/usr/sbin/addgroup file not exist \n");
        if(!groupaddFile.exists()){
            return false;
        }
        qDebug()<<"groupadd";
        command = groupadd;
        args.append("-g");
        args.append(groupId);
        args.append(groupName);
    }else{
        qDebug()<<"addgroup";
        command = addgroup;
        args.append("-gid");
        args.append(groupId);
        args.append(groupName);
    }


    p.execute(command,args);//command是要执行的命令,args是参数
    qDebug()<<"wait for finish";
    p.waitForFinished(-1);
    qDebug()<<QString::fromLocal8Bit(p.readAllStandardError());
    return true;
}

// 修改组
bool group_manager_server::set(QString groupName, QString groupId, QString userName)
{
    Q_UNUSED(userName);
    qDebug()<<"set";
    QString groupmod = "/usr/sbin/groupmod";

    QFile groupmodFile(groupmod);

    QProcess p(0);
    QStringList args;

    if(!groupmodFile.exists()){
        printf("/usr/sbin/groupmod file not exist \n");
        return false;
    }
    qDebug()<<"groupmod";
    args.append("-g");
    args.append(groupId);
    //args.append("-n");
    args.append(groupName);

    p.execute(groupmod,args);//command是要执行的命令,args是参数
    qDebug()<<"wait for finish";
    p.waitForFinished(-1);
    qDebug()<<QString::fromLocal8Bit(p.readAllStandardError());
    return true;
}

// 删除组
bool group_manager_server::del(QString groupName, QString groupId, QString userName)
{
    Q_UNUSED(groupId);
    Q_UNUSED(userName);
    qDebug()<<"del";
    QString groupdel = "/usr/sbin/groupdel";

    QFile groupdelFile(groupdel);

    QProcess p(0);
    QStringList args;

    if(!groupdelFile.exists()){
        printf("/usr/sbin/groupdel file not exist \n");
        return false;
    }
    qDebug()<<"groupdel";
    args.append(groupName);

    p.execute(groupdel,args);//command是要执行的命令,args是参数
    qDebug()<<"wait for finish";
    p.waitForFinished(-1);
    qDebug()<<QString::fromLocal8Bit(p.readAllStandardError());
    return true;
}

// 添加用户到组
bool group_manager_server::addUserToGroup(QString groupName, QString groupId, QString userName)
{
    Q_UNUSED(groupId);
    qDebug() << "addUserToGroup";
    QString usermod = "/usr/sbin/usermod";
    QString gpasswd = "/usr/bin/gpasswd";
    QString command;

    QFile usermodFile(usermod);
    QFile gpasswdFile(gpasswd);

    QProcess p(0);
    QStringList args;

    if(!usermodFile.exists()){
        printf("/usr/sbin/usermod file not exist \n");
        if(!gpasswdFile.exists()){
            printf("/usr/sbin/gpasswd file not exist \n");
            return false;
        }
        qDebug()<<"gpasswd";
        command = gpasswd;
        args.append("-a");
        args.append(userName);
        args.append(groupName);
    } else {
        qDebug()<<"usermod";
        command = usermod;
        args.append("-G");
        args.append(groupName);
        args.append(userName);
    }

    p.execute(command,args);//command是要执行的命令,args是参数
    qDebug()<<"wait for finish";
    p.waitForFinished(-1);
    qDebug()<<QString::fromLocal8Bit(p.readAllStandardError());
    return true;
}

// 删除用户从组
bool group_manager_server::delUserFromGroup(QString groupName, QString groupId, QString userName)
{
    Q_UNUSED(groupId);
    qDebug() << "delUserFromGroup";
    QString gpasswd = "/usr/bin/gpasswd";
    QString command;

    QFile gpasswdFile(gpasswd);

    QProcess p(0);
    QStringList args;

    if(!gpasswdFile.exists()){
        printf("/usr/sbin/gpasswd file not exist \n");
        return false;
    }
    qDebug()<<"gpasswd";
    command = gpasswd;
    args.append("-d");
    args.append(userName);
    args.append(groupName);

    p.execute(command,args);//command是要执行的命令,args是参数
    qDebug() << "wait for finish";
    p.waitForFinished(-1);
    qDebug() << QString::fromLocal8Bit(p.readAllStandardError());
    return true;
}



