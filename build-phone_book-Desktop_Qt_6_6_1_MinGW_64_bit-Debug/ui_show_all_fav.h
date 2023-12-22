/********************************************************************************
** Form generated from reading UI file 'show_all_fav.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ALL_FAV_H
#define UI_SHOW_ALL_FAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_all_fav
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser_show_all_fav;
    QPushButton *pushButton_show_all_fav;

    void setupUi(QDialog *show_all_fav)
    {
        if (show_all_fav->objectName().isEmpty())
            show_all_fav->setObjectName("show_all_fav");
        show_all_fav->resize(544, 382);
        widget = new QWidget(show_all_fav);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 80, 258, 230));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser_show_all_fav = new QTextBrowser(widget);
        textBrowser_show_all_fav->setObjectName("textBrowser_show_all_fav");
        textBrowser_show_all_fav->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"    background-color: #F0F0F0; /* Background color */\n"
"    border: 2px solid #C0C0C0; /* Border color */\n"
"    border-radius: 15px; /* Curved corners */\n"
"    color: #404040; /* Text color */\n"
"    padding: 10px; /* Padding for content */\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5); /* Shadow effect */\n"
"    font-weight: bold; /* Set font to bold */\n"
"}\n"
"\n"
"QTextBrowser::hover {\n"
"    border: 2px solid #A0A0A0; /* Darker border on hover */\n"
"}\n"
"\n"
"QTextBrowser::focus {\n"
"    border: 2px solid #606060; /* Even darker border when focused */\n"
"}\n"
""));

        verticalLayout->addWidget(textBrowser_show_all_fav);

        pushButton_show_all_fav = new QPushButton(widget);
        pushButton_show_all_fav->setObjectName("pushButton_show_all_fav");
        pushButton_show_all_fav->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080; /* Default button color (gray) */\n"
"    border: 2px solid #404040; /* Border color darker than the button color */\n"
"    border-radius: 15px; /* Curved corners */\n"
"    color: white; /* Text color */\n"
"    padding: 10px 20px; /* Padding for content */\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5); /* Shadow effect */\n"
"    font-weight: bold; /* Set font to bold */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040; /* Darker color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #202020; /* Even darker color on click */\n"
"    box-shadow: 1px 1px 2px rgba(0, 0, 0, 0.5); /* Adjusted shadow on click */\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_show_all_fav);


        retranslateUi(show_all_fav);

        QMetaObject::connectSlotsByName(show_all_fav);
    } // setupUi

    void retranslateUi(QDialog *show_all_fav)
    {
        show_all_fav->setWindowTitle(QCoreApplication::translate("show_all_fav", "Dialog", nullptr));
        pushButton_show_all_fav->setText(QCoreApplication::translate("show_all_fav", "show all fav", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_all_fav: public Ui_show_all_fav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ALL_FAV_H
