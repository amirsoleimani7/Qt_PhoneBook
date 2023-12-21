#include "show_all.h"
#include "ui_show_all.h"

show_all::show_all(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::show_all)
{
    ui->setupUi(this);
}

show_all::~show_all()
{
    delete ui;
}
