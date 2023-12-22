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
void addacc::setFileDirectory(const QString& directory){
    file_directory = directory;
}
void addacc::on_pushButton_add_contact_clicked()
{
    QString name = ui->lineEdit_name->text().trimmed();
    QString type = ui->lineEdit_type->text().trimmed();
    QString number = ui->lineEdit_number->text().trimmed();

    if (name.isEmpty() || type.isEmpty() || number.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    bool add_flag = true;
    QString file_name_for_reading = file_directory;
    QFile my_file_read(file_name_for_reading);

    if (my_file_read.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&my_file_read);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');
            QString name_read = fields.value(0).trimmed();
            QString type_read = fields.value(1).trimmed();

            if (name_read == name && type_read == type) {
                add_flag = false;
                break;
            }
        }

        my_file_read.close();
    } else {
        QMessageBox::warning(this, "File Error", "Could not open file for checking.");
        return;
    }

    if (add_flag) {
        QString file_dir = file_directory;
        QFile my_file(file_dir);

        if (!my_file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            QMessageBox::warning(this, "File Error", "Could not open file for writing.");
            return;
        }

        // Move the cursor to the end of the file
        my_file.seek(my_file.size());

        QTextStream out(&my_file);
        out << name << "|" << type << "|" << number << Qt::endl;
        my_file.close();
        QMessageBox::information(this, "Success", "Contact added successfully.");
    } else {
        QMessageBox::warning(this, "Duplicate", "A contact with the same name and type already exists.");
    }
}

// void addacc::setFileDirectory(const QString& directory){
//     file_directory = directory;
// }

// void addacc::on_pushButton_add_contact_clicked()
// {
//     QString name =ui->lineEdit_name->text();
//     QString type =ui->lineEdit_type->text();
//     QString number =ui->lineEdit_number->text();

//     if(ui->lineEdit_name->text().isEmpty()){
//         QMessageBox::warning(this,"name","name is empty!!");
//     }
//     if(ui->lineEdit_type->text().isEmpty()){
//         QMessageBox::warning(this,"type","type is empty!!");
//     }
//     if(ui->lineEdit_number->text().isEmpty()){
//         QMessageBox::warning(this,"number","number is empty!!");
//     }
//     else{
//         bool add_flag = true;
//         QString file_name_for_reading = file_directory;
//         QFile my_file_read(file_name_for_reading);
//         if (my_file_read.open(QIODevice::ReadOnly | QIODevice::Text)) {
//             //QMessageBox::warning(this,"title","couldnt open file for checking");
//             QTextStream in(&my_file_read);
//             while (!in.atEnd()){
//             QString line = in.readLine();
//             QStringList fields = line.split('|');
//             QString name_read = fields[0];
//             QString type_read = fields[1];
//             //QString number_read = fields[2];
//             if(name_read == name){
//                 if(type_read == type){
//                     add_flag = false;
//                     break;
//                     }
//                 }
//             }
//         }

//         if(add_flag){

//         QString file_dir = file_directory;
//         QFile my_file(file_dir);
//         if (!my_file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
//             //qDebug() << "Could not open file";
//             QMessageBox::warning(this,"title","could not open file");

//             return;
//         }

//         QTextStream out(&my_file);
//         out << name <<"|"<<type<<"|"<<number<<Qt::endl;
//         my_file.flush();
//         my_file.close();
//         QMessageBox::information(this,"title","added sucesfully");

//         }
//         else{
//             QMessageBox::warning(this,"titel","there is a number with the same type in there!!");
//         }

//     }
// }
