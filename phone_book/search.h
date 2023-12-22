#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>

namespace Ui {
class search;
}

class search : public QDialog
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();
    void setFileDirectory(const QString& directory);


private slots:
    void on_pushButton_search_clicked();

private:
    Ui::search *ui;
    QString file_directory;

};

#endif // SEARCH_H
