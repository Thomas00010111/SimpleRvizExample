#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T14:13:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleRvizExample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainapplication.cpp

HEADERS  += mainwindow.h \
    mainapplication.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -std=c++11

LIBS += -L"/opt/ros/indigo/lib/" -lroscpp -lrosconsole -lroscpp_serialization -lrostime -lrosconsole_log4cxx
LIBS += -lboost_iostreams -lboost_system -ltf
