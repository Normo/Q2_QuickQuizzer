/*
 *Program: Q2_Admin
 *Source : filehandler.h
 *Purpose: Declaration of FileHandler class.
 *
 * Copyright (C) 2012  Alexander Papenfuß, Enrico Nohl, Marcel Wesberg, Norman Bestfleisch
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not, see <http://www.gnu.org/licenses/>.
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
