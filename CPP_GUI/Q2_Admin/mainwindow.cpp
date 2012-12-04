/*
 *Program: Q2_Admin
 *Source : mainwindow.cpp
 *Purpose: Implementation of mainwindow class including ftp functionality.
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbhandler.h"
#include <QtSql>
#include <QUuid>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dbHandler = DBHandler();

    this->file = 0;
    this->ftp = 0;

    // Statusbarlabels initialisieren
    nStatlabel = new QLabel;
    mStatLabel = new QLabel;
    mStatLabel->setTextFormat(Qt::RichText);
    this->mStatLabel->setText("Datenbankverbindung getrennt <img src=':images/db-disconnect.png'>");
    progressBar = new QProgressBar();
    progressBar->hide();
    statusBar()->addWidget(nStatlabel);
    statusBar()->addPermanentWidget(mStatLabel);
    statusBar()->addWidget(progressBar);

    // Signals/Slots
    connect(ui->btn_dbConnect, SIGNAL(clicked()), this, SLOT(btn_dbConnectOnClick()));
    connect(ui->btn_dbDisconnect, SIGNAL(clicked()), this, SLOT(btn_dbDisconnectOnClick()));
    connect(ui->btn_delete, SIGNAL(clicked()), this, SLOT(btn_deleteOnClick()));
    connect(ui->cmb_tabellen, SIGNAL(currentIndexChanged(QString)), this, SLOT(cmb_tabellenIndexChanged()));
    connect(ui->btn_save, SIGNAL(clicked()), this, SLOT(btn_saveOnClick()));
    connect(ui->btn_add,SIGNAL(clicked()), this, SLOT (btn_addOnClick()));
    connect(ui->btn_edit, SIGNAL(clicked()), this, SLOT(btn_editOnClick()));
    connect(ui->btn_loadSettings, SIGNAL(clicked()), this, SLOT(btn_loadSettingsOnClick()));
    connect(ui->btn_ftpDisconnect, SIGNAL(clicked()), this, SLOT(btn_ftpDisconnectOnClick()));
    connect(ui->btn_sendSettings, SIGNAL(clicked()), this,SLOT(btn_sendSettingsOnClick()));
    connect(ui->btn_discardChanges, SIGNAL(clicked()), this,SLOT(btn_discardChangesOnClick()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(actionExitOnClick()));
    connect(ui->actionInfo, SIGNAL(triggered()), this, SLOT(actionInfoOnClick()));
    connect(ui->actionDeutsch, SIGNAL(triggered()), this, SLOT(actionDeutschOnClick()));
    connect(ui->actionEnglisch, SIGNAL(triggered()), this, SLOT(actionEnglischOnClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}


// Befuelle ComboBox mit den Fragekategorien
void MainWindow::fillComboBoxes(){

    //Befuelle ComboBox mit Tabellen
    QStringList table = this->dbHandler.dbGetTables(&DBNAME);
    ui->cmb_tabellen->clear();
    ui->cmb_tabellen->addItems(table);
}

//Methode InfoBox anzeigen
void MainWindow::showInfobox(QString msg, QString detmsg){

    msgBox = new QMessageBox();
    msgBox->setWindowTitle((QString)"QuickQuizzer");
    msgBox->setText((QString)"Zur Information:");
    msgBox->setInformativeText(msg);
    msgBox->setDetailedText(detmsg);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->setIcon(QMessageBox::Information);
    msgBox->exec();

}

// Lade Schluessel-Wertpaare aus INI-File
void MainWindow::loadIniFile(){

    // initialisiere FileHandler-Objekt mit der heruntergeladenen INI-File
    this->fileHandler = FileHandler(this->file);

    // hole Schluessel-Wert-Paare aus INI-File
    //QStringList keys = this->fileHandler.getKeys();
    QHash<QString, QString> stringKeyValues = this->fileHandler.getStringKeyValues();
    QHash<QString, int> intKeyValues = this->fileHandler.getIntKeyValues();
    //int hashSize = keyValues.count();

    //Fuege Werte ein
    this->ui->txt_databaseSettings_dbHost->setText(stringKeyValues.value("DataBase/DbHost"));
    this->ui->txt_databaseSettings_dbName->setText(stringKeyValues.value("DataBase/DbName"));
    this->ui->txt_databaseSettings_dbUser->setText(stringKeyValues.value("DataBase/DbUser"));
    this->ui->txt_databaseSettings_dbPasswd->setText(stringKeyValues.value("DataBase/DbPassword"));
    this->ui->spinBox_gameSettings_Rounds->setValue(intKeyValues.value("Game/Rounds"));
    this->ui->spinBox_gameSettings_TimePerQ->setValue(intKeyValues.value("Game/TimePerQ"));
    this->ui->spinBox_gameSettings_TimesPerC->setValue(intKeyValues.value("Game/TimePerC"));
    this->ui->spinBox_gameSettings_TimeWhenNailed->setValue(intKeyValues.value("Game/TimeWhenNailed"));
    this->ui->spinBox_gameSettings_DelayQ_A->setValue(intKeyValues.value("Game/DelayQ_A"));
    QString getNextAfterAnswerValue = stringKeyValues.value("Game/GetNextAfterAnswer");
    if((getNextAfterAnswerValue.compare(getNextAfterAnswerValue, "true")) == 0){
        this->ui->chk_gameSettings_GetNextAfterAnswer->setCheckState(Qt::Checked);
    } else {
        this->ui->chk_gameSettings_GetNextAfterAnswer->setCheckState(Qt::Unchecked);
    }
    this->ui->spinBox_gameSettings_HSCount->setValue(intKeyValues.value("Game/HSCount"));
    QString reNailValue = stringKeyValues.value("Game/ReNail");
    if((reNailValue.compare(reNailValue, "false")) == 0){
        this->ui->chk_gameSettings_ReNail->setCheckState(Qt::Checked);
    } else {
        this->ui->chk_gameSettings_ReNail->setCheckState(Qt::Unchecked);
    }
    this->ui->spinBox_gameSettings_MinUserCount->setValue(intKeyValues.value("Game/MinUserCount"));
    int index = this->ui->cmb_gameSettings_Points->findText(stringKeyValues.value("Game/Points"));
    this->ui->cmb_gameSettings_Points->setCurrentIndex(index);
    this->ui->spinBox_gameSettings_NailCount->setValue(intKeyValues.value("Game/NailCount"));

    /* Formular generieren Start
    //keyValueLayout = new QGridLayout();
    QLabel *keyLabel;
    QLineEdit *valueTxtField;

    // Zeile und Spalte fuer das GriedLayout
    int row=0,column=0,id=0;

    // Generiere fuer jeden Schluessel ein Lable und fuer jeden Wert ein Textfeld
    foreach (const QString &key, keys){
        keyLabel = new QLabel();
        keyLabel->setObjectName("keyLable" + QString::number(id));
        qDebug() << "Erstelle keyLable" + QString::number(id);
        keyLabel->setText(key);
        this->ui->keyValueLayout->addWidget(keyLabel,row,column);
        column++;
        valueTxtField = new QLineEdit();
        valueTxtField->setObjectName("valueTxtField" + QString::number(id));
        valueTxtField->setText(keyValues.value(key));
        valueTxtField->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        this->ui->keyValueLayout->addWidget(valueTxtField,row,column);
        row++;id++;
        column--;
    }
    //fl->addStretch();
    //this->ui->scrollAreaWidgetContents_2->setLayout(keyValueLayout);
Formular generieren Ende*/

    // ScrollArea und Buttons aktivieren
    this->ui->scrollAreaWidgetContents->setEnabled(true);
    this->ui->btn_sendSettings->setEnabled(true);
    this->ui->btn_discardChanges->setEnabled(true);
}

