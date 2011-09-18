#-------------------------------------------------
#
# Project created by QtCreator 2011-05-04T17:57:53
#
#-------------------------------------------------

QT       += core gui
QT        +=sql

TARGET = Wydatnik
TEMPLATE = app


SOURCES += main.cpp\
        wydatnik.cpp \
    login.cpp \
    registration.cpp \
    rozchody.cpp \
    wykres.cpp \
    mytablewidget.cpp \
    mycheckbox.cpp \
    editdata.cpp

HEADERS  += wydatnik.h \
    login.h \
    registration.h \
    rozchody.h \
    wykres.h \
    obserwator.h \
    obserwowany.h \
    mylabel.h \
    mytablewidget.h \
    editdata.h \
    mycheckbox.h

FORMS    += wydatnik.ui \
    login.ui \
    registration.ui \
    rozchody.ui \
    editdata.ui
CONFIG += libqsqlmysql4

RESOURCES += \
    icons/ikony.qrc
