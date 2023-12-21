/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_show_detail;
    QPushButton *pushButton_remove_fav;
    QPushButton *pushButton_show_all_fav;
    QPushButton *pushButton_add_to_fav_main;
    QPushButton *pushButton_show_all_contacts;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(573, 475);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 150, 201, 283));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_show_detail = new QPushButton(widget);
        pushButton_show_detail->setObjectName("pushButton_show_detail");

        verticalLayout->addWidget(pushButton_show_detail);

        pushButton_remove_fav = new QPushButton(widget);
        pushButton_remove_fav->setObjectName("pushButton_remove_fav");

        verticalLayout->addWidget(pushButton_remove_fav);

        pushButton_show_all_fav = new QPushButton(widget);
        pushButton_show_all_fav->setObjectName("pushButton_show_all_fav");

        verticalLayout->addWidget(pushButton_show_all_fav);

        pushButton_add_to_fav_main = new QPushButton(widget);
        pushButton_add_to_fav_main->setObjectName("pushButton_add_to_fav_main");

        verticalLayout->addWidget(pushButton_add_to_fav_main);

        pushButton_show_all_contacts = new QPushButton(widget);
        pushButton_show_all_contacts->setObjectName("pushButton_show_all_contacts");

        verticalLayout->addWidget(pushButton_show_all_contacts);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 573, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_show_detail->setText(QCoreApplication::translate("MainWindow", "show detail of a contact", nullptr));
        pushButton_remove_fav->setText(QCoreApplication::translate("MainWindow", "remove fav", nullptr));
        pushButton_show_all_fav->setText(QCoreApplication::translate("MainWindow", "show all fav", nullptr));
        pushButton_add_to_fav_main->setText(QCoreApplication::translate("MainWindow", "add to fav", nullptr));
        pushButton_show_all_contacts->setText(QCoreApplication::translate("MainWindow", "show all contacts", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "edit contact", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "remove contact", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "add contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
