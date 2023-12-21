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


void MainWindow::on_pushButton_remove_fav_clicked()
{
    remove_fav_1 = new remove_fav(this);
    remove_fav_1->exec();
}


void MainWindow::on_pushButton_show_detail_clicked()
{
    detail_1 = new show_detail(this);
    detail_1->exec();
}


void MainWindow::on_pushButton_adding_number_clicked()
{
    add_num = new adding_number(this);
    add_num->exec();
}


void MainWindow::on_pushButton_remove_number_clicked()
{
    rev_num = new removing_number(this);
    rev_num->exec();
}


void MainWindow::on_pushButton_edit_num_clicked()
{
    edit_num = new edit_number(this);
    edit_num->exec();

}


void MainWindow::on_pushButton_search_clicked()
{
    sh = new search(this);
    sh->exec();
}

