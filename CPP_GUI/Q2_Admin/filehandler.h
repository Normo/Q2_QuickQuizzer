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
#include <QTextStream>

/**
 * @brief FileHandler Klasse: Beinhaltet Zugriffsfunktionen für die INI-Datei.
 */
class FileHandler
{

public:
    FileHandler();
    FileHandler(QFile *file);
    bool writeFile(QHash<QString, QString> newStringKeyValues, QHash<QString, int> newIntKeyValues);
    QFile* getFile();
    QHash<QString, QString> getStringKeyValues();
    QHash<QString, int> getIntKeyValues();
    QStringList getKeys();

private:
    QFile *myFile;
    QTextStream *out;
    QStringList keys;
    QHash<QString, QString> stringKeyValues;
    QHash<QString, int> intKeyValues;
};

#endif // FILEHANDLER_H
