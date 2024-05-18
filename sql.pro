QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dashboard.cpp \
    goboard.cpp \
    main.cpp \
    mainwindow.cpp \
    mylabel.cpp \
    sqlcommond.cpp \
    toregister.cpp

HEADERS += \
    dashboard.h \
    goboard.h \
    mainwindow.h \
    mylabel.h \
    sqlcommond.h \
    toregister.h

FORMS += \
    dashboard.ui \
    goboard.ui \
    mainwindow.ui \
    toregister.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
