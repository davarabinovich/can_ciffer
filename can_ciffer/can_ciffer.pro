QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += \
    src

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/messages/can_msg.cpp \
    src/msgs/can_msg.cpp

HEADERS += \
    mainwindow.h \
    parsed_msg.h \
    src/configuration/configuration.h \
    src/management/manager.h \
    src/msg_handling/composer.h \
    src/msg_handling/msg_handler.h \
    src/msg_handling/parser.h \
    src/msgs/can_msg.h \
    src/msgs/parsed_msg.h \
    src/settings.h

FORMS += \
    mainwindow.ui \
    src/mainwindow.ui

TRANSLATIONS += \
    can_ciffer_en_GB.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
