/********************************************************************************
** Form generated from reading UI file 'edit_number.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_NUMBER_H
#define UI_EDIT_NUMBER_H

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

class Ui_edit_number
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_type;
    QLineEdit *lineEdit_number;
    QLineEdit *lineEdit_new_number;
    QPushButton *pushButton_change_number;

    void setupUi(QDialog *edit_number)
    {
        if (edit_number->objectName().isEmpty())
            edit_number->setObjectName("edit_number");
        edit_number->resize(493, 372);
        layoutWidget = new QWidget(edit_number);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 90, 271, 246));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #404040; /* Text color */\n"
"    font-family: \"Arial\", sans-serif; /* Replace with your preferred font family */\n"
"    font-size: 14px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
""));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #404040; /* Text color */\n"
"    font-family: \"Arial\", sans-serif; /* Replace with your preferred font family */\n"
"    font-size: 14px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
""));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #404040; /* Text color */\n"
"    font-family: \"Arial\", sans-serif; /* Replace with your preferred font family */\n"
"    font-size: 14px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
""));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #404040; /* Text color */\n"
"    font-family: \"Arial\", sans-serif; /* Replace with your preferred font family */\n"
"    font-size: 14px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"}\n"
""));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_type = new QLineEdit(layoutWidget);
        lineEdit_type->setObjectName("lineEdit_type");
        lineEdit_type->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_type);

        lineEdit_number = new QLineEdit(layoutWidget);
        lineEdit_number->setObjectName("lineEdit_number");
        lineEdit_number->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_number);

        lineEdit_new_number = new QLineEdit(layoutWidget);
        lineEdit_new_number->setObjectName("lineEdit_new_number");
        lineEdit_new_number->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_new_number);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_change_number = new QPushButton(layoutWidget);
        pushButton_change_number->setObjectName("pushButton_change_number");
        pushButton_change_number->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_3->addWidget(pushButton_change_number);


        retranslateUi(edit_number);

        QMetaObject::connectSlotsByName(edit_number);
    } // setupUi

    void retranslateUi(QDialog *edit_number)
    {
        edit_number->setWindowTitle(QCoreApplication::translate("edit_number", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("edit_number", "name", nullptr));
        label_2->setText(QCoreApplication::translate("edit_number", "type", nullptr));
        label_3->setText(QCoreApplication::translate("edit_number", "number", nullptr));
        label_4->setText(QCoreApplication::translate("edit_number", "new number", nullptr));
        pushButton_change_number->setText(QCoreApplication::translate("edit_number", "changing the number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_number: public Ui_edit_number {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_NUMBER_H
