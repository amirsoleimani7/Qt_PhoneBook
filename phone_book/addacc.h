#ifndef ADDACC_H
#define ADDACC_H

#include <QDialog>

namespace Ui {
class addacc;
}

class addacc : public QDialog
{
    Q_OBJECT

public:
    explicit addacc(QWidget *parent = nullptr);
    ~addacc();

private slots:
    void on_pushButton_add_contact_clicked();

private:
    Ui::addacc *ui;
};

#endif // ADDACC_H
