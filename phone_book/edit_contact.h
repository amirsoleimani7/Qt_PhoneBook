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

private slots:
    void on_pushButton_edit_contact_clicked();

private:
    Ui::edit_contact *ui;
};

#endif // EDIT_CONTACT_H
