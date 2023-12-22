#include "show_all.h"
#include "ui_show_all.h"
#include <QFileDialog>
#include <QMessageBox>
void show_all::setFileDirectory(const QString& directory){
    file_directory = directory;
}



show_all::show_all(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::show_all)
{
    ui->setupUi(this);

}

show_all::~show_all()
{
    delete ui;
}

void show_all::on_pushButton_show_all_clicked()
{
    QString file_to_show = file_directory;
    QFile file_to(file_to_show);
    QStringList uniqueNames;

    if (file_to.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file_to);

        // Read the file line by line
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');

            // Assuming the name is in the first position (index 0)
            QString name = fields.value(0).trimmed();  // Remove leading and trailing whitespaces

            // Add the name to the uniqueNames list if it's not already present
            if (!uniqueNames.contains(name)) {
                uniqueNames.append(name);
            }
        }
        uniqueNames.sort();
        file_to.close();

        // Display the unique names in the QTextBrowser
        ui->textBrowser_show_all_contacts->setPlainText(uniqueNames.join("\n"));
    } else {
        qDebug() << "Could not open the file for reading: " << file_to.errorString();
    }

}

