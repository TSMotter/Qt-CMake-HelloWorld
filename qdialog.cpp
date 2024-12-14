#include "qdialog.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

CustomDialog::CustomDialog(QWidget *parent)
    : QDialog(parent)
{
    // Set up the dialog's title and size
    setWindowTitle("My Custom Dialog");
    resize(300, 150);

    // Create a layout and widgets for the dialog
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *label = new QLabel("This is a custom QDialog.", this);
    QPushButton *okButton = new QPushButton("OK", this);

    layout->addWidget(label);
    layout->addWidget(okButton);

    // Connect the OK button to close the dialog
    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
}

CustomDialog::~CustomDialog()
{
    // Destructor
}