// Schreibe Schluessel-Wertpaare in INI-File
void MainWindow::writeToIniFile(){

    // Strings aus Formular auslesen und in HashTable speichern
    this->newStringKeyValues.insert("DataBase/DbHost", this->ui->txt_databaseSettings_dbHost->text());
    this->newStringKeyValues.insert("DataBase/DbName", this->ui->txt_databaseSettings_dbName->text());
    this->newStringKeyValues.insert("DataBase/DbUser", this->ui->txt_databaseSettings_dbUser->text());
    this->newStringKeyValues.insert("DataBase/DbPassword", this->ui->txt_databaseSettings_dbPasswd->text());

    if (this->ui->chk_gameSettings_GetNextAfterAnswer->isChecked()){
        this->newStringKeyValues.insert("Game/GetNextAfterAnswer", "true");
    } else {
        this->newStringKeyValues.insert("Game/GetNextAfterAnswer", "false");
    }

    if (this->ui->chk_gameSettings_ReNail->isChecked()){
        this->newStringKeyValues.insert("Game/ReNail", "true");
    } else {
        this->newStringKeyValues.insert("Game/ReNail", "false");
    }

    this->newStringKeyValues.insert("Game/Points", this->ui->cmb_gameSettings_Points->currentText());

    // Int-Werte aus Formular auslesen und in HashTable speichern
    this->newIntKeyValues.insert("Game/Rounds", this->ui->spinBox_gameSettings_Rounds->value());
    this->newIntKeyValues.insert("Game/TimePerQ", this->ui->spinBox_gameSettings_TimePerQ->value());
    this->newIntKeyValues.insert("Game/TimePerC", this->ui->spinBox_gameSettings_TimesPerC->value());
    this->newIntKeyValues.insert("Game/TimeWhenNailed", this->ui->spinBox_gameSettings_TimeWhenNailed->value());
    this->newIntKeyValues.insert("Game/DelayQ_A", this->ui->spinBox_gameSettings_DelayQ_A->value());
    this->newIntKeyValues.insert("Game/HSCount", this->ui->spinBox_gameSettings_HSCount->value());
    this->newIntKeyValues.insert("Game/MinUserCount", this->ui->spinBox_gameSettings_MinUserCount->value());
    this->newIntKeyValues.insert("Game/NailCount", this->ui->spinBox_gameSettings_NailCount->value());

    if(!fileHandler.writeFile(newStringKeyValues, newIntKeyValues)){
        QMessageBox::information(this, tr("Q2 Admin"),
                                       trUtf8("Datei %1 konnte nicht zum schreiben geöffnet werden.").arg(this->file->fileName()));
    }
}

