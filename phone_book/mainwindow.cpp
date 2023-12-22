#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString file_name = QFileDialog::getOpenFileName(this,"choose a defult directory !!",QDir::homePath());
    file_directory = file_name;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    add_acc = new addacc(this);
    add_acc->setFileDirectory(file_directory);
    add_acc->exec();
}



void MainWindow::on_pushButton_2_clicked()
{
    remove = new remove_contact(this);
    remove->setFileDirectory(file_directory);
    remove->exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    edit = new edit_contact(this);
    edit->setFileDirectory(file_directory);
    edit->exec();
}


void MainWindow::on_pushButton_show_all_contacts_clicked()
{
    show_1 = new show_all(this);
    show_1->setFileDirectory(file_directory);
    show_1->exec();
}

void MainWindow::on_pushButton_add_to_fav_main_clicked()
{
    fav = new add_to_fav(this);
    fav->setFileDirectory(file_directory);
    fav->exec();
}

QString MainWindow::get_name(){
    return file_directory;
}

void MainWindow::on_pushButton_show_all_fav_clicked()
{
    show_fav = new show_all_fav(this);
    show_fav->setFileDirectory(file_directory);
    show_fav->exec();
}


void MainWindow::on_pushButton_remove_fav_clicked()
{
    remove_fav_1 = new remove_fav(this);
    remove_fav_1->setFileDirectory(file_directory);
    remove_fav_1->exec();
}


void MainWindow::on_pushButton_show_detail_clicked()
{
    detail_1 = new show_detail(this);
    detail_1->setFileDirectory(file_directory);
    detail_1->exec();
}


void MainWindow::on_pushButton_adding_number_clicked()
{
    add_num = new adding_number(this);
    add_num->setFileDirectory(file_directory);
    add_num->exec();
}


void MainWindow::on_pushButton_remove_number_clicked()
{
    rev_num = new removing_number(this);
    rev_num->setFileDirectory(file_directory);
    rev_num->exec();
}


void MainWindow::on_pushButton_edit_num_clicked()
{
    edit_num = new edit_number(this);
    edit_num->setFileDirectory(file_directory);
    edit_num->exec();
}

void MainWindow::on_pushButton_search_clicked()
{
    sh = new search(this);
    sh->setFileDirectory(file_directory);
    sh->exec();
}



void MainWindow::on_actionsave_triggered()
{
    QString primaryFilePath = file_directory;
    if (primaryFilePath.isEmpty()) {
        return;
    }

    QString secondaryFilePath = QFileDialog::getSaveFileName(this, "Save File", QFileInfo(primaryFilePath).path(), "Text Files (*.txt);;All Files (*)");
    if (secondaryFilePath.isEmpty()) {
        return;
    }

    if (saveToFile(primaryFilePath, secondaryFilePath)) {
        QMessageBox::information(this, "Save Successful", "Data saved from " + primaryFilePath + " to " + secondaryFilePath);
    } else {
        QMessageBox::warning(this, "Save Failed", "Could not save data from " + primaryFilePath + " to " + secondaryFilePath);
    }
}


bool MainWindow::saveToFile(const QString &primaryFilePath, const QString &secondaryFilePath)
{
    QFile primaryFile(primaryFilePath);
    QFile secondaryFile(secondaryFilePath);

    // Open the primary file in ReadOnly mode
    if (!primaryFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Could not open the primary file for reading: " << primaryFile.errorString();
        return false;  // Read failed
    }

    // Open the secondary file in WriteOnly mode
    if (!secondaryFile.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Could not open the secondary file for writing: " << secondaryFile.errorString();
        primaryFile.close();
        return false;  // Write failed
    }

    QTextStream in(&primaryFile);
    QTextStream out(&secondaryFile);

    // Read and write the contents of the primary file to the secondary file
    while (!in.atEnd()) {
        QString line = in.readLine();
        out << line << "\n";
    }

    primaryFile.close();
    secondaryFile.close();
    return true;  // Save successful
}

void MainWindow::on_actionload_triggered()
{
    QString loadedFilePath = QFileDialog::getOpenFileName(this, "Load File", QFileInfo(file_directory).path(), "Text Files (*.txt);;All Files (*)");

    if (loadedFilePath.isEmpty()) {
        return;
    }

    file_directory = loadedFilePath;

    QMessageBox::information(this, "File Loaded", "File loaded successfully: " + loadedFilePath);
}

void MainWindow::on_actionexpotr_triggered()
{
    QString primaryFilePath = file_directory;
    if (primaryFilePath.isEmpty()) {
        return;
    }

    QString secondaryFilePath = QFileDialog::getSaveFileName(this, "Save File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");
    if (secondaryFilePath.isEmpty()) {
        return;
    }

    if (saveToFile(primaryFilePath, secondaryFilePath)) {
        QMessageBox::information(this, "Save Successful", "Data saved from " + primaryFilePath + " to " + secondaryFilePath);
    } else {
        QMessageBox::warning(this, "Save Failed", "Could not save data from " + primaryFilePath + " to " + secondaryFilePath);
    }
}



void MainWindow::on_actionimport_triggered()
{
    QString loadedFilePath = QFileDialog::getOpenFileName(this, "Load File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");

    if (loadedFilePath.isEmpty()) {
        return;
    }

    file_directory = loadedFilePath;

    QMessageBox::information(this, "File Loaded", "File loaded successfully: " + loadedFilePath);

}

