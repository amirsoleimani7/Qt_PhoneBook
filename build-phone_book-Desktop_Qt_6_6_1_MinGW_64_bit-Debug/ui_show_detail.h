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
    QWidget *widget;
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
        widget = new QWidget(show_detail);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 170, 199, 68));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_name_to_show_details = new QLineEdit(widget);
        lineEdit_name_to_show_details->setObjectName("lineEdit_name_to_show_details");

        horizontalLayout->addWidget(lineEdit_name_to_show_details);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_show_details = new QPushButton(widget);
        pushButton_show_details->setObjectName("pushButton_show_details");

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
