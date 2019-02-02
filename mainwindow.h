#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <string>
#include "mydialog.h"
#include "integrationstack.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    IntegrationStack<Integration> *intStack = new IntegrationStack<Integration>();

    static QString command_history;
//    void appendCommandHistory(const QString& str) {
//        command_history.append(str);
//    }
    static QString setCommandHistory(const QString& str) {
        command_history.append(str);
        return command_history;
    }

private slots:
    void on_pushButton_clicked();
    void keyPressEvent(QKeyEvent*);
    void on_actionNew_Window_triggered();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_actionSave_triggered();
    void on_actionExit_triggered();
    bool exists(const std::string& name);
    std::string exec(const char* cmd);

private:
    Ui::MainWindow *ui;
    MyDialog *mDialog;
};

#endif // MAINWINDOW_H
