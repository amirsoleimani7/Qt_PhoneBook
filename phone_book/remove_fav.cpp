#include "remove_fav.h"
#include "ui_remove_fav.h"
#include <QFile>
#include <QMessageBox>
remove_fav::remove_fav(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::remove_fav)
{
    ui->setupUi(this);
}

remove_fav::~remove_fav()
{
    delete ui;
}
void remove_fav::on_pushButton_remove_from_fav_clicked()
{
    QString name_to_fav = ui->lineEdit_fav_remove->text();
    QString file_remove_fav = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
    QFile file_fav_edit(file_remove_fav);

    if (file_fav_edit.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&file_fav_edit);

        QStringList modified_lines;
        bool contactFound = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');

            QString current_name = fields.value(0).trimmed();  // Assuming the name is in the first position (index 0)

            // Check if the current line's name matches the specified name
            if (current_name == name_to_fav) {
                // Check if the line contains |* indicating it's in favorites
                if (line.contains("|*")) {
                    // Remove |* from the line
                    line.remove("|*");
                    contactFound = true;
                } else {
                    // Display a message if the contact is not in favorites
                    QMessageBox::warning(this, "title", "Contact is not in favorites!");
                    file_fav_edit.close();
                    return;  // No need to proceed further if the contact is not in favorites
                }
            }

            modified_lines.append(line);
        }

        if (!contactFound) {
            // Display a message if the contact is not found
            QMessageBox::warning(this, "title", "Contact not found!");
            file_fav_edit.close();
            return;  // No need to proceed further if the contact is not found
        }

        // Truncate the file to remove its content
        file_fav_edit.resize(0);
        // Reposition the file cursor to the beginning
        file_fav_edit.seek(0);

        QTextStream out(&file_fav_edit);

        // Write the modified lines back to the file
        for (const QString &line : modified_lines) {
            out << line << "\n";
        }

        file_fav_edit.close();
        QMessageBox::information(this, "title", "Contact removed from favorites!");
    } else {
        qDebug() << "Could not open the file for reading and writing: " << file_fav_edit.errorString();
    }
}

