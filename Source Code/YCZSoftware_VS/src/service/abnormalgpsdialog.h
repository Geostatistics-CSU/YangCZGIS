#ifndef ABNORMALGPSDIALOG_H
#define ABNORMALGPSDIALOG_H

#include <QDialog>

namespace Ui {
class AbnormalGPSDialog;
}

class AbnormalGPSDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AbnormalGPSDialog(QWidget *parent = nullptr);
    ~AbnormalGPSDialog();

private:
    Ui::AbnormalGPSDialog *ui;
};

#endif // ABNORMALGPSDIALOG_H
