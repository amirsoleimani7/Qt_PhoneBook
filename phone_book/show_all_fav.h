#ifndef SHOW_ALL_FAV_H
#define SHOW_ALL_FAV_H

#include <QDialog>

namespace Ui {
class show_all_fav;
}

class show_all_fav : public QDialog
{
    Q_OBJECT

public:
    explicit show_all_fav(QWidget *parent = nullptr);
    ~show_all_fav();

private:
    Ui::show_all_fav *ui;
};

#endif // SHOW_ALL_FAV_H
