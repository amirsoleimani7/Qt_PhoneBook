/********************************************************************************
** Form generated from reading UI file 'edit_contact.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_CONTACT_H
#define UI_EDIT_CONTACT_H

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

class Ui_edit_contact
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_new_name;
    QPushButton *pushButton_edit_contact;

    void setupUi(QDialog *edit_contact)
    {
        if (edit_contact->objectName().isEmpty())
            edit_contact->setObjectName("edit_contact");
        edit_contact->resize(624, 438);
        widget = new QWidget(edit_contact);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(190, 110, 271, 181));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName("lineEdit_name");

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_new_name = new QLineEdit(widget);
        lineEdit_new_name->setObjectName("lineEdit_new_name");

        verticalLayout->addWidget(lineEdit_new_name);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_edit_contact = new QPushButton(widget);
        pushButton_edit_contact->setObjectName("pushButton_edit_contact");

        verticalLayout_3->addWidget(pushButton_edit_contact);


        retranslateUi(edit_contact);

        QMetaObject::connectSlotsByName(edit_contact);
    } // setupUi

    void retranslateUi(QDialog *edit_contact)
    {
        edit_contact->setWindowTitle(QCoreApplication::translate("edit_contact", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("edit_contact", "name :", nullptr));
        label_2->setText(QCoreApplication::translate("edit_contact", "new name", nullptr));
        pushButton_edit_contact->setText(QCoreApplication::translate("edit_contact", "edit contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_contact: public Ui_edit_contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_CONTACT_H
