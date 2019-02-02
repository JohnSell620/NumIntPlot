#include "mydialog.h"
#include "ui_mydialog.h"
#include "mainwindow.h"
#include <QString>
#include <QClipboard>

QString MainWindow::command_history = "";

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    ui->plainTextEdit->setPlainText(MainWindow::command_history);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_pushButton_clicked()
{
    QClipboard *clipboard = QApplication::clipboard();
    QString originalText = clipboard->text();
    QString newText = ui->plainTextEdit->toPlainText();
    clipboard->setText(newText);
}
