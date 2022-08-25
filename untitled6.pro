QT += core gui testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sample
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++14

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    parsetext.cpp \
    unittest.cpp
HEADERS += \
    mainwindow.h \
    parsetext.h \
    unittest.h

FORMS += \
    mainwindow.ui

DESTDIR =../
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
