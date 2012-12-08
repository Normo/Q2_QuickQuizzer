/*
 *Program: Q2_Admin
 *Source : dbhandler.h
 *Purpose: Declaration of DBHandler class.
 *
 * Copyright (C) 2012  Alexander Papenfuß, Enrico Nohl, Marcel Wesberg, Norman Bestfleisch
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DBHANDLER_H
#define DBHANDLER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>
#include <QSqlTableModel>

/**
 * @brief DBHandler Klasse: Beinhaltet Datenbankfunktionen und SQL-Abfragen.
 */
class DBHandler{
public:

    DBHandler();
    QSqlDatabase db;
    int dbConnect(QString &dbHost, QString &dbName, QString &dbUser, QString &dbPasswd);
    void dbClose();
    QString getError();
    QStringList dbGetTables(QString *dbName);
    //void dbShowTablesQuery(QString *dbName);
    //QStringList dbGetCategories();
    //QStringList dbGetDifficulties();
    //void dbInsertQuestion(QString &question, QString &answer1, QString &answer2, QString &answer3, QString &answer4);

private:

    QSqlQuery query;
    QSqlRecord record;
};

#endif // DBHANDLER_H
