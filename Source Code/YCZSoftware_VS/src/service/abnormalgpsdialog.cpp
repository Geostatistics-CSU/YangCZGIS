#include "abnormalgpsdialog.h"
#include "ui_abnormalgpsdialog.h"

AbnormalGPSDialog::AbnormalGPSDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbnormalGPSDialog)
{
    ui->setupUi(this);
}

AbnormalGPSDialog::~AbnormalGPSDialog()
{
    delete ui;
}
