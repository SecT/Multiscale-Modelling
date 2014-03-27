#-------------------------------------------------
#
# Project created by QtCreator 2014-03-24T23:56:29
#
#-------------------------------------------------

QT       += core gui
QT += widgets

TARGET = Cellular_Automaton
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Space.cpp \
    spacegui.cpp \
    cellularautomaton.cpp \
    rule.cpp \
    rulemoor.cpp

HEADERS  += mainwindow.h \
    Space.h \
    spacegui.h \
    cellularautomaton.h \
    rule.h \
    rulemoor.h

FORMS    += mainwindow.ui
