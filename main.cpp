#include "mainwindow.h"
#include"register.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Register r;
    r.show();
    MainWindow w;

    if (r.exec() ==QDialog::Accepted){
        w.show();

        return a.exec();
    }
    // w.show();
    return a.exec();
}