// INI-File ueber Ftp downloaden
bool MainWindow::connectToFtp(const QUrl &url, const quint16 &ftpPort, const QString &ftpUser, const QString ftpPasswd){

    // Schliesse die FTP-Verbindung und loesche das Objekt auf das ftp zeigt.
    if(ftp){
        ftp->abort();
        ftp->deleteLater();
        ftp = 0;
    }

    //Erstelle neues QFtp-Objekt
    ftp = new QFtp(this);
    connect(ftp, SIGNAL(commandFinished(int,bool)), this, SLOT(ftpCommandFinished(int,bool)));
    connect(ftp, SIGNAL(dataTransferProgress(qint64,qint64)), this, SLOT(updateDataTransferProgress(qint64,qint64)));

    if (!url.isValid()) {
        QMessageBox::information(this, tr("Q2 Admin"),trUtf8("Fehler:\nUngültige Adresse: %1").arg(this->ui->txt_ftpUrl->text()));
        return false;
    }
    if (url.scheme() != "ftp") {
        QMessageBox::information(this, tr("Q2 Admin"),tr("Fehler:\nDie URL muss mit 'ftp:' beginnen.").arg(this->ui->txt_ftpUrl->text()));
        return false;
    }
    if (url.path().isEmpty()) {
        QMessageBox::information(this, tr("Q2 Admin"),tr("Fehler:\nEs wurde kein Dateipfad angegeben.").arg(this->ui->txt_ftpUrl->text()));
        return false;
    }

    QString localFileName = "/tmp/config.ini"; //QFileInfo(url.path()).fileName();
    file = new QFile(localFileName);
    /*if(file->exists()){
        qDebug() << "File " << localFileName << " does exist.";
    } else {
        qDebug() << "File " << localFileName << " doesn't' exist. Will be created.";
    }*/

    if(!file->open(QIODevice::WriteOnly | QIODevice::Text)){
        showInfobox((QString) "Error: Cannot write file "
                    + qPrintable(file->fileName()) + ": "
                    + qPrintable(file->errorString()), "");
    }

    ftp->connectToHost(url.host(), ftpPort);
    nStatlabel->setText("Verbinde zu " + url.host() + " ...");
    ftp->login(ftpUser, ftpPasswd);
    if(file != 0){
        ftp->get(url.path(), file);
    } else {
        return false;
    }
    return true;
}

