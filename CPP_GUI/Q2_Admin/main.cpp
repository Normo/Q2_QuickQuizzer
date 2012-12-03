/*
 *Program: Q2_Admin
 *Source : main.cpp
 *Purpose: Holding main() function and instanciating main Q2 Admin window object.
 *
 */


#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Q2 Admin");
    w.setWindowIcon(QIcon("images/Q2.png"));
    w.show();
    return a.exec();
}
