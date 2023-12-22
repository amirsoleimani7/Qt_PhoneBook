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
    void setFileDirectory(const QString& directory);

private slots:

    void on_pushButton_show_all_clicked();

private:
    Ui::show_all *ui;
    QString file_directory;

};

#endif // SHOW_ALL_H
