/********************************************************************************
** Form generated from reading UI file 'add_to_fav.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TO_FAV_H
#define UI_ADD_TO_FAV_H

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

class Ui_add_to_fav
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name_to_fav;
    QPushButton *pushButton_add_to_fav;

    void setupUi(QDialog *add_to_fav)
    {
        if (add_to_fav->objectName().isEmpty())
            add_to_fav->setObjectName("add_to_fav");
        add_to_fav->resize(509, 401);
        widget = new QWidget(add_to_fav);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 110, 241, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_name_to_fav = new QLineEdit(widget);
        lineEdit_name_to_fav->setObjectName("lineEdit_name_to_fav");

        horizontalLayout->addWidget(lineEdit_name_to_fav);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_add_to_fav = new QPushButton(widget);
        pushButton_add_to_fav->setObjectName("pushButton_add_to_fav");

        verticalLayout->addWidget(pushButton_add_to_fav);


        retranslateUi(add_to_fav);

        QMetaObject::connectSlotsByName(add_to_fav);
    } // setupUi

    void retranslateUi(QDialog *add_to_fav)
    {
        add_to_fav->setWindowTitle(QCoreApplication::translate("add_to_fav", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_to_fav", "name", nullptr));
        pushButton_add_to_fav->setText(QCoreApplication::translate("add_to_fav", "add to fav", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_to_fav: public Ui_add_to_fav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TO_FAV_H
