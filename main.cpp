#include "mainwindow.h"
#include "qdialog.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create and show the custom dialog
    CustomDialog dialog;
    if (dialog.exec() != QDialog::Accepted) {
        qDebug("Dialog rejected!");
        return -1;
    }

    MainWindow w(&dialog);
    w.show();
    qDebug() << "[#1486] After w.show()";

    return app.exec();
    qDebug() << "[#1486] After app.exec()";
}
