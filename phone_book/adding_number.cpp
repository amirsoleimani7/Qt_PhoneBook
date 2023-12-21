#include "adding_number.h"
#include "ui_adding_number.h"
#include <QFile>
#include <QMessageBox>
adding_number::adding_number(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adding_number)
{
    ui->setupUi(this);
}

adding_number::~adding_number()
{
    delete ui;
}
void adding_number::on_pushButton_add_number_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString type = ui->lineEdit_type->text();
    QString number = ui->lineEdit_number->text();

    // Check if any of the input fields is empty
    if (name.isEmpty() || type.isEmpty() || number.isEmpty()) {
        QMessageBox::warning(this, "Empty Field", "Please fill in all fields.");
        return;
    }

    bool add_flag = true;

    // Check if the person exists and if the type already exists for that person
    QString file_name_for_reading = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
    QFile my_file_read(file_name_for_reading);

    if (my_file_read.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&my_file_read);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');
            QString name_read = fields.value(0).trimmed();
            QString type_read = fields.value(1).trimmed();

            if (name_read == name) {
                if (type_read == type) {
                    add_flag = false;
                    break;
                }
            }
        }

        my_file_read.close();
    } else {
        QMessageBox::warning(this, "File Error", "Could not open file for checking.");
        return;
    }

    if (add_flag) {
        // Append the new entry to the file
        QFile my_file("C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt");

        if (my_file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            QTextStream out(&my_file);
            out << name << "|" << type << "|" << number << Qt::endl;
            my_file.close();

            QMessageBox::information(this, "Success", "Number added successfully.");
        } else {
            QMessageBox::warning(this, "File Error", "Could not open file for writing.");
        }
    } else {
        QMessageBox::warning(this, "Duplicate Entry", "A number with the same type already exists for this person.");
    }
}