// SLOT: Button-Methode "Verbinden"
void MainWindow::btn_dbConnectOnClick(){

    // lese Eingabe felder aus
    this->DBHOST = ui->txt_dbHost->text();
    this->DBNAME = ui->txt_dbName->text();
    this->DBUSER = ui->txt_dbUser->text();
    this->DBPASSWD = ui->txt_dbPasswd->text();

    // Verbinde zu Datenbank
    int returnCode = this->dbHandler.dbConnect(this->DBHOST,this->DBNAME,this->DBUSER,this->DBPASSWD);

    if (returnCode == 0) {

        // Wenn Verbindung erfolgreich,..
        // Deaktiviere Verbinden-Button
        ui->btn_dbConnect->setEnabled(false);

        // Aktiviere Trennen-Button
        ui->btn_dbDisconnect->setEnabled(true);

        //Aktiviere Edit-Button
        ui->btn_edit->setEnabled(true);

        ui->cmb_tabellen->setEnabled(true);

        ui->txt_debug->append("[" + timeStamp.currentTime().toString() + "] Verbindung zu " + this->DBHOST + " erfolgreich hergestellt.");
        this->mStatLabel->setText("Datenbankverbindung aktiv <img src=':images/db-connect.png'>");

        fillComboBoxes();//Methode ComboBoxen fuellen

    } else {

        //InfoBox " Verbindung wurde nicht hergestellt "
        showInfobox((QString)"Verbindung konnte nicht hergestellt werden.",(QString)"DB-Host: "+this->DBHOST+"\nDatenbank: "+this->DBNAME+"\nBenutzer: "+this->DBUSER);

        // Verbindung nicht erfolgreich..
        ui->txt_debug->append("[" + timeStamp.currentTime().toString() + "] Verbindung konnte nicht aufgebaut werden.");
        ui->txt_debug->append("[" + timeStamp.currentTime().toString() + "] Fehler: " + this->dbHandler.getError());
        this->mStatLabel->setText("Datenbankverbindung getrennt <img src=':images/db-disconnect.png'>");

    }
}

// SLOT: Button-Methode "Trennen"
void MainWindow::btn_dbDisconnectOnClick(){

    //Aktive Datenbankverbindungen schliessen
    delete this->tableModel;

    // Trenne Datenbankverbindung
    this->dbHandler.dbClose();

    //InfoBox " Verbindung wurde getrennt "
    //showInfobox((QString)"Verbindung wurde getrennt.",(QString)"DB-Host: "+this->DBHOST+"\nDatenbank: "+this->DBNAME+"\nBenutzer: "+this->DBUSER);
    //this->nStatlabel->setText(tr("Datenbankverbindung wurde getrennt."));

    //Aktiviere/Deaktiviere entsprechende Buttons
    ui->btn_dbDisconnect->setEnabled(false);
    ui->btn_dbConnect->setEnabled(true);
    ui->cmb_tabellen->setEnabled(false);

    //Debug-Informationen
    ui->txt_debug->append("[" + timeStamp.currentTime().toString() + "] Verbindung geschlossen.");

    //StatusBar aktualisieren
    this->mStatLabel->setText("Datenbankverbindung getrennt <img src=':images/db-disconnect.png'>");
}

// SLOT:Button-Methode Datensatz loeschen
void MainWindow::btn_deleteOnClick(){
    //Datensatz loeschen der gerade selektiert ist
    if(tableModel->removeRows((ui->tblView_tabellen->currentIndex().row()),1)){
        nStatlabel->setText(trUtf8("Datensatz gelöscht."));
    } else {
        nStatlabel->setText(trUtf8("Datensatz konnte nicht gelöscht werden."));
    }
}

