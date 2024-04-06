QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mainwindow2.cpp \
    mainwindow3.cpp \
    mainwindow4.cpp \
    mainwindow5.cpp

HEADERS += \
    mainwindow.h \
    mainwindow2.h \
    mainwindow3.h \
    mainwindow4.h \
    mainwindow5.h

FORMS += \
    mainwindow.ui \
    mainwindow2.ui \
    mainwindow3.ui \
    mainwindow4.ui \
    mainwindow5.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image1.qrc \
    image2.qrc \
    image3.qrc \
    image4.qrc \
    image5.qrc \
    image6.qrc \
    image7.qrc \
    image8.qrc
