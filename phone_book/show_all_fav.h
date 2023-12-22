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
    void setFileDirectory(const QString& directory);


private slots:
    void on_pushButton_show_all_fav_clicked();

private:
    Ui::show_all_fav *ui;
    QString file_directory;

};

#endif // SHOW_ALL_FAV_H
