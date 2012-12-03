/*
 *Program: Q2_Admin
 *Source : mainwindow.h
 *Purpose: Declaration of mainwindow class.
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbhandler.h"
#include "filehandler.h"
#include <QSqlRelationalTableModel>
#include <QMessageBox>
#include <QUuid>
#include <QSqlField>
#include <QFtp>
#include <QUrl>
#include <QGridLayout>
#include <QProgressBar>

namespace Ui {
    class MainWindow;
}

class QLabel;
//class FileHandler;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showInfobox(QString msg, QString detmsg);

private slots:
    void btn_dbConnectOnClick();
    void btn_dbDisconnectOnClick();
    void cmb_tabellenIndexChanged();
    void btn_deleteOnClick();
    void btn_saveOnClick();
    void btn_addOnClick();
    void btn_editOnClick();
    void btn_loadSettingsOnClick();
    void btn_ftpDisconnectOnClick();
    void ftpCommandFinished(int commandId, bool error);
    void updateDataTransferProgress(qint64, qint64 );
    void btn_sendSettingsOnClick();
    void btn_discardChangesOnClick();
    void actionExitOnClick();
    void actionInfoOnClick();
    void actionDeutschOnClick();
    void actionEnglischOnClick();

protected:
    void changeEvent(QEvent *e);

private:

    Ui::MainWindow *ui;
    DBHandler dbHandler;
    FileHandler fileHandler;
    QIcon windowIcon;
    QFtp *ftp;
    QFile *file;
    QLabel *nStatlabel; //Normale Statusbarmeldung (z.B. für FTP-Uebertragung)
    QLabel *mStatLabel; //Permanente Statusbarmeldung (für Datenbankverbindung)
    QProgressBar *progressBar; //ProgressBar für Statusbar (FTP-Download-Fortschrittsanzeige)
    //QLabel *keyLabel[];
    QString DBHOST;
    QString DBNAME;
    QString DBUSER;
    QString DBPASSWD;
    QTime timeStamp;
    QSqlRelationalTableModel *tableModel;
    QMessageBox *msgBox;
    QMessageBox *msg_about;
    QUuid *uuid;
    QSqlRecord record;
    QGridLayout *keyValueLayout;
    QHash<QString, QString> newStringKeyValues;
    QHash<QString, int> newIntKeyValues;
    QUrl ftpUrl;
    void fillComboBoxes();
    void fillTableView(QString tblName);
    void loadIniFile();
    void writeToIniFile();
    bool connectToFtp(const QUrl &url, const quint16 &ftpPort, const QString &ftpUser, const QString ftpPasswd);
};

#endif
