/*
 *Program: Q2_Admin
 *Source : mainwindow.cpp
 *Purpose: Implementation of mainwindow class.
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbhandler.h"
#include <QtSql>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dbHandler = DBHandler();
    mStatLabel = new QLabel;
    statusBar()->addPermanentWidget(mStatLabel);

    // Signals/Slots
    connect(ui->btn_dbConnect, SIGNAL(clicked()), this, SLOT(btn_dbConnectOnClick()));
    connect(ui->btn_dbDisconnect, SIGNAL(clicked()), this, SLOT(btn_dbDisconnectOnClick()));
    connect(ui->btn_delete, SIGNAL(clicked()), this, SLOT(btn_deleteOnClick()));
    connect(ui->cmb_tabellen, SIGNAL(currentIndexChanged(QString)), this, SLOT(cmb_tabellenIndexChanged()));
    connect(ui->btn_change, SIGNAL(clicked()), this, SLOT(btn_changeOnClick()));
    connect(ui->btn_add,SIGNAL(clicked()), this, SLOT (btn_addOnClick()));
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


// Befülle ComboBox mit den Fragekategorien
void MainWindow::fillComboBoxes(){

    QStringList categories      = this->dbHandler.dbGetCategories();
    QStringList difficulties    = this->dbHandler.dbGetDifficulties();
    ui->cmb_category->clear();
    ui->cmb_difficulty->clear();
    ui->cmb_category->addItems(categories);
    ui->cmb_difficulty->addItems(difficulties);

    //Befülle ComboBox mit Tabellen
    QStringList table = this->dbHandler.dbGetTables(&DBNAME);
    ui->cmb_tabellen->clear();
    ui->cmb_tabellen->addItems(table);
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

        //Aktiviere Senden-Button für Neue Quizfrage
        ui->btn_sendQuestion->setEnabled(true);

        this->mStatLabel->setText("Datenbankverbindung aktiv.");

        fillComboBoxes();//Methode ComboBoxen füllen

    } else {
        // Verbindung nicht erfolgreich..
        ui->txt_debug->append("Verbindung konnte nicht aufgebaut werden.");
        this->mStatLabel->setText("Datenbankverbindung getrennt.");
    }

    // Debug-Informationen
    QString returnString = QString::number(returnCode);
    ui->txt_debug->append("DB-Host: "+this->DBHOST+"\nDatenbank: "+this->DBNAME+"\nBenutzer: "+this->DBUSER+"\nPasswort: "+this->DBPASSWD+"\nDB-Connect-Returncode="+returnString);

    //Frage alle Tabelle der DB ab
    this->dbHandler.dbShowTablesQuery(&this->DBNAME);

    //Frage alle Fragekategorien ab
    this->dbHandler.dbGetCategories();
}

// SLOT: Button-Methode "Trennen"
void MainWindow::btn_dbDisconnectOnClick(){


    // Trenne Datenbankverbindung
    this->dbHandler.dbClose();

    //Aktiviere/Deaktiviere entsprechende Buttons
    ui->btn_dbDisconnect->setEnabled(false);
    ui->btn_dbConnect->setEnabled(true);
    ui->btn_sendQuestion->setEnabled(false);

    //Leere die ComboBoxen
    ui->cmb_category->clear();
    ui->cmb_difficulty->clear();

    //Debug-Informationen
    ui->txt_debug->append("Verbindung geschlossen");

    //StatusBar aktualisieren
    this->mStatLabel->setText("Datenbankverbindung getrennt.");
}

//SLOT:Button-Methode Datensatz löschen
void MainWindow::btn_deleteOnClick(){
    tableModel->removeRows((ui->tblView_tabellen->currentIndex().row()),1);//Datensatz löschen der gerade selektiert ist
}

//SLOT: ComboBox Auswahl/Index ändert sich
void MainWindow::cmb_tabellenIndexChanged(){

    tableModel = new QSqlRelationalTableModel(0,dbHandler.db);  //tableModel instanziert
    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);//automatisches Aktualisieren zu MySQL DB in manuell ändern
    tableModel->setTable((QString)ui->cmb_tabellen->currentText());//dem tableModel die Tabelle die in ComboBox gewählt wurde zuweisen

    tableModel->setRelation(3,QSqlRelation("fragen","id","Frage"));//Relation/Fremdschlüssel angeben

    tableModel->select();//Datensätze holen
    ui->tblView_tabellen->setModel(tableModel);//tableview mit tablemodel verknüpfen
    ui->tblView_tabellen->setItemDelegate(new QSqlRelationalDelegate(ui->tblView_tabellen));//Verweis von tableView auf tableView
    ui->tblView_tabellen->show();//View anzeigen
}

//SLOT: Button-Methode Datensatz speichern
void MainWindow::btn_changeOnClick(){

    tableModel->submitAll();
    qDebug() << "Datensatz wurde gespeichert";
}

//SLOT: Button-Methode Datensatz hinzufügen
void MainWindow::btn_addOnClick(){
    tableModel->insertRow(tableModel->rowCount());//neuen Datensatz hinzufügen
}
