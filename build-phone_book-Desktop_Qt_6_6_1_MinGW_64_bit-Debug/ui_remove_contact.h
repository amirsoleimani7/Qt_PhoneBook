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
    QWidget *widget;
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
        widget = new QWidget(remove_contact);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 190, 211, 81));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_name_to_remove = new QLineEdit(widget);
        lineEdit_name_to_remove->setObjectName("lineEdit_name_to_remove");

        horizontalLayout->addWidget(lineEdit_name_to_remove);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_remove_contact = new QPushButton(widget);
        pushButton_remove_contact->setObjectName("pushButton_remove_contact");

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
