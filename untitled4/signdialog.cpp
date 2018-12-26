#include "signdialog.h"
#include "ui_signdialog.h"
#include "QMessageBox.h"
#include "QTextCodec.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QGraphicsOpacityEffect>

SignDialog::SignDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignDialog)
{
    ui->setupUi(this);

    ui->linePwd->setEchoMode(QLineEdit::Password);//设置密码型号显示

    /************   背景图片半透明   ************/
    ui->BPicture->setAttribute(Qt::WA_TransparentForMouseEvents,true);
    QGraphicsOpacityEffect *opacityEffect=new QGraphicsOpacityEffect;
    ui->BPicture->setGraphicsEffect(opacityEffect);
    opacityEffect->setOpacity(0.4);

}

SignDialog::~SignDialog()
{
    delete ui;
}

void SignDialog::on_buttonSign_clicked()
{
    /************   链接数据库   ************/
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");   //数据库驱动类型为SQL Server
    QString dsn = QString::fromLocal8Bit("marketdb");       //数据源名称
    db.setHostName("localhost");                            //选择本地主机，127.0.1.1
    db.setDatabaseName(dsn);                                //设置数据源名称

    _username = ui->lineUser->text().trimmed();
    _password = ui->linePwd->text().trimmed();
    db.setUserName(_username);                               //登录用户
    db.setPassword(_password);                               //登陆密码
    qDebug()<<"123";

    if(db.open())
    {
      accept();
    }
    else
    {
      QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误!"),QMessageBox::Yes);
      this->ui->lineUser->clear();
      this->ui->linePwd->clear();
      this->ui->lineUser->setFocus();
    }
}

void SignDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void SignDialog::on_pushButton_clicked()
{
    this->close();
}
