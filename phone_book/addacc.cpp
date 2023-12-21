#include "addacc.h"
#include "ui_addacc.h"
#include <QTextStream>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

addacc::addacc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addacc)
{
    ui->setupUi(this);
}

addacc::~addacc()
{
    delete ui;
}


void addacc::on_pushButton_add_contact_clicked()
{
    QString name =ui->lineEdit_name->text();
    QString type =ui->lineEdit_type->text();
    QString number =ui->lineEdit_number->text();

    if(ui->lineEdit_name->text().isEmpty()){
        QMessageBox::warning(this,"name","name is empty!!");
    }
    if(ui->lineEdit_type->text().isEmpty()){
        QMessageBox::warning(this,"type","type is empty!!");
    }
    if(ui->lineEdit_number->text().isEmpty()){
        QMessageBox::warning(this,"number","number is empty!!");
    }
    else{
        bool add_flag = true;
        QString file_name_for_reading = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
        QFile my_file_read(file_name_for_reading);
        if (my_file_read.open(QIODevice::ReadOnly | QIODevice::Text)) {
            //QMessageBox::warning(this,"title","couldnt open file for checking");
            QTextStream in(&my_file_read);
            while (!in.atEnd()){
            QString line = in.readLine();
            QStringList fields = line.split('|');
            QString name_read = fields[0];
            QString type_read = fields[1];
            //QString number_read = fields[2];
            if(name_read == name){
                if(type_read == type){
                    add_flag = false;
                    break;
                    }
                }
            }
        }

        if(add_flag){

        QString file_dir = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
        QFile my_file(file_dir);
        if (!my_file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            //qDebug() << "Could not open file";
            QMessageBox::warning(this,"title","could not open file");

            return;
        }

        QTextStream out(&my_file);
        out << name <<"|"<<type<<"|"<<number<<Qt::endl;
        my_file.flush();
        my_file.close();
        QMessageBox::information(this,"title","added sucesfully");

        }
        else{
            QMessageBox::warning(this,"titel","there is a number with the same type in there!!");
        }

    }
}
