#ifndef EDIT_CONTACT_H
#define EDIT_CONTACT_H

#include <QDialog>

namespace Ui {
class edit_contact;
}

class edit_contact : public QDialog
{
    Q_OBJECT

public:
    explicit edit_contact(QWidget *parent = nullptr);
    ~edit_contact();
    void setFileDirectory(const QString& directory);


private slots:
    void on_pushButton_edit_contact_clicked();

private:
    Ui::edit_contact *ui;
    QString file_directory;

};

#endif // EDIT_CONTACT_H
