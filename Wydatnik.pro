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
    ustawienia.cpp \
    firstrun.cpp

HEADERS  += wydatnik.h \
    login.h \
    registration.h \
    rozchody.h \
    wykres.h \
    obserwator.h \
    obserwowany.h \
    ustawienia.h \
    firstrun.h \
    mylabel.h

FORMS    += wydatnik.ui \
    login.ui \
    registration.ui \
    rozchody.ui \
    ustawienia.ui \
    firstrun.ui
CONFIG += libqsqlmysql4

RESOURCES += \
    icons/ikony.qrc
