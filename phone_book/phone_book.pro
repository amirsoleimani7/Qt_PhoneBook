QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_to_fav.cpp \
    addacc.cpp \
    adding_number.cpp \
    edit_contact.cpp \
    edit_number.cpp \
    main.cpp \
    mainwindow.cpp \
    remove_contact.cpp \
    remove_fav.cpp \
    removing_number.cpp \
    search.cpp \
    show_all.cpp \
    show_all_fav.cpp \
    show_detail.cpp

HEADERS += \
    add_to_fav.h \
    addacc.h \
    adding_number.h \
    edit_contact.h \
    edit_number.h \
    mainwindow.h \
    remove_contact.h \
    remove_fav.h \
    removing_number.h \
    search.h \
    show_all.h \
    show_all_fav.h \
    show_detail.h

FORMS += \
    add_to_fav.ui \
    addacc.ui \
    adding_number.ui \
    edit_contact.ui \
    edit_number.ui \
    mainwindow.ui \
    remove_contact.ui \
    remove_fav.ui \
    removing_number.ui \
    search.ui \
    show_all.ui \
    show_all_fav.ui \
    show_detail.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
