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
    void setFileDirectory(const QString& directory);

private slots:
    void on_pushButton_add_contact_clicked();

private:
    Ui::addacc *ui;
    QString file_directory;
};

#endif // ADDACC_H
