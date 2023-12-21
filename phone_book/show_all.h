#ifndef SHOW_ALL_H
#define SHOW_ALL_H

#include <QDialog>

namespace Ui {
class show_all;
}

class show_all : public QDialog
{
    Q_OBJECT

public:
    explicit show_all(QWidget *parent = nullptr);
    ~show_all();

private slots:

private:
    Ui::show_all *ui;
};

#endif // SHOW_ALL_H
