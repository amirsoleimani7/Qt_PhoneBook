#include "show_all_fav.h"
#include "ui_show_all_fav.h"
#include <QFile>
#include <QMessageBox>
show_all_fav::show_all_fav(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::show_all_fav)
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

            // Check if the list has at least 4 elements (index 0, 1, 2, and 3)
            if (fields.size() >= 4) {
                // Assuming the name is in the first position (index 0)
                QString name = fields.value(0).trimmed();  // Remove leading and trailing whitespaces

                // Add the name to the uniqueNames list if it's not already present and fields[3] is "*"
                if (!uniqueNames.contains(name) && fields[3] == "*") {
                    uniqueNames.append(name);
                }
            }
        }

        file_to.close();

        // Display the unique names in the QTextBrowser
        ui->textBrowser_show_all_fav->setPlainText(uniqueNames.join("\n"));
    } else {
        qDebug() << "Could not open the file for reading: " << file_to.errorString();
    }
}

show_all_fav::~show_all_fav()
{
    delete ui;
}
