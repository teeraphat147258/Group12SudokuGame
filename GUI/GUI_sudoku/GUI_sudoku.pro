QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    sudoku.cpp \
    window1.cpp \
    window2.cpp \
    window3.cpp

HEADERS += \
    mainwindow.h \
    sudoku.h \
    window1.h \
    window2.h \
    window3.h

FORMS += \
    mainwindow.ui \
    window1.ui \
    window2.ui \
    window3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
