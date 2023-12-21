#include "show_all.h"
#include "ui_show_all.h"
#include <QFileDialog>
#include <QMessageBox>
show_all::show_all(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::show_all)
{
    ui->setupUi(this);

    QString file_to_show = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
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

        file_to.close();

        // Display the unique names in the QTextBrowser
        ui->textBrowser_show_all_contacts->setPlainText(uniqueNames.join("\n"));
    } else {
        qDebug() << "Could not open the file for reading: " << file_to.errorString();
    }


}

show_all::~show_all()
{
    delete ui;
}
