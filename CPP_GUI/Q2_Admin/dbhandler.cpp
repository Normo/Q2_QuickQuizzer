/*
 *Program: Q2_Admin
 *Source : dbhandler.cpp
 *Purpose: Implementation of DBHandler class.
 *         Beinhaltet die Datenbankfunktionen & -abfragen.
 *
 */

#include "dbhandler.h"
#include <QtSql>

DBHandler::DBHandler()
{
    this->db = QSqlDatabase::database();
}

// Verbindung zu Datenbank aufnehmen
int DBHandler::dbConnect(QString &host, QString &dbName, QString &dbUser, QString &dbPasswd){

    this->db = QSqlDatabase::addDatabase("QMYSQL");
    this->db.setHostName(host);
    this->db.setDatabaseName(dbName);
    this->db.setUserName(dbUser);
    this->db.setPassword(dbPasswd);

    if (!db.open()){
        qDebug() << db.lastError();
        return 1;
    }
    qDebug() << db.connectOptions();
    return 0;
}

QString DBHandler::getError(){
    return db.lastError().text();
}

// Zeige Tabellen der Datenbank
void DBHandler::dbShowTablesQuery(QString *dbName){
    this->query = QSqlQuery("SHOW TABLES;");
    this->record = this->query.record();
    QString tables[100];
    int count = 0;
    while (this->query.next()){
        QString table = this->query.value(this->record.indexOf("Tables_in_"+*dbName)).toString();
        qDebug() << this->query.at() << ":" << table;
        tables[count] = table;
        count++;
    }
}

// Hole Tabellen aus Datenbank
QStringList DBHandler::dbGetTables(QString *dbName){
    this->query = QSqlQuery("SHOW TABLES;");
    this->record = this->query.record();
    QStringList tables;
    //int count = 0;
    while (this->query.next()){
    tables.append(this->query.value(this->record.indexOf("Tables_in_"+*dbName)).toString());

    }
    return tables;
}

// Hole Fragenkategorien aus Datenbank
QStringList DBHandler::dbGetCategories(){
    this->query = QSqlQuery("SELECT Category_Text FROM dt_Category;");
    this->record = this->query.record();
    QStringList categories;
    //int count = 0;
    while (this->query.next()){
        categories.append(this->query.value(this->record.indexOf("Category_Text")).toString());
        //qDebug() << this->query.at() << ":" << table;
    }
    return categories;
}

// Hole Fragenschwierigkeitsgrade aus Datenbank
QStringList DBHandler::dbGetDifficulties(){
    this->query = QSqlQuery("SELECT Difficulty_Value FROM dt_Difficulty;");
    this->record = this->query.record();
    QStringList difficulties;
    //int count = 0;
    while (this->query.next()){
        difficulties.append(this->query.value(this->record.indexOf("Difficulty_Value")).toString());
        qDebug() << this->query.value(this->record.indexOf("Difficulty_Value")).toString();
    }
    return difficulties;
}

// Schließe Datenbankverbindung
void DBHandler::dbClose(){

    QString connectionName;
    connectionName = this->db.connectionName();
    this->db.close();
    this->db = QSqlDatabase();

    QSqlDatabase::removeDatabase(connectionName);
    qDebug() << "Datenbankverbindung getrennt.";
}
