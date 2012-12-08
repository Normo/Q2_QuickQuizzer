/*
 *Program: Q2_Admin
 *Source : dbhandler.cpp
 *Purpose: Implementation of DBHandler class. Includes database functions and sql queries.
 *
 * Copyright (C) 2012  Alexander Papenfuß, Enrico Nohl, Marcel Wesberg, Norman Bestfleisch
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include "dbhandler.h"
#include <QtSql>

DBHandler::DBHandler()
{
    this->db = QSqlDatabase::database();
}

/**
 * @brief Baut Verbindung zur MySQL-Datenbank auf.
 * @param dbhost - URL des Datenbankservers
 * @param dbName - Name der Datenbank
 * @param dbUser - Name des Datenbankbenutzers
 * @param dbPasswd - Passwort des Datenbankbenutzers
 * @return returnCode - 0=Keine Fehler, 1=Fehler
 */
int DBHandler::dbConnect(QString &dbHost, QString &dbName, QString &dbUser, QString &dbPasswd){

    this->db = QSqlDatabase::addDatabase("QMYSQL");
    this->db.setHostName(dbHost);
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

/**
 * @brief Schließt die Datenbankverbindung
 *
 *Schließt die Datenbankverbindung, gibt alle bisher benötigten Ressourcen frei und
 *entfernt die Verbindung aus der Liste der Datenbankverbindungen.
 */
void DBHandler::dbClose(){

    QString connectionName;
    connectionName = this->db.connectionName();
    this->db.close();
    this->db = QSqlDatabase();

    QSqlDatabase::removeDatabase(connectionName);
}

/**
 * @brief Gibt Fehler des QSqlDatabase Objekts zurück.
 * @return error - Fehler als Zeichenkette
 */
QString DBHandler::getError(){
    return db.lastError().text();
}

/**
 * @brief Gibt alle Tabellennamen der Datenbank zurück (SQL-Abfrage "SHOW TABLES").
 * @param dbName - Name der Datenbank
 * @return tables - Liste mit allen Tabellen der Datenbank als Zeichenketten

 */
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

/*
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
*/
