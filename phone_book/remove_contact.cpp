#include "remove_contact.h"
#include "ui_remove_contact.h"
#include <QFile>
#include <QMessageBox>
remove_contact::remove_contact(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::remove_contact)
{
    ui->setupUi(this);
}

remove_contact::~remove_contact()
{
    delete ui;
}
void remove_contact::setFileDirectory(const QString& directory){
    file_directory = directory;
}
void remove_contact::on_pushButton_remove_contact_clicked()
{
    QString name_from_remove = ui->lineEdit_name_to_remove->text();
    QString file_name_to_remove = file_directory;
    QFile file_to_remove(file_name_to_remove);
    QStringList modified_lines;
    bool flag = false;

    if (file_to_remove.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file_to_remove);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');
            QString name_to_remove = fields[0];

            if (name_to_remove != name_from_remove) {
                modified_lines.append(line);
            } else {
                flag = true; // Set the flag if at least one line matches the name
            }
        }

        file_to_remove.close();

        if (flag) {
            if (file_to_remove.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
                QTextStream out(&file_to_remove);

                for (const QString &line : modified_lines) {
                    out << line << "\n";
                }
                QMessageBox::information(this, "title", "Contact removed!!");
                file_to_remove.close();
            } else {
                qDebug() << "Could not open the file for writing: " << file_to_remove.errorString();
            }
        } else {
            QMessageBox::warning(this, "title", "There is no one with this name!!");
        }
    } else {
        qDebug() << "Could not open the file for reading: " << file_to_remove.errorString();
    }
}
