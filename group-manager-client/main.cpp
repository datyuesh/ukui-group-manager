#include <QCoreApplication>
#include "group_manager_client.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	
    qRegisterMetaType<custom_struct>("custom_struct");
    qDBusRegisterMetaType<custom_struct>();

    group_manager_client demo;

    demo.do_commit_async("add","xcxc","1011");

	return a.exec();
}
