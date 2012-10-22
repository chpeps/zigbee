#-------------------------------------------------
#
# Project created by QtCreator 2012-09-26T13:56:14
#
#-------------------------------------------------

QT       += core gui

TARGET = Zigbee
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    rs232.cpp
include(3rdparty/qextserialport/src/qextserialport.pri)

HEADERS  += mainwindow.h \
    rs232.h

FORMS    += mainwindow.ui
