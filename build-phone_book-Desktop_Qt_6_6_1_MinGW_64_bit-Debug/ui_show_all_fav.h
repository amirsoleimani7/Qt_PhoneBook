/********************************************************************************
** Form generated from reading UI file 'show_all_fav.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ALL_FAV_H
#define UI_SHOW_ALL_FAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_show_all_fav
{
public:
    QTextBrowser *textBrowser_show_all_fav;

    void setupUi(QDialog *show_all_fav)
    {
        if (show_all_fav->objectName().isEmpty())
            show_all_fav->setObjectName("show_all_fav");
        show_all_fav->resize(544, 382);
        textBrowser_show_all_fav = new QTextBrowser(show_all_fav);
        textBrowser_show_all_fav->setObjectName("textBrowser_show_all_fav");
        textBrowser_show_all_fav->setGeometry(QRect(130, 80, 256, 192));

        retranslateUi(show_all_fav);

        QMetaObject::connectSlotsByName(show_all_fav);
    } // setupUi

    void retranslateUi(QDialog *show_all_fav)
    {
        show_all_fav->setWindowTitle(QCoreApplication::translate("show_all_fav", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_all_fav: public Ui_show_all_fav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ALL_FAV_H
