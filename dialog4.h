#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>

namespace Ui {
class Dialog4;
}

class Dialog4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = nullptr);
    ~Dialog4();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_9_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog4 *ui;
};

#endif // DIALOG4_H
