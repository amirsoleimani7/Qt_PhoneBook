#include "show_detail.h"
#include "ui_show_detail.h"
#include <QFile>
#include <QMessageBox>
show_detail::show_detail(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::show_detail)
{
    ui->setupUi(this);
}

show_detail::~show_detail()
{
    delete ui;
}
void show_detail::setFileDirectory(const QString& directory){
    file_directory = directory;
}
void show_detail::on_pushButton_show_details_clicked()
{
    QString name = ui->lineEdit_name_to_show_details->text();
    QString file_to_show_details = file_directory;
    QFile my_file_to_show_details(file_to_show_details);

    if (my_file_to_show_details.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&my_file_to_show_details);
        QString detailsText;  // String to store details for the specified name
        bool nameFound = false; // Flag to track if the specified name is found

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');

            QString current_name = fields.value(0).trimmed();  // Assuming the name is in the first position (index 0)

            // Check if the current line's name matches the specified name
            if (current_name == name) {
                nameFound = true;
                QString type = fields.value(1).trimmed();  // Assuming the type is in the second position (index 1)
                QString number = fields.value(2).trimmed();  // Assuming the number is in the third position (index 2)

                // Append type and number to the detailsText
                detailsText += "Type: " + type +"  "+ " Number: " + number + "\n";
            }
        }

        my_file_to_show_details.close();

        // Display the details in the text browser or show a message if the name is not found
        if (nameFound) {
            ui->textBrowser->setPlainText(detailsText);
        } else {
            QMessageBox::warning(this, "title", "Name not found!");
        }
    } else {
        qDebug() << "Could not open the file for reading: " << my_file_to_show_details.errorString();
    }
}

