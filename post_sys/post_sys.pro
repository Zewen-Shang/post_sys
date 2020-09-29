QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    courier_main.cpp \
    database.cpp \
    dfs.cpp \
    globla.cpp \
    main.cpp \
    qdlglogin.cpp \
    sub_mananger_main.cpp \
    sys_mananger_main.cpp \
    test.cpp \
    weatherfetch.cpp

HEADERS += \
    courier_main.h \
    database.h \
    dfs.h \
    globla.h \
    qdlglogin.h \
    sub_mananger_main.h \
    sys_mananger_main.h \
    test.h \
    weatherfetch.h

FORMS += \
    courier_main.ui \
    qdlglogin.ui \
    sub_mananger_main.ui \
    sys_mananger_main.ui \
    test.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    ../resource/bg/bg.qrc
