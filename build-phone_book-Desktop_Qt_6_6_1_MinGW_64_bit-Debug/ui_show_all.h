/********************************************************************************
** Form generated from reading UI file 'show_all.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ALL_H
#define UI_SHOW_ALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_show_all
{
public:
    QTextBrowser *textBrowser_show_all_contacts;

    void setupUi(QDialog *show_all)
    {
        if (show_all->objectName().isEmpty())
            show_all->setObjectName("show_all");
        show_all->resize(554, 413);
        textBrowser_show_all_contacts = new QTextBrowser(show_all);
        textBrowser_show_all_contacts->setObjectName("textBrowser_show_all_contacts");
        textBrowser_show_all_contacts->setGeometry(QRect(110, 80, 291, 221));
        textBrowser_show_all_contacts->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
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

        retranslateUi(show_all);

        QMetaObject::connectSlotsByName(show_all);
    } // setupUi

    void retranslateUi(QDialog *show_all)
    {
        show_all->setWindowTitle(QCoreApplication::translate("show_all", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_all: public Ui_show_all {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ALL_H
