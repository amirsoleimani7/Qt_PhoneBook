#ifndef REMOVING_NUMBER_H
#define REMOVING_NUMBER_H

#include <QDialog>

namespace Ui {
class removing_number;
}

class removing_number : public QDialog
{
    Q_OBJECT

public:
    explicit removing_number(QWidget *parent = nullptr);
    ~removing_number();
    void setFileDirectory(const QString& directory);


private slots:
    void on_pushButton_remove_number_clicked();

private:
    Ui::removing_number *ui;
    QString file_directory;

};

#endif // REMOVING_NUMBER_H
