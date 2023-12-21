/********************************************************************************
** Form generated from reading UI file 'show_detail.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_DETAIL_H
#define UI_SHOW_DETAIL_H

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

class Ui_show_detail
{
public:
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name_to_show_details;
    QPushButton *pushButton_show_details;

    void setupUi(QDialog *show_detail)
    {
        if (show_detail->objectName().isEmpty())
            show_detail->setObjectName("show_detail");
        show_detail->resize(516, 425);
        textBrowser = new QTextBrowser(show_detail);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(230, 100, 256, 192));
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
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
        layoutWidget = new QWidget(show_detail);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 170, 199, 97));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        lineEdit_name_to_show_details = new QLineEdit(layoutWidget);
        lineEdit_name_to_show_details->setObjectName("lineEdit_name_to_show_details");
        lineEdit_name_to_show_details->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout->addWidget(lineEdit_name_to_show_details);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_show_details = new QPushButton(layoutWidget);
        pushButton_show_details->setObjectName("pushButton_show_details");
        pushButton_show_details->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_show_details);


        retranslateUi(show_detail);

        QMetaObject::connectSlotsByName(show_detail);
    } // setupUi

    void retranslateUi(QDialog *show_detail)
    {
        show_detail->setWindowTitle(QCoreApplication::translate("show_detail", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("show_detail", "name", nullptr));
        pushButton_show_details->setText(QCoreApplication::translate("show_detail", "show detail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_detail: public Ui_show_detail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DETAIL_H
