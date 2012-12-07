#include "filehandler.h"
#include <QDebug>
#include <QSettings>
#include <QStringList>
#include <QFileInfo>

FileHandler::FileHandler(){

}

FileHandler::FileHandler(QFile *file)
{
    this->myFile = file;

    QSettings settings(myFile->fileName(), QSettings::IniFormat);
    this->keys = settings.allKeys();

    this->stringKeyValues.insert("DataBase/DbHost", settings.value("DataBase/DbHost").toString());
    this->stringKeyValues.insert("DataBase/DbName", settings.value("DataBase/DbName").toString());
    this->stringKeyValues.insert("DataBase/DbUser", settings.value("DataBase/DbUser").toString());
    this->stringKeyValues.insert("DataBase/DbPassword", settings.value("DataBase/DbPassword").toString());
    this->stringKeyValues.insert("Game/GetNextAfterAnswer", settings.value("Game/GetNextAfterAnswer").toString());
    this->stringKeyValues.insert("Game/ReNail", settings.value("Game/ReNail").toString());
    this->stringKeyValues.insert("Game/Points", settings.value("Game/Points").toString());

    this->intKeyValues.insert("Game/Rounds", settings.value("Game/Rounds").toInt());
    this->intKeyValues.insert("Game/TimePerQ", settings.value("Game/TimePerQ").toInt());
    this->intKeyValues.insert("Game/TimePerC", settings.value("Game/TimePerC").toInt());
    this->intKeyValues.insert("Game/TimeWhenNailed", settings.value("Game/TimeWhenNailed").toInt());
    this->intKeyValues.insert("Game/DelayQ_A", settings.value("Game/DelayQ_A").toInt());
    this->intKeyValues.insert("Game/HSCount", settings.value("Game/HSCount").toInt());
    this->intKeyValues.insert("Game/MinUserCount", settings.value("Game/MinUserCount").toInt());
    this->intKeyValues.insert("Game/NailCount", settings.value("Game/NailCount").toInt());


    /*
    foreach (const QString &key, this->keys) {
        this->stringKeyValues.insert(key, settings.value(key).toString());
    }*/

}

/**
 * @brief Gibt die HashTable mit den Schlüssel/String-Wertpaaren zurück.
 * @return stringKeyValues - QHash<QString, QString>
 */
QHash<QString, QString> FileHandler::getStringKeyValues(){
    return this->stringKeyValues;
}

/**
 * @brief Gibt die HashTable mit den Schlüssel/Zahlen-Wertpaaren zurück.
 * @return intKeyValues - QHash<QString, int>
 */
QHash<QString, int> FileHandler::getIntKeyValues(){
    return this->intKeyValues;
}

/**
 * @brief Gibt eine Liste der Schlüssel als Zeichenketten zurück.
 * @return keys - QStringList
 */
QStringList FileHandler::getKeys(){
    return this->keys;
}

/**
 * @brief Schreibt Änderungen der Schlüssel-Wertpaare in die heruntergeladene Datei.
 * @param newStringKeyValues - Beinhaltet Schlüssel/String-Wertpaare in einer QHash<QString, QString>
 * @param newIntKeyValues - Beinhaltet Schlüssel/Zahlen-Wertpaare in einer QHash<QString, int>
 * @return boolean - true=Erfolg, false=Fehler
 */
bool FileHandler::writeFile(QHash<QString, QString> newStringKeyValues, QHash<QString, int> newIntKeyValues){

    if (!this->myFile->isOpen()) {
        if(!this->myFile->open(QIODevice::WriteOnly|QIODevice::Text)) {
            qDebug() << "Datei '" + this->myFile->fileName() + "' konnte nicht zum Schreiben geöffnet werden.";
            return false;
        }
    }

    QTextStream outputStream(this->myFile);

    outputStream << "[DataBase]" << endl;
    outputStream << "DbHost=" << newStringKeyValues.value("DataBase/DbHost") << endl;
    outputStream << "DbName=" << newStringKeyValues.value("DataBase/DbName") << endl;
    outputStream << "DbUser=" << newStringKeyValues.value("DataBase/DbUser") << endl;
    outputStream << "DbPassword=" << newStringKeyValues.value("DataBase/DbPassword") << endl << endl;
    outputStream << "[Game]" << endl << "; Runden" << endl;
    outputStream << "Rounds=" << newIntKeyValues.value("Game/Rounds") << endl;
    outputStream << "; Zeit pro Frage" << endl;
    outputStream << "TimePerQ=" << newIntKeyValues.value("Game/TimePerQ") << endl;
    outputStream << QString::fromUtf8("; Zeit zum Wählen einer Kategorie") << endl;
    outputStream << "TimePerC=" << newIntKeyValues.value("Game/TimePerC") << endl;
    outputStream << "; Zeit wenn man genagelt wurde" << endl;
    outputStream << "TimeWhenNailed=" << newIntKeyValues.value("Game/TimeWhenNailed") << endl;
    outputStream << "; Zeit bis die Antworten aufploppen" << endl;
    outputStream << "DelayQ_A=" << newIntKeyValues.value("Game/DelayQ_A") << endl;
    outputStream << "; Sobald einer geantwortet hat wird die Runde beendet" << endl;
    outputStream << "GetNextAfterAnswer=" << newStringKeyValues.value("Game/GetNextAfterAnswer") << endl;
    outputStream << "; Anzahl Highscore" << endl;
    outputStream << "HSCount=" << newIntKeyValues.value("Game/HSCount") << endl << endl;
    outputStream << "; folgendes wurdee noch nicht implementiert" << endl << QString::fromUtf8("; oder berücksichtigt") << endl << endl;
    outputStream << "; Nagel kann wieder gewonnen werden" << endl;
    outputStream << "ReNail=" << newStringKeyValues.value("Game/ReNail") << endl;
    outputStream << "; Minimale Spieleranzahl" << endl;
    outputStream << "MinUserCount=" << newIntKeyValues.value("Game/MinUserCount") << endl;
    outputStream << "; Punkteverteilung countdown, default" << endl;
    outputStream << "Points=" << newStringKeyValues.value("Game/Points") << endl;
    outputStream << QString::fromUtf8("; Anzahl der Nägel pro Spieler") << endl;
    outputStream << "NailCount=" << newIntKeyValues.value("Game/NailCount") << endl;

    outputStream.flush();
    this->myFile->close();
    return true;
}

/**
 * @brief Gibt ein Zeiger auf die Datei zurück.
 * @return QFile*
 */
QFile* FileHandler::getFile(){
    return this->myFile;
}