// SLOT: ComboBox Auswahl/Index aendert sich
void MainWindow::cmb_tabellenIndexChanged(){

    this->tableModel = new QSqlRelationalTableModel(0,dbHandler.db);  //tableModel instanziert
    this->tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);//"automatisches" Aktualisieren zu MySQL DB in "manuell" aendern
    this->tableModel->setTable((QString)ui->cmb_tabellen->currentText());//dem tableModel die Tabelle die in ComboBox gewaehlt wurde zuweisen

    //Relation/Fremdschluessel angeben
    if((QString)ui->cmb_tabellen->currentText()=="dt_question"){

        this->tableModel->setRelation(2,QSqlRelation("dt_category","Category_UUID","Category_Text"));
        this->tableModel->setRelation(3,QSqlRelation("dt_difficulty","Difficulty_UUID","Difficulty_Value"));
    }
    else if ((QString)ui->cmb_tabellen->currentText()=="dt_highscore"){
        this->tableModel->setRelation(1,QSqlRelation("dt_account","Account_UUID","Account_Name"));
    }


    this->tableModel->select();//Datensaetze holen
    ui->tblView_tabellen->setModel(this->tableModel);//tableview mit tablemodel verknuepfen
    ui->tblView_tabellen->setItemDelegate(new QSqlRelationalDelegate(ui->tblView_tabellen));//Verweis von tableView auf tableView
    ui->tblView_tabellen->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);//Passt Spaltenbreite auf Inhalt an (bei langen Spaltennamen)
    ui->tblView_tabellen->show();//View anzeigen
}

