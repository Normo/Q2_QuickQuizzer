/*
 *Program: Q2_Admin
 *Source : filehandler.h
 *Purpose: Declaration of FileHandler class.
 *
 */

#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <QString>
#include <QStringList>
#include <QHash>
#include <QFile>

class FileHandler
{

public:
    FileHandler();
    FileHandler(QFile *file);
    void addKeyValue(QString key, QString value);
    void writeFile();
    QHash<QString, QString> getStringKeyValues();
    QHash<QString, int> getIntKeyValues();
    QStringList getKeys();

private:
    QFile *myFile;
    QStringList keys;
    //QStringList values;
    QHash<QString, QString> stringKeyValues;
    QHash<QString, int> intKeyValues;
};

#endif // FILEHANDLER_H
