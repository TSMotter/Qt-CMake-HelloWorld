#include "mainwindow.h"
#include "qdialog.h"
#include <QApplication>

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

    return app.exec();
}
