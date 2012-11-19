/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Nov 19 19:04:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_1;
    QLabel *lbl_dbHost;
    QLineEdit *txt_dbHost;
    QLabel *lbl_dbName;
    QLineEdit *txt_dbName;
    QLabel *lbl_dbUser;
    QLineEdit *txt_dbUser;
    QLabel *lbl_dbUserPasswd;
    QLineEdit *txt_dbPasswd;
    QHBoxLayout *horizontalLayout1;
    QPushButton *btn_dbConnect;
    QPushButton *btn_dbDisconnect;
    QPushButton *btn_norman;
    QLabel *lbl_debug;
    QTextEdit *txt_debug;
    QWidget *tab2;
    QVBoxLayout *verticalLayout;
    QGroupBox *gb_selectTable;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *cmb_tabellen;
    QPushButton *btn_edit;
    QPushButton *btn_save;
    QGroupBox *gb_editTable;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QTableView *tblView_tabellen;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QWidget *tab3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *gb_settings;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(693, 572);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_1 = new QFormLayout();
        formLayout_1->setSpacing(6);
        formLayout_1->setObjectName(QString::fromUtf8("formLayout_1"));
        formLayout_1->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lbl_dbHost = new QLabel(tab);
        lbl_dbHost->setObjectName(QString::fromUtf8("lbl_dbHost"));

        formLayout_1->setWidget(0, QFormLayout::LabelRole, lbl_dbHost);

        txt_dbHost = new QLineEdit(tab);
        txt_dbHost->setObjectName(QString::fromUtf8("txt_dbHost"));

        formLayout_1->setWidget(0, QFormLayout::FieldRole, txt_dbHost);

        lbl_dbName = new QLabel(tab);
        lbl_dbName->setObjectName(QString::fromUtf8("lbl_dbName"));

        formLayout_1->setWidget(1, QFormLayout::LabelRole, lbl_dbName);

        txt_dbName = new QLineEdit(tab);
        txt_dbName->setObjectName(QString::fromUtf8("txt_dbName"));

        formLayout_1->setWidget(1, QFormLayout::FieldRole, txt_dbName);

        lbl_dbUser = new QLabel(tab);
        lbl_dbUser->setObjectName(QString::fromUtf8("lbl_dbUser"));

        formLayout_1->setWidget(2, QFormLayout::LabelRole, lbl_dbUser);

        txt_dbUser = new QLineEdit(tab);
        txt_dbUser->setObjectName(QString::fromUtf8("txt_dbUser"));

        formLayout_1->setWidget(2, QFormLayout::FieldRole, txt_dbUser);

        lbl_dbUserPasswd = new QLabel(tab);
        lbl_dbUserPasswd->setObjectName(QString::fromUtf8("lbl_dbUserPasswd"));

        formLayout_1->setWidget(3, QFormLayout::LabelRole, lbl_dbUserPasswd);

        txt_dbPasswd = new QLineEdit(tab);
        txt_dbPasswd->setObjectName(QString::fromUtf8("txt_dbPasswd"));
        txt_dbPasswd->setEchoMode(QLineEdit::Password);

        formLayout_1->setWidget(3, QFormLayout::FieldRole, txt_dbPasswd);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setSpacing(6);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        btn_dbConnect = new QPushButton(tab);
        btn_dbConnect->setObjectName(QString::fromUtf8("btn_dbConnect"));

        horizontalLayout1->addWidget(btn_dbConnect);

        btn_dbDisconnect = new QPushButton(tab);
        btn_dbDisconnect->setObjectName(QString::fromUtf8("btn_dbDisconnect"));
        btn_dbDisconnect->setEnabled(false);

        horizontalLayout1->addWidget(btn_dbDisconnect);

        btn_norman = new QPushButton(tab);
        btn_norman->setObjectName(QString::fromUtf8("btn_norman"));

        horizontalLayout1->addWidget(btn_norman);


        formLayout_1->setLayout(4, QFormLayout::FieldRole, horizontalLayout1);

        lbl_debug = new QLabel(tab);
        lbl_debug->setObjectName(QString::fromUtf8("lbl_debug"));

        formLayout_1->setWidget(5, QFormLayout::LabelRole, lbl_debug);

        txt_debug = new QTextEdit(tab);
        txt_debug->setObjectName(QString::fromUtf8("txt_debug"));

        formLayout_1->setWidget(5, QFormLayout::FieldRole, txt_debug);


        horizontalLayout->addLayout(formLayout_1);

        tabWidget->addTab(tab, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        verticalLayout = new QVBoxLayout(tab2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gb_selectTable = new QGroupBox(tab2);
        gb_selectTable->setObjectName(QString::fromUtf8("gb_selectTable"));
        verticalLayout_4 = new QVBoxLayout(gb_selectTable);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cmb_tabellen = new QComboBox(gb_selectTable);
        cmb_tabellen->setObjectName(QString::fromUtf8("cmb_tabellen"));

        horizontalLayout_4->addWidget(cmb_tabellen);

        btn_edit = new QPushButton(gb_selectTable);
        btn_edit->setObjectName(QString::fromUtf8("btn_edit"));
        btn_edit->setEnabled(false);

        horizontalLayout_4->addWidget(btn_edit);

        btn_save = new QPushButton(gb_selectTable);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setEnabled(false);

        horizontalLayout_4->addWidget(btn_save);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(gb_selectTable);

        gb_editTable = new QGroupBox(tab2);
        gb_editTable->setObjectName(QString::fromUtf8("gb_editTable"));
        verticalLayout_3 = new QVBoxLayout(gb_editTable);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tblView_tabellen = new QTableView(gb_editTable);
        tblView_tabellen->setObjectName(QString::fromUtf8("tblView_tabellen"));
        tblView_tabellen->setEditTriggers(QAbstractItemView::EditKeyPressed);
        tblView_tabellen->setSelectionMode(QAbstractItemView::SingleSelection);
        tblView_tabellen->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tblView_tabellen, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_add = new QPushButton(gb_editTable);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setEnabled(false);

        horizontalLayout_5->addWidget(btn_add);

        btn_delete = new QPushButton(gb_editTable);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setEnabled(false);

        horizontalLayout_5->addWidget(btn_delete);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(gb_editTable);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        horizontalLayout_3 = new QHBoxLayout(tab3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gb_settings = new QGroupBox(tab3);
        gb_settings->setObjectName(QString::fromUtf8("gb_settings"));
        gb_settings->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" }"));
        gb_settings->setFlat(false);
        gb_settings->setCheckable(false);
        gb_settings->setChecked(false);

        horizontalLayout_3->addWidget(gb_settings);

        tabWidget->addTab(tab3, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        lbl_dbHost->setText(QApplication::translate("MainWindow", "DB-Host", 0, QApplication::UnicodeUTF8));
        txt_dbHost->setText(QApplication::translate("MainWindow", "192.168.0.1", 0, QApplication::UnicodeUTF8));
        lbl_dbName->setText(QApplication::translate("MainWindow", "Datenbank", 0, QApplication::UnicodeUTF8));
        txt_dbName->setText(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        lbl_dbUser->setText(QApplication::translate("MainWindow", "Benutzer", 0, QApplication::UnicodeUTF8));
        txt_dbUser->setText(QApplication::translate("MainWindow", "root", 0, QApplication::UnicodeUTF8));
        lbl_dbUserPasswd->setText(QApplication::translate("MainWindow", "Passwort", 0, QApplication::UnicodeUTF8));
        txt_dbPasswd->setText(QApplication::translate("MainWindow", "FGS.209=Wme!", 0, QApplication::UnicodeUTF8));
        btn_dbConnect->setText(QApplication::translate("MainWindow", "Verbinden", 0, QApplication::UnicodeUTF8));
        btn_dbDisconnect->setText(QApplication::translate("MainWindow", "Trennen", 0, QApplication::UnicodeUTF8));
        btn_norman->setText(QApplication::translate("MainWindow", "Norman", 0, QApplication::UnicodeUTF8));
        lbl_debug->setText(QApplication::translate("MainWindow", "Debug-Info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Datenbankverbindung", 0, QApplication::UnicodeUTF8));
        gb_selectTable->setTitle(QApplication::translate("MainWindow", "Tabelle ausw\303\244hlen:", 0, QApplication::UnicodeUTF8));
        btn_edit->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        btn_save->setText(QApplication::translate("MainWindow", "Speichern", 0, QApplication::UnicodeUTF8));
        gb_editTable->setTitle(QApplication::translate("MainWindow", "Tabelle bearbeiten:", 0, QApplication::UnicodeUTF8));
        btn_add->setText(QApplication::translate("MainWindow", "Datensatz hinzuf\303\274gen", 0, QApplication::UnicodeUTF8));
        btn_delete->setText(QApplication::translate("MainWindow", "Datensatz loeschen", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("MainWindow", "Datensatz manipulieren", 0, QApplication::UnicodeUTF8));
        gb_settings->setTitle(QApplication::translate("MainWindow", "GroupBox", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("MainWindow", "Einstellungen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
