#include "dialog.h"
#include "ui_dialog.h"
#include "dialog2.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setFixedSize(size());
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    this->hide();
    Dialog2* form = new Dialog2 (this);
    form->show();
}

