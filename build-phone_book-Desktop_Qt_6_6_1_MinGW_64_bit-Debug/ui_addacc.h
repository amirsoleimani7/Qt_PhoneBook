/********************************************************************************
** Form generated from reading UI file 'addacc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACC_H
#define UI_ADDACC_H

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

class Ui_addacc
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_name;
    QLabel *label_type;
    QLabel *label_number;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_type;
    QLineEdit *lineEdit_number;
    QPushButton *pushButton_add_contact;

    void setupUi(QDialog *addacc)
    {
        if (addacc->objectName().isEmpty())
            addacc->setObjectName("addacc");
        addacc->resize(517, 408);
        widget = new QWidget(addacc);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 130, 271, 181));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_name = new QLabel(widget);
        label_name->setObjectName("label_name");

        verticalLayout_2->addWidget(label_name);

        label_type = new QLabel(widget);
        label_type->setObjectName("label_type");

        verticalLayout_2->addWidget(label_type);

        label_number = new QLabel(widget);
        label_number->setObjectName("label_number");

        verticalLayout_2->addWidget(label_number);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName("lineEdit_name");

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_type = new QLineEdit(widget);
        lineEdit_type->setObjectName("lineEdit_type");

        verticalLayout->addWidget(lineEdit_type);

        lineEdit_number = new QLineEdit(widget);
        lineEdit_number->setObjectName("lineEdit_number");

        verticalLayout->addWidget(lineEdit_number);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_add_contact = new QPushButton(widget);
        pushButton_add_contact->setObjectName("pushButton_add_contact");

        verticalLayout_3->addWidget(pushButton_add_contact);


        retranslateUi(addacc);

        QMetaObject::connectSlotsByName(addacc);
    } // setupUi

    void retranslateUi(QDialog *addacc)
    {
        addacc->setWindowTitle(QCoreApplication::translate("addacc", "Dialog", nullptr));
        label_name->setText(QCoreApplication::translate("addacc", "name", nullptr));
        label_type->setText(QCoreApplication::translate("addacc", "type", nullptr));
        label_number->setText(QCoreApplication::translate("addacc", "number", nullptr));
        pushButton_add_contact->setText(QCoreApplication::translate("addacc", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addacc: public Ui_addacc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACC_H
