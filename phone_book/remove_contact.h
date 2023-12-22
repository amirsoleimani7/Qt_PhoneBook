#ifndef REMOVE_CONTACT_H
#define REMOVE_CONTACT_H

#include <QDialog>

namespace Ui {
class remove_contact;
}

class remove_contact : public QDialog
{
    Q_OBJECT

public:
    explicit remove_contact(QWidget *parent = nullptr);
    ~remove_contact();
    void setFileDirectory(const QString& directory);


private slots:
    void on_pushButton_remove_contact_clicked();

private:
    Ui::remove_contact *ui;
    QString file_directory;
};


#endif // REMOVE_CONTACT_H
