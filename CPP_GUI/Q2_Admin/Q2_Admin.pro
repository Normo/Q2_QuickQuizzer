#-------------------------------------------------
#
# Project created by QtCreator 2012-11-05T10:04:56
#
#-------------------------------------------------

QT       += network sql

TARGET = Q2_Admin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dbhandler.cpp \
    filehandler.cpp

HEADERS  += mainwindow.h \
    dbhandler.h \
    filehandler.h

FORMS    += mainwindow.ui

TRANSLATIONS = Q2_Admin_de.ts \
    Q2_Admin_en.ts
