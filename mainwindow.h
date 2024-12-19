#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qdialog.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void ShowLogin();

private slots:
    void on_actionExit_triggered();
    void callbackLogOut();

private:
    Ui::MainWindow *ui;
    CustomDialog m_dialog;
};

#endif // MAINWINDOW_H
