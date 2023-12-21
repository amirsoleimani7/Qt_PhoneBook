#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "add_contact.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QString file_name = QFileDialog::getOpenFileName(this,"choose directory!!",QDir::homePath());
    // file_directory = file_name;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    add_acc = new addacc(this);
    add_acc->exec();
}



void MainWindow::on_pushButton_2_clicked()
{
    remove = new remove_contact(this);
    remove->exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    edit = new edit_contact(this);
    edit->exec();
}


void MainWindow::on_pushButton_show_all_contacts_clicked()
{
    show_1 = new show_all(this);
    show_1->exec();
}


void MainWindow::on_pushButton_add_to_fav_main_clicked()
{
    fav = new add_to_fav(this);
    fav->exec();
}


void MainWindow::on_pushButton_show_all_fav_clicked()
{
    show_fav = new show_all_fav(this);
    show_fav->exec();
}

