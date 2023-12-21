/********************************************************************************
** Form generated from reading UI file 'remove_fav.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_FAV_H
#define UI_REMOVE_FAV_H

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

class Ui_remove_fav
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_fav_remove;
    QPushButton *pushButton_remove_from_fav;

    void setupUi(QDialog *remove_fav)
    {
        if (remove_fav->objectName().isEmpty())
            remove_fav->setObjectName("remove_fav");
        remove_fav->resize(570, 443);
        widget = new QWidget(remove_fav);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 220, 199, 68));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_fav_remove = new QLineEdit(widget);
        lineEdit_fav_remove->setObjectName("lineEdit_fav_remove");

        horizontalLayout->addWidget(lineEdit_fav_remove);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_remove_from_fav = new QPushButton(widget);
        pushButton_remove_from_fav->setObjectName("pushButton_remove_from_fav");

        verticalLayout->addWidget(pushButton_remove_from_fav);


        retranslateUi(remove_fav);

        QMetaObject::connectSlotsByName(remove_fav);
    } // setupUi

    void retranslateUi(QDialog *remove_fav)
    {
        remove_fav->setWindowTitle(QCoreApplication::translate("remove_fav", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("remove_fav", "name", nullptr));
        pushButton_remove_from_fav->setText(QCoreApplication::translate("remove_fav", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_fav: public Ui_remove_fav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_FAV_H
