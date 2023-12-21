#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "addacc.h"
#include "remove_contact.h"
#include "edit_contact.h"
#include "show_all.h"
#include "add_to_fav.h"
#include "show_all_fav.h"
#include "remove_fav.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString file_directory;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_show_all_contacts_clicked();

    void on_pushButton_add_to_fav_main_clicked();

    void on_pushButton_show_all_fav_clicked();

    void on_pushButton_remove_fav_clicked();

private:
    Ui::MainWindow *ui;
    addacc *add_acc;
    remove_contact *remove;
    edit_contact *edit;
    show_all *show_1;
    add_to_fav *fav;
    show_all_fav *show_fav;
    remove_fav *remove_fav_1;

};
#endif // MAINWINDOW_H
