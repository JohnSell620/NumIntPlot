#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <string>

namespace Ui {
class MyDialog;
}

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = 0);
    ~MyDialog();
//    static QString command_history;
//    void setText() { text = MainWindow::command_history; }

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyDialog *ui;
};

#endif // MYDIALOG_H
