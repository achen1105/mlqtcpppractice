#-------------------------------------------------
#
# Project created by QtCreator 2019-04-15T18:41:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = maid_latte
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    windows.cpp \
    about.cpp \
    help.cpp \
    home.cpp \
    cafe.cpp \
    customer.cpp \
    order.cpp \
    kitchen.cpp \
    drink.cpp \
    pastry.cpp \
    game.cpp

HEADERS += \
        mainwindow.h \
    windows.h \
    about.h \
    help.h \
    home.h \
    cafe.h \
    customer.h \
    order.h \
    kitchen.h \
    drink.h \
    pastry.h \
    game.h

FORMS += \
        mainwindow.ui \
    windows.ui \
    about.ui \
    help.ui \
    home.ui \
    cafe.ui \
    customer.ui \
    order.ui \
    kitchen.ui \
    drink.ui \
    pastry.ui \
    game.ui

CONFIG += mobility
MOBILITY = 


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    mlresources.qrc
