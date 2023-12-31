#ifndef ADDING_NUMBER_H
#define ADDING_NUMBER_H

#include <QDialog>

namespace Ui {
class adding_number;
}

class adding_number : public QDialog
{
    Q_OBJECT

public:
    explicit adding_number(QWidget *parent = nullptr);
    ~adding_number();
    void setFileDirectory(const QString& directory);

private slots:
    void on_pushButton_add_number_clicked();

private:
    Ui::adding_number *ui;
    QString file_directory;
};

#endif // ADDING_NUMBER_H
