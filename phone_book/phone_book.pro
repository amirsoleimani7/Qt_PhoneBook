QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_to_fav.cpp \
    addacc.cpp \
    edit_contact.cpp \
    main.cpp \
    mainwindow.cpp \
    remove_contact.cpp \
    show_all.cpp \
    show_all_fav.cpp

HEADERS += \
    add_to_fav.h \
    addacc.h \
    edit_contact.h \
    mainwindow.h \
    remove_contact.h \
    show_all.h \
    show_all_fav.h

FORMS += \
    add_to_fav.ui \
    addacc.ui \
    edit_contact.ui \
    mainwindow.ui \
    remove_contact.ui \
    show_all.ui \
    show_all_fav.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
