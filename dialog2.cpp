#include "dialog2.h"
#include "ui_dialog2.h"
#include "dialog3.h"
#include "dialog4.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    setFixedSize(size());
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    exit(0);
}


void Dialog2::on_pushButton_2_clicked()
{
    this->hide();
    Dialog3* form = new Dialog3 (this);
    form->show();
}

void Dialog2::keyPressEvent(QKeyEvent *e)
{
   if(e->key() == Qt::Key_F2)
   {
       this->hide();
       Dialog4* form = new Dialog4 (this);
       form->show();
   }
}

