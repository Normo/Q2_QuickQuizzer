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
    QString fileName = "config.ini";

    if(myFile->exists()){
        qDebug() << "File " << fileName << " does exist.";
    }/*if(!file->open(QIODevice::ReadWrite|QIODevice::Text)){
        qDebug() << "Could not open file.";
    }*/
    qDebug() << "Hier Dateiname: " << myFile->fileName();
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

    qDebug() << "stringKeyValues    : " << this->stringKeyValues;
    qDebug() << "intKeyValues       : " << this->intKeyValues;
}

QHash<QString, QString> FileHandler::getStringKeyValues(){
    return this->stringKeyValues;
}

QHash<QString, int> FileHandler::getIntKeyValues(){
    return this->intKeyValues;
}

QStringList FileHandler::getKeys(){
    return this->keys;
}

void FileHandler::writeFile(){

    if (!this->myFile->isOpen()) {
        if(!this->myFile->open(QIODevice::ReadWrite|QIODevice::Text)) {
            qDebug() << "Datei '" + this->myFile->fileName() + "' konnte nicht zum Schreiben geöffnet werden.";
            return;
        }
    }
    //this->myFile->write("[DataBase]");
    QTextStream textStream(this->myFile);
    QString line = textStream.readLine();
    while(!line.isNull()) {
        qDebug() << line;
        line = textStream.readLine();

    }

}
