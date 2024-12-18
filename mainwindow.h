#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QObject *login, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();
    void callbackLogOut();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
