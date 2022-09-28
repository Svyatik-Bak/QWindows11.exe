#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include <QKeyEvent>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = nullptr);
    ~Dialog2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

protected:
void keyPressEvent(QKeyEvent *e) override;

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
