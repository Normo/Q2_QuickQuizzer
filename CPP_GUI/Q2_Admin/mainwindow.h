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
#include <QGridLayout>

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
    void btn_normanOnClick();
    void cmb_tabellenIndexChanged();
    void btn_deleteOnClick();
    void btn_saveOnClick();
    void btn_addOnClick();
    void btn_editOnClick();
    void btn_loadSettingsOnClick();
    void ftpCommandFinished(int commandId, bool error);
    void btn_sendSettingsOnClick();
    void btn_discardChangesOnClick();

protected:
    void changeEvent(QEvent *e);

private:

    Ui::MainWindow *ui;
    DBHandler dbHandler;
    FileHandler fileHandler;
    QFtp *ftp;
    QFile *file;
    QLabel *nStatlabel; //Normale Statusbarmeldung (z.B. für FTP-Uebertragung)
    QLabel *mStatLabel; //Permanente Statusbarmeldung (für Datenbankverbindung)
    //QLabel *keyLabel[];
    QString DBHOST;
    QString DBNAME;
    QString DBUSER;
    QString DBPASSWD;
    QSqlRelationalTableModel *tableModel;
    QMessageBox *msgBox;
    QUuid *uuid;
    QSqlRecord record;
    QGridLayout *keyValueLayout;
    void fillComboBoxes();
    void fillTableView(QString tblName);
    void loadIniFile();
    void writeToIniFile();
    bool connectToFtp(const QUrl &url, const quint16 &ftpPort, const QString &ftpUser, const QString ftpPasswd);
};

#endif
