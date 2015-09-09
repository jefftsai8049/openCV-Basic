#-------------------------------------------------
#
# Project created by QtCreator 2015-09-09T10:02:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = opencv_basic
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h


INCLUDEPATH += C:\\opencv300_x64_vc2013\\include \
                C:\\opencv300_x64_vc2013\\include\\opencv \
                C:\\opencv300_x64_vc2013\\include\\opencv2 \

##debug libs

LIBS +=  C:\\opencv300_x64_vc2013\\lib\\opencv_world300.lib \
                C:\\opencv300_x64_vc2013\\lib\\opencv_ts300.lib \
#release libs
                C:\\opencv300_x64_vc2013\\lib\\opencv_world300d.lib \
                C:\\opencv300_x64_vc2013\\lib\\opencv_ts300d.lib

FORMS    += mainwindow.ui
