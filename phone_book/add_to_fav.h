#ifndef ADD_TO_FAV_H
#define ADD_TO_FAV_H

#include <QDialog>

namespace Ui {
class add_to_fav;
}

class add_to_fav : public QDialog
{
    Q_OBJECT

public:
    explicit add_to_fav(QWidget *parent = nullptr);
    ~add_to_fav();
    void setFileDirectory(const QString& directory);


private slots:
    void on_pushButton_add_to_fav_clicked();

private:
    Ui::add_to_fav *ui;
    QString file_directory;
};

#endif // ADD_TO_FAV_H
