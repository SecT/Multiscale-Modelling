//#include <QtGui/QApplication>
#include <QtWidgets/QApplication>
#include "mainwindow.h"

#include "Space.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    w.show();
    return a.exec();
}
