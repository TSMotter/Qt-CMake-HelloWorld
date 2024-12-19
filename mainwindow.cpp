#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_dialog{}
{
    ui->setupUi(this);
    resize(300, 150);
    connect( ui->actionLog_out, SIGNAL( triggered() ), this, SLOT( callbackLogOut() ) );
    ShowLogin();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowLogin()
{
    if (m_dialog.exec() != QDialog::Accepted) {
        qDebug("Login Rejected!");
        return;
    }
    qDebug("Login Accepted!");
    m_dialog.hide();
    this->show();
}

void MainWindow::callbackLogOut()
{
  qDebug("callbackLogOut()");
  this->hide();
  ShowLogin();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
