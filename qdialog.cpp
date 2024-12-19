#include "qdialog.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

CustomDialog::CustomDialog(QWidget *parent)
    : QDialog(parent)
{
    // Set up the dialog's title and size
    setWindowTitle("Login window");
    resize(300, 150);

    // Create a layout and widgets for the dialog
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *label = new QLabel("Login with username and password", this);
    QPushButton *okButton = new QPushButton("OK", this);
    QPushButton *errButton = new QPushButton("ERROR", this);

    layout->addWidget(label);
    layout->addWidget(okButton);
    layout->addWidget(errButton);

    // Connect the OK button to close the dialog
    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
    connect(errButton, &QPushButton::clicked, this, &QDialog::reject);
}

CustomDialog::~CustomDialog()
{
    // Destructor
}
