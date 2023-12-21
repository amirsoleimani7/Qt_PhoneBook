#include "search.h"
#include "ui_search.h"
#include <QFile>
#include <QMessageBox>
search::search(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_pushButton_search_clicked()
{
    QString search_text = ui->lineEdit_search_text->text();

    // Check if the search text is empty
    if (search_text.isEmpty()) {
        QMessageBox::warning(this, "Empty Search", "Please enter a search text.");
        return;
    }

    QString file_name_for_reading = "C:/Users/amir_1/Desktop/cpp/kargah_9/phone_book/accounts.txt";
    QFile my_file_read(file_name_for_reading);

    if (my_file_read.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&my_file_read);
        QString matching_lines;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split('|');
            QString name_read = fields.value(0).trimmed();

            // Check if the search text is a substring of the name
            if (name_read.contains(search_text, Qt::CaseInsensitive)) {
                matching_lines += line + "\n";
            }
        }

        my_file_read.close();

        // Display matching lines in textBrowser_resualt
        ui->textBrowser_resualt->setPlainText(matching_lines);

        if (matching_lines.isEmpty()) {
            QMessageBox::information(this, "No Matches", "No matches found for the search text.");
        }
    } else {
        QMessageBox::warning(this, "File Error", "Could not open file for searching.");
    }
}

