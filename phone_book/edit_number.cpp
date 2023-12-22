#include "edit_number.h"
#include "ui_edit_number.h"
#include <QFile>
#include <QMessageBox>
edit_number::edit_number(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::edit_number)
{
    ui->setupUi(this);
}

edit_number::~edit_number()
{
    delete ui;
}
void edit_number::setFileDirectory(const QString& directory){
    file_directory = directory;
}
void edit_number::on_pushButton_change_number_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString type = ui->lineEdit_type->text();
    QString number = ui->lineEdit_number->text();
    QString new_number = ui->lineEdit_new_number->text();

    // Check if any of the input fields is empty
    if (name.isEmpty() || type.isEmpty() || number.isEmpty() || new_number.isEmpty()) {
        QMessageBox::warning(this, "Empty Field", "Please fill in all fields.");
        return;
    }

    bool edit_flag = false;
    QStringList modified_lines;

    // Check if the person exists and if the type and number exist for that person
    QString file_name_for_reading = file_directory;
    QFile my_file_read(file_name_for_reading);

    if (my_file_read.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&my_file_read);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');
            QString name_read = fields.value(0).trimmed();
            QString type_read = fields.value(1).trimmed();
            QString number_read = fields.value(2).trimmed();

            // Check if the person, type, and number match
            if (name_read == name && type_read == type && number_read == number) {
                edit_flag = true;
                // Change the number to the new number
                line.replace(number, new_number);
            }

            // Keep lines that are not the one to be edited
            modified_lines.append(line);
        }

        my_file_read.close();
    } else {
        QMessageBox::warning(this, "File Error", "Could not open file for checking.");
        return;
    }

    if (!edit_flag) {
        QMessageBox::warning(this, "Entry Not Found", "no member found with these properties.");
        return;
    }

    // Write the modified lines back to the file
    QFile my_file_write(file_directory);

    if (my_file_write.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QTextStream out(&my_file_write);

        for (const QString &line : modified_lines) {
            out << line << Qt::endl;
        }

        my_file_write.close();
        QMessageBox::information(this, "Success", "Number changed successfully.");
    } else {
        QMessageBox::warning(this, "File Error", "Could not open file for writing.");
    }
}


