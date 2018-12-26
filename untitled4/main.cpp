#include "mainwindow.h"
#include <QApplication>
#include "signdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    SignDialog login; //登陆界面
    login.setWindowTitle("小型超市管理系统登陆界面");
    if(login.exec()==QDialog::Accepted)
    {
         w.show();
         return a.exec();
    }
    else return 0;

}
