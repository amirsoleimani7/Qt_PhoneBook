#ifndef REMOVE_FAV_H
#define REMOVE_FAV_H

#include <QDialog>

namespace Ui {
class remove_fav;
}

class remove_fav : public QDialog
{
    Q_OBJECT

public:
    explicit remove_fav(QWidget *parent = nullptr);
    ~remove_fav();

private slots:
    void on_pushButton_remove_from_fav_clicked();

private:
    Ui::remove_fav *ui;
};

#endif // REMOVE_FAV_H
