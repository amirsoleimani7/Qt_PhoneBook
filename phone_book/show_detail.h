#ifndef SHOW_DETAIL_H
#define SHOW_DETAIL_H

#include <QDialog>

namespace Ui {
class show_detail;
}

class show_detail : public QDialog
{
    Q_OBJECT

public:
    explicit show_detail(QWidget *parent = nullptr);
    ~show_detail();

private slots:
    void on_pushButton_show_details_clicked();

private:
    Ui::show_detail *ui;
};

#endif // SHOW_DETAIL_H
