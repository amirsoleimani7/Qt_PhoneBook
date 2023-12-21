#include "add_contact.h"
#include "ui_add_contact.h"

add_contact::add_contact(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_contact)
{
    ui->setupUi(this);
}

add_contact::~add_contact()
{
    delete ui;
}
