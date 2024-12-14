#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QObject *login, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( ui->actionLog_out, SIGNAL( triggered() ), this, SLOT( callbackLogOut() ) );
    connect( ui->actionLog_out, SIGNAL( triggered() ), login, SLOT( exec() ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::callbackLogOut()
{
  this->hide();
  //this->close();
  //this->destroy();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
