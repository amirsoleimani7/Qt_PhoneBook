#ifndef EDIT_NUMBER_H
#define EDIT_NUMBER_H

#include <QDialog>

namespace Ui {
class edit_number;
}

class edit_number : public QDialog
{
    Q_OBJECT

public:
    explicit edit_number(QWidget *parent = nullptr);
    ~edit_number();

private slots:
    void on_pushButton_change_number_clicked();

private:
    Ui::edit_number *ui;
};

#endif // EDIT_NUMBER_H
