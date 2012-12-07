/*
 *Program: Q2_Admin
 *Source : dbhandler.h
 *Purpose: Declaration of DBHandler class.
 *
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
