/*
 *Program: Q2_Admin
 *Source : main.cpp
 *Purpose: Holding main() function and instanciating main Q2 Admin window object.
 *
 */

#include <QtGui/QApplication>
#include <QTranslator>
#include "mainwindow.h"

QTranslator *qTranslator;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qTranslator = new QTranslator();
    qTranslator->load("Q2_Admin_de.qm");
    a.installTranslator(qTranslator);

    MainWindow w;
    w.setWindowIcon(QIcon("images/Q2.png"));
    w.show();
    return a.exec();
}
