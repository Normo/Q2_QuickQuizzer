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
#include <qmessagebox.h>


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
    connect(ui->btn_change, SIGNAL(clicked()), this, SLOT(btn_saveOnClick()));
    connect(ui->btn_add,SIGNAL(clicked()), this, SLOT (btn_addOnClick()));
    connect(ui->btn_edit, SIGNAL(clicked()), this, SLOT(btn_editOnClick()));

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

    /*
     * Vorerst nicht benötigt, da Tab "Frage hinzufügen" gelöscht
     *
    QStringList categories      = this->dbHandler.dbGetCategories();
    QStringList difficulties    = this->dbHandler.dbGetDifficulties();
    ui->cmb_category->clear();
    ui->cmb_difficulty->clear();
    ui->cmb_category->addItems(categories);
    ui->cmb_difficulty->addItems(difficulties);
    */

    //Befülle ComboBox mit Tabellen
    QStringList table = this->dbHandler.dbGetTables(&DBNAME);
    ui->cmb_tabellen->clear();
    ui->cmb_tabellen->addItems(table);
}

//Methode InfoBox anzeigen
void MainWindow::show_infobox(QString msg, QString detmsg){

    msgBox = new QMessageBox();
    msgBox->setWindowTitle((QString)"QuickQuizzer");
    msgBox->setText((QString)"Zur Information:");
    msgBox->setInformativeText(msg);
    msgBox->setDetailedText(detmsg);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->setIcon(QMessageBox::Information);
    msgBox->exec();

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

        //InfoBox "Verbindung wurde hergestellt"
        show_infobox((QString)"Verbindung wurde hergestellt.",(QString)"DB-Host: "+this->DBHOST+"\nDatenbank: "+this->DBNAME+"\nBenutzer: "+this->DBUSER);

        // Wenn Verbindung erfolgreich,..
        // Deaktiviere Verbinden-Button
        ui->btn_dbConnect->setEnabled(false);

        // Aktiviere Trennen-Button
        ui->btn_dbDisconnect->setEnabled(true);

        // Aktiviere Buttons auf Tab DatenManipulation
        ui->btn_add->setEnabled(true);
        ui->btn_change->setEnabled(true);
        ui->btn_delete->setEnabled(true);
        ui->btn_edit->setEnabled(true);

        this->mStatLabel->setText("Datenbankverbindung aktiv.");

        fillComboBoxes();//Methode ComboBoxen füllen

    } else {

        //InfoBox " Verbindung wurde nicht hergestellt "
        show_infobox((QString)"Verbindung konnte nicht hergestellt werden.",(QString)"DB-Host: "+this->DBHOST+"\nDatenbank: "+this->DBNAME+"\nBenutzer: "+this->DBUSER);

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

    //Aktive Datenbankverbindungen schließen
    delete this->tableModel;

    // Trenne Datenbankverbindung
    this->dbHandler.dbClose();

    //InfoBox " Verbindung wurde getrennt "
    show_infobox((QString)"Verbindung wurde getrennt.",(QString)"DB-Host: "+this->DBHOST+"\nDatenbank: "+this->DBNAME+"\nBenutzer: "+this->DBUSER);


    //Aktiviere/Deaktiviere entsprechende Buttons
    ui->btn_dbDisconnect->setEnabled(false);
    ui->btn_dbConnect->setEnabled(true);

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
    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);//"automatisches" Aktualisieren zu MySQL DB in "manuell" ändern
    tableModel->setTable((QString)ui->cmb_tabellen->currentText());//dem tableModel die Tabelle die in ComboBox gewählt wurde zuweisen

    tableModel->setRelation(3,QSqlRelation("fragen","id","Frage"));//Relation/Fremdschlüssel angeben

    tableModel->select();//Datensätze holen
    ui->tblView_tabellen->setModel(tableModel);//tableview mit tablemodel verknüpfen
    ui->tblView_tabellen->setItemDelegate(new QSqlRelationalDelegate(ui->tblView_tabellen));//Verweis von tableView auf tableView
    ui->tblView_tabellen->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);//Passt Spaltenbreite auf Inhalt an (bei langen Spaltennamen)
    ui->tblView_tabellen->show();//View anzeigen
}

//SLOT: Button-Methode Datensatz speichern
void MainWindow::btn_saveOnClick(){

    //InfoBox
    show_infobox((QString)"Aenderungen wurden gespeichert.",(QString)"Hallo");
    tableModel->submitAll();
     ui->tblView_tabellen->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

//SLOT: Button-Methode Datensatz hinzufügen
void MainWindow::btn_addOnClick(){
    tableModel->insertRow(tableModel->rowCount());//neuen Datensatz hinzufügen
}

//SLOT: Button-Methode Tabelle editieren
void MainWindow::btn_editOnClick(){

    //InfoBox
    show_infobox((QString)"Tabelle kann nun editiert werden.",(QString)"HUHU");
    ui->tblView_tabellen->setEditTriggers(QAbstractItemView::DoubleClicked);

}