// SLOT: Button-Methode Datensatz speichern
void MainWindow::btn_saveOnClick(){

    this->nStatlabel->setText(trUtf8("Änderungen wurden gespeichert."));
    tableModel->submitAll();
     ui->tblView_tabellen->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

// SLOT: Button-Methode Datensatz hinzufuegen
void MainWindow::btn_addOnClick(){
    this->record = tableModel->record();
    record.setValue(0,(QVariant) this->uuid->createUuid());
    this->tableModel->insertRecord(tableModel->rowCount(),this->record);//neuen Datensatz mit uuid hinzufuegen
     uuid = new QUuid();
    this->nStatlabel->setText(trUtf8("Datensatz hinzugefügt."));

}

// SLOT: Button-Methode Tabelle editieren
void MainWindow::btn_editOnClick(){

    this->nStatlabel->setText(tr("Tabelle kann editiert werden."));
    ui->tblView_tabellen->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->btn_add->setEnabled(true);
    ui->btn_delete->setEnabled(true);
    ui->btn_save->setEnabled(true);
}

// SLOT: Button-Methode INI-File laden
void MainWindow::btn_loadSettingsOnClick(){
    ftpUrl = this->ui->txt_ftpUrl->text();
    connectToFtp(QUrl(this->ui->txt_ftpUrl->text()), (quint16) this->ui->spinBox_ftpPort->value(), this->ui->txt_ftpUser->text(), this->ui->txt_ftpPasswd->text());
}

//SLOT: Button-Methode FTP-Verbindung trennen
void MainWindow::btn_ftpDisconnectOnClick(){
    ftp->close();
}

// SLOT: Wird ausgefuehrt, wenn ein FTP-Kommando abgeschlossen wurde
void MainWindow::ftpCommandFinished(int, bool error){

    if (ftp->currentCommand() == QFtp::ConnectToHost) {
        if (error) {
            QMessageBox::information(this, tr("Q2 Admin"),
                                           trUtf8("Verbindung zum FTP-Server %1 nicht möglich. Bitte vergewissern Sie sich, ob der Hostname korrekt ist.").arg(ftpUrl.host()));
             return;
        }
        nStatlabel->setText(tr("Eingeloggt auf %1.")
                                  .arg(ftpUrl.host()));
        this->ui->btn_loadSettings->setEnabled(false);
        this->ui->btn_ftpDisconnect->setEnabled(true);
        return;
    }
    if (ftp->currentCommand() == QFtp::Get) {
        if (error) {
            nStatlabel->setText(tr("Download von %1. abgebrochen").arg("config.ini"));
            file->close();
            file->remove();
        } else {
            nStatlabel->setText(tr("%1 heruntergeladen.").arg("config.ini"));
            file->close();
            loadIniFile();
        }
        //delete file;

    }
    if (ftp->currentCommand() == QFtp::Put) {
        if (error) {
            QMessageBox::information(this, tr("Q2 Admin"),
                                           tr("Datei %1 konnte nicht zum Server %2 gesendet werden").arg(this->file->fileName()).arg(ftpUrl.host()));
            nStatlabel->setText(tr("Datei konnte nicht gesendet werden."));
        } else {
            nStatlabel->setText(tr("%1 gesendet.").arg("newconfig.ini"));
        }
    }
    if (ftp->currentCommand() == QFtp::Close) {
        if(error) {
            nStatlabel->setText(tr("Verbindung konnte nicht getrennt werden."));
            return;
        } else{
            nStatlabel->setText(tr("Auf %1 ausgeloggt.").arg(ftpUrl.host()));
            this->ui->btn_ftpDisconnect->setEnabled(false);
            this->ui->btn_loadSettings->setEnabled(true);
            progressBar->hide();
            this->ui->scrollAreaWidgetContents->setEnabled(false);
            this->ui->btn_sendSettings->setEnabled(false);
            this->ui->btn_discardChanges->setEnabled(false);
        }
    }
}

//SLOT: Aktualisiere Fortschrittsanzeige der ProgressBar
void MainWindow::updateDataTransferProgress(qint64 readBytes, qint64 totalBytes){
    progressBar->show();
    progressBar->setMaximum(totalBytes);
    progressBar->setValue(readBytes);
}

// SLOT: Button-Methode Einstellungen senden
void MainWindow::btn_sendSettingsOnClick(){

    writeToIniFile();
    this->file = fileHandler.getFile();
    ftp->put(this->file, "newconfig.ini");

}

// SLOT: Button-Methode Einstellungen neuladen
void MainWindow::btn_discardChangesOnClick(){
    loadIniFile();
    progressBar->hide();
    nStatlabel->setText(tr("%1 neu geladen.").arg("config.ini"));
}

//SLOT: Methode fuer Menue-Eintrag "Exit"
void MainWindow::actionExitOnClick(){
    this->close();
}

//SLOT: Methode fuer Menue-Eintrag "About"
void MainWindow::actionInfoOnClick(){
    //QMessageBox::about(this, tr("Ueber Q2_Admin"), tr("Q2_Admin 1.0\n\nBasierend auf Qt4.8\n\nErstellt am 30.11.2012.\n\nEntwickler:\nAlexander Papenfuss\nEnrico Nohl\nMarcel Wesberg\nNorman Bestfleisch"));
    msg_about = new QMessageBox();
    msg_about->setWindowTitle(trUtf8("Über Q2 Admin"));
    msg_about->setText(trUtf8("Q2 Admin 1.0\n\nBasierend auf Qt4.8\n\nErstellt am 03.12.2012.\n\nEntwickler:  Alexander.Papenfuss@it2010.ba-leipzig.de\n\tEnrico.Nohl@it2010.ba-leipzig.de\n\tMarcel.Wesberg@it2010.ba-leipzig.de\n\tNorman.Bestfleisch@it2010.ba-leipzig.de"));
    msg_about->setStandardButtons(QMessageBox::Ok);
    msg_about->setIconPixmap(QPixmap("images/Q2.png"));
    msg_about->exec();
}

void MainWindow::actionDeutschOnClick(){
    QMessageBox::information(this, tr("Q2 Admin"),
                                   trUtf8("Diese Funktion wurde noch nicht implementiert."));
}

void MainWindow::actionEnglischOnClick(){
    QMessageBox::information(this, tr("Q2 Admin"),
                                   trUtf8("Diese Funktion wurde noch nicht implementiert."));
}
