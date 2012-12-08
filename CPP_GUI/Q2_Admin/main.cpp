/*
 *Program: Q2_Admin
 *Source : main.cpp
 *Purpose: Holding main() function and instanciating main Q2 Admin window object.
 *
 * Copyright (C) 2012  Alexander Papenfuß, Enrico Nohl, Marcel Wesberg, Norman Bestfleisch
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not, see <http://www.gnu.org/licenses/>.
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
