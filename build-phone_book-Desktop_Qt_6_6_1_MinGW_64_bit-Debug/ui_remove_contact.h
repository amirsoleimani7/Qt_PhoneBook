/********************************************************************************
** Form generated from reading UI file 'remove_contact.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_CONTACT_H
#define UI_REMOVE_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remove_contact
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name_to_remove;
    QPushButton *pushButton_remove_contact;

    void setupUi(QDialog *remove_contact)
    {
        if (remove_contact->objectName().isEmpty())
            remove_contact->setObjectName("remove_contact");
        remove_contact->resize(495, 447);
        layoutWidget = new QWidget(remove_contact);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 190, 211, 97));
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

        lineEdit_name_to_remove = new QLineEdit(layoutWidget);
        lineEdit_name_to_remove->setObjectName("lineEdit_name_to_remove");
        lineEdit_name_to_remove->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout->addWidget(lineEdit_name_to_remove);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_remove_contact = new QPushButton(layoutWidget);
        pushButton_remove_contact->setObjectName("pushButton_remove_contact");
        pushButton_remove_contact->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_remove_contact);


        retranslateUi(remove_contact);

        QMetaObject::connectSlotsByName(remove_contact);
    } // setupUi

    void retranslateUi(QDialog *remove_contact)
    {
        remove_contact->setWindowTitle(QCoreApplication::translate("remove_contact", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("remove_contact", "name :", nullptr));
        pushButton_remove_contact->setText(QCoreApplication::translate("remove_contact", "remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_contact: public Ui_remove_contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_CONTACT_H
