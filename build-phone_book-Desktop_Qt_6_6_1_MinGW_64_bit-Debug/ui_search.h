/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_search_text;
    QPushButton *pushButton_search;
    QTextBrowser *textBrowser_resualt;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName("search");
        search->resize(540, 418);
        layoutWidget = new QWidget(search);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 50, 258, 269));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #404040; /* Text color */\n"
"    font-family: \"Arial\", sans-serif; /* Replace with your preferred font family */\n"
"    font-size: 14px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
""));

        horizontalLayout->addWidget(label);

        lineEdit_search_text = new QLineEdit(layoutWidget);
        lineEdit_search_text->setObjectName("lineEdit_search_text");
        lineEdit_search_text->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF; /* Default background color */\n"
"    border: 2px solid #C0C0C0; /* Border color */\n"
"    border-radius: 15px; /* Curved corners */\n"
"    color: #404040; /* Text color */\n"
"    padding: 8px; /* Padding for content */\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5); /* Shadow effect */\n"
"    font-weight: bold; /* Set font to bold */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #F0F0F0; /* Lighter background color on hover */\n"
"    border: 2px solid #A0A0A0; /* Darker border on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #606060; /* Even darker border when focused */\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit_search_text);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_search = new QPushButton(layoutWidget);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_search);


        verticalLayout_2->addLayout(verticalLayout);

        textBrowser_resualt = new QTextBrowser(layoutWidget);
        textBrowser_resualt->setObjectName("textBrowser_resualt");
        textBrowser_resualt->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
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

        verticalLayout_2->addWidget(textBrowser_resualt);


        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("search", "search", nullptr));
        pushButton_search->setText(QCoreApplication::translate("search", "search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
