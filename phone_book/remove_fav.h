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
    void setFileDirectory(const QString& directory);

private slots:
    void on_pushButton_remove_from_fav_clicked();

private:
    Ui::remove_fav *ui;
    QString file_directory;

};

#endif // REMOVE_FAV_H
