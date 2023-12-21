#include "add_to_fav.h"
#include "ui_add_to_fav.h"
#include <QFile>
#include <QMessageBox>
add_to_fav::add_to_fav(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_to_fav)
{
    ui->setupUi(this);
}

add_to_fav::~add_to_fav()
{
    delete ui;
}

void add_to_fav::on_pushButton_add_to_fav_clicked()
{
    QString name_to_fav = ui->lineEdit_name_to_fav->text();
    QString file_fav = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
    QFile file_fav_edit(file_fav);

    if (file_fav_edit.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&file_fav_edit);

        QStringList modified_lines;
        bool alreadyInFav = false;
        bool contactFound = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');

            QString current_name = fields.value(0).trimmed();  // Assuming the name is in the first position (index 0)

            // Check if the current line's name matches the specified name
            if (current_name == name_to_fav) {
                // Check if the line already contains the |* indicating it's in favorites
                if (line.contains("|*")) {
                    alreadyInFav = true;
                } else {
                    // Append |* to the line if it matches the specified name
                    line += "|*";
                }

                contactFound = true;
            }

            modified_lines.append(line);
        }

        if (!contactFound) {
            QMessageBox::warning(this, "title", "Contact not found!");
            file_fav_edit.close();
            return;  // No need to proceed further if the contact is not found
        }

        if (alreadyInFav) {
            QMessageBox::warning(this, "title", "Contact is already in favorites!");
        } else {
            file_fav_edit.resize(0); // Truncate the file to remove its content
            file_fav_edit.seek(0);    // Reposition the file cursor to the beginning

            QTextStream out(&file_fav_edit);

            // Write the modified lines back to the file
            for (const QString &line : modified_lines) {
                out << line << "\n";
            }

            file_fav_edit.close();
            QMessageBox::information(this, "title", "Contact added to favorites!");
        }
    } else {
        qDebug() << "Could not open the file for reading and writing: " << file_fav_edit.errorString();
    }
}


