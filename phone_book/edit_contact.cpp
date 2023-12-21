#include "edit_contact.h"
#include "ui_edit_contact.h"
#include <QFile>
#include <QMessageBox>

edit_contact::edit_contact(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::edit_contact)
{
    ui->setupUi(this);
}

edit_contact::~edit_contact()
{
    delete ui;
}
void edit_contact::on_pushButton_edit_contact_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString new_name = ui->lineEdit_new_name->text();

    QString file_name_edit = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
    QFile my_file_edit(file_name_edit);

    if (my_file_edit.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&my_file_edit);

        QStringList modified_lines;
        bool contactFound = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');
            QString current_name = fields[0];

            // Check if the current line's name matches the specified name
            if (current_name == name) {
                // Replace the name with the new name
                fields[0] = new_name;
                line = fields.join('|');
                contactFound = true;
            }

            modified_lines.append(line);
        }

        if (!contactFound) {
            QMessageBox::warning(this, "title", "Contact not found!");
            my_file_edit.close();
            return;  // No need to proceed further if the contact is not found
        }

        my_file_edit.resize(0); // Truncate the file to remove its content
        my_file_edit.seek(0);    // Reposition the file cursor to the beginning

        QTextStream out(&my_file_edit);

        // Write the modified lines back to the file
        for (const QString &line : modified_lines) {
            out << line << "\n";
        }

        my_file_edit.close();
        QMessageBox::information(this, "title", "Contact information updated!");
    } else {
        QMessageBox::warning(this, "title", "Unable to open the file!");
    }
}
