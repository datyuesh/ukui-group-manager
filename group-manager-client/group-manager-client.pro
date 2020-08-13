TEMPLATE = lib
TARGET = group-manager-client
INCLUDEPATH += .

QT += dbus core

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += \
    custom_struct.h \
    group_manager_client.h
SOURCES += main.cpp \
    group_manager_client.cpp

system_head.path  =  /usr/include/ukui-group-manager
system_head.files += custom_struct.h \
                     group_manager_client.h

INSTALLS += system_head




system_lib.path  =  /usr/lib/x86_64-linux-gnu/ukui-group-manager/
system_lib.files += libgroup-manager-client.so.1.0.0    \
                    libgroup-manager-client.so.1        \
                    libgroup-manager-client.so.1.0      \
                    libgroup-manager-client.so
target.path = /usr/lib/x86_64-linux-gnu/ukui-group-manager/

INSTALLS    +=   system_lib target



