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

