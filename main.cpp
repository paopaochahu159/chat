#include "mainwindow.h"
#include"register.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Register r;

    if (r.exec() ==QDialog::Accepted){
        MainWindow w(myName);
        w.show();
    }
    return a.exec();
}
