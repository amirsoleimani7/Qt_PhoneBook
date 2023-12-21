QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addacc.cpp \
    edit_contact.cpp \
    main.cpp \
    mainwindow.cpp \
    remove_contact.cpp \
    show_all.cpp

HEADERS += \
    addacc.h \
    edit_contact.h \
    mainwindow.h \
    remove_contact.h \
    show_all.h

FORMS += \
    addacc.ui \
    edit_contact.ui \
    mainwindow.ui \
    remove_contact.ui \
    show_all.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
