#ifndef SIGNDIALOG_H
#define SIGNDIALOG_H

#include <QDialog>

namespace Ui {
class SignDialog;
}

class SignDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignDialog(QWidget *parent = 0);
    ~SignDialog();

protected:
    void changeEvent(QEvent *e);

private slots:
    void on_buttonSign_clicked();
    void on_pushButton_clicked();

private:
    QString _username;
    QString _password;
private:
    Ui::SignDialog *ui;
};

#endif // SIGNDIALOG_H
