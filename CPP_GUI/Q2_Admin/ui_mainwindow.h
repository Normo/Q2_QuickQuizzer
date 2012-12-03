/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Dec 3 18:50:41 2012
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
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
    QAction *actionExit;
    QAction *actionDeutsch;
    QAction *actionEnglisch;
    QAction *actionInfo;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *gb_dbConnect;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *fl_dbConnect;
    QLabel *lbl_dbHost;
    QLineEdit *txt_dbHost;
    QLabel *lbl_dbName;
    QLineEdit *txt_dbName;
    QLabel *lbl_dbUser;
    QHBoxLayout *hbl_dbConnect1;
    QLineEdit *txt_dbUser;
    QLabel *lbl_dbUserPasswd;
    QLineEdit *txt_dbPasswd;
    QHBoxLayout *hbl_dbConnect2;
    QSpacerItem *hspacer_dbConnect;
    QPushButton *btn_dbConnect;
    QPushButton *btn_dbDisconnect;
    QGroupBox *gb_dbConnectionInfo;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *txt_debug;
    QWidget *tab2;
    QVBoxLayout *verticalLayout;
    QGroupBox *gb_selectTable;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hbl_selectTable;
    QComboBox *cmb_tabellen;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_edit;
    QPushButton *btn_save;
    QGroupBox *gb_editTable;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gl_editTable;
    QTableView *tblView_tabellen;
    QHBoxLayout *hbl_editTable;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QWidget *tab3;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *gb_ftpConnection;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *fl_ftpConnection;
    QLabel *lbl_ftpUrl;
    QHBoxLayout *hbl_ftpConnection1;
    QLineEdit *txt_ftpUrl;
    QLabel *lbl_ftpPort;
    QSpinBox *spinBox_ftpPort;
    QLabel *lbl_ftpUser;
    QHBoxLayout *hbl_ftpConnection2;
    QLineEdit *txt_ftpUser;
    QLabel *lbl_ftpPasswd;
    QLineEdit *txt_ftpPasswd;
    QHBoxLayout *hbl_ftpButtons;
    QSpacerItem *hSpacer_ftpButtons;
    QPushButton *btn_loadSettings;
    QPushButton *btn_ftpDisconnect;
    QGroupBox *gb_settings;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QVBoxLayout *vbl_settingsForm;
    QFormLayout *fl_databaseSettings;
    QLabel *lbl_databaseSettings;
    QLabel *lbl_databaseSettings_dbHost;
    QLineEdit *txt_databaseSettings_dbHost;
    QLabel *lbl_databaseSettings_dbName;
    QLineEdit *txt_databaseSettings_dbName;
    QLabel *lbl_databaseSettings_dbUser;
    QHBoxLayout *hbl_databaseSettings;
    QLineEdit *txt_databaseSettings_dbUser;
    QLabel *lbl_databaseSettings_dbPasswd;
    QLineEdit *txt_databaseSettings_dbPasswd;
    QFrame *hline_settingsForm_1;
    QGridLayout *gl_gameSettings1;
    QLabel *lbl_gameSettings_GetNextAfterAnswer;
    QCheckBox *chk_gameSettings_GetNextAfterAnswer;
    QLabel *lbl_gameSettings_TimePerQ;
    QLabel *lbl_gameSettings_TimeWhenNailed;
    QLabel *lbl_gameSettings_DelayQ_A;
    QSpinBox *spinBox_gameSettings_TimesPerC;
    QLabel *lbl_gameSettings_Rounds;
    QSpinBox *spinBox_gameSettings_Rounds;
    QLabel *lbl_gameSettings_TimesPerC;
    QSpinBox *spinBox_gameSettings_TimeWhenNailed;
    QSpacerItem *hSpacer_gameSettings2;
    QSpinBox *spinBox_gameSettings_TimePerQ;
    QLabel *lbl_gameSettings;
    QSpinBox *spinBox_gameSettings_DelayQ_A;
    QLabel *lbl_gameSettings_HSCount;
    QSpinBox *spinBox_gameSettings_HSCount;
    QSpacerItem *hSpacer_gameSettings1;
    QFrame *hline_settingsForm_2;
    QGridLayout *gl_gameSettings2;
    QLabel *lbl_gameSettings_NailCount;
    QLabel *lbl_gameSettings_ignored;
    QLabel *lbl_gameSettings_ReNail;
    QLabel *lbl_gameSettings_Points;
    QSpinBox *spinBox_gameSettings_NailCount;
    QComboBox *cmb_gameSettings_Points;
    QSpinBox *spinBox_gameSettings_MinUserCount;
    QLabel *lbl_gameSettings_MinUserCount;
    QSpacerItem *hSpacer_gameSettings3;
    QSpacerItem *hSpacer_gameSettings4;
    QCheckBox *chk_gameSettings_ReNail;
    QHBoxLayout *hbl_settingButtons;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_sendSettings;
    QPushButton *btn_discardChanges;
    QMenuBar *menuBar;
    QMenu *menuDatei;
    QMenu *menuInfo;
    QMenu *menuEinstellungen;
    QMenu *menuSprache;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(780, 721);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionDeutsch = new QAction(MainWindow);
        actionDeutsch->setObjectName(QString::fromUtf8("actionDeutsch"));
        actionEnglisch = new QAction(MainWindow);
        actionEnglisch->setObjectName(QString::fromUtf8("actionEnglisch"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
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
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        verticalLayout_5 = new QVBoxLayout(tab1);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gb_dbConnect = new QGroupBox(tab1);
        gb_dbConnect->setObjectName(QString::fromUtf8("gb_dbConnect"));
        gb_dbConnect->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     border: 2px solid darkblue;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	color: darkblue;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" }"));
        verticalLayout_7 = new QVBoxLayout(gb_dbConnect);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        fl_dbConnect = new QFormLayout();
        fl_dbConnect->setSpacing(6);
        fl_dbConnect->setObjectName(QString::fromUtf8("fl_dbConnect"));
        fl_dbConnect->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lbl_dbHost = new QLabel(gb_dbConnect);
        lbl_dbHost->setObjectName(QString::fromUtf8("lbl_dbHost"));

        fl_dbConnect->setWidget(0, QFormLayout::LabelRole, lbl_dbHost);

        txt_dbHost = new QLineEdit(gb_dbConnect);
        txt_dbHost->setObjectName(QString::fromUtf8("txt_dbHost"));

        fl_dbConnect->setWidget(0, QFormLayout::FieldRole, txt_dbHost);

        lbl_dbName = new QLabel(gb_dbConnect);
        lbl_dbName->setObjectName(QString::fromUtf8("lbl_dbName"));

        fl_dbConnect->setWidget(1, QFormLayout::LabelRole, lbl_dbName);

        txt_dbName = new QLineEdit(gb_dbConnect);
        txt_dbName->setObjectName(QString::fromUtf8("txt_dbName"));

        fl_dbConnect->setWidget(1, QFormLayout::FieldRole, txt_dbName);

        lbl_dbUser = new QLabel(gb_dbConnect);
        lbl_dbUser->setObjectName(QString::fromUtf8("lbl_dbUser"));

        fl_dbConnect->setWidget(2, QFormLayout::LabelRole, lbl_dbUser);

        hbl_dbConnect1 = new QHBoxLayout();
        hbl_dbConnect1->setSpacing(6);
        hbl_dbConnect1->setObjectName(QString::fromUtf8("hbl_dbConnect1"));
        txt_dbUser = new QLineEdit(gb_dbConnect);
        txt_dbUser->setObjectName(QString::fromUtf8("txt_dbUser"));

        hbl_dbConnect1->addWidget(txt_dbUser);

        lbl_dbUserPasswd = new QLabel(gb_dbConnect);
        lbl_dbUserPasswd->setObjectName(QString::fromUtf8("lbl_dbUserPasswd"));

        hbl_dbConnect1->addWidget(lbl_dbUserPasswd);

        txt_dbPasswd = new QLineEdit(gb_dbConnect);
        txt_dbPasswd->setObjectName(QString::fromUtf8("txt_dbPasswd"));
        txt_dbPasswd->setEchoMode(QLineEdit::Password);

        hbl_dbConnect1->addWidget(txt_dbPasswd);


        fl_dbConnect->setLayout(2, QFormLayout::FieldRole, hbl_dbConnect1);


        verticalLayout_7->addLayout(fl_dbConnect);

        hbl_dbConnect2 = new QHBoxLayout();
        hbl_dbConnect2->setSpacing(6);
        hbl_dbConnect2->setObjectName(QString::fromUtf8("hbl_dbConnect2"));
        hspacer_dbConnect = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hbl_dbConnect2->addItem(hspacer_dbConnect);

        btn_dbConnect = new QPushButton(gb_dbConnect);
        btn_dbConnect->setObjectName(QString::fromUtf8("btn_dbConnect"));
        btn_dbConnect->setAutoDefault(true);

        hbl_dbConnect2->addWidget(btn_dbConnect);

        btn_dbDisconnect = new QPushButton(gb_dbConnect);
        btn_dbDisconnect->setObjectName(QString::fromUtf8("btn_dbDisconnect"));
        btn_dbDisconnect->setEnabled(false);
        btn_dbDisconnect->setAutoDefault(true);

        hbl_dbConnect2->addWidget(btn_dbDisconnect);


        verticalLayout_7->addLayout(hbl_dbConnect2);


        verticalLayout_5->addWidget(gb_dbConnect);

        gb_dbConnectionInfo = new QGroupBox(tab1);
        gb_dbConnectionInfo->setObjectName(QString::fromUtf8("gb_dbConnectionInfo"));
        gb_dbConnectionInfo->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     border: 2px solid darkblue;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	color: darkblue;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" }"));
        verticalLayout_6 = new QVBoxLayout(gb_dbConnectionInfo);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        txt_debug = new QTextEdit(gb_dbConnectionInfo);
        txt_debug->setObjectName(QString::fromUtf8("txt_debug"));

        verticalLayout_6->addWidget(txt_debug);


        verticalLayout_5->addWidget(gb_dbConnectionInfo);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        verticalLayout = new QVBoxLayout(tab2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gb_selectTable = new QGroupBox(tab2);
        gb_selectTable->setObjectName(QString::fromUtf8("gb_selectTable"));
        gb_selectTable->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     border: 2px solid darkblue;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	color: darkblue;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" }"));
        verticalLayout_4 = new QVBoxLayout(gb_selectTable);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        hbl_selectTable = new QHBoxLayout();
        hbl_selectTable->setSpacing(6);
        hbl_selectTable->setObjectName(QString::fromUtf8("hbl_selectTable"));
        cmb_tabellen = new QComboBox(gb_selectTable);
        cmb_tabellen->setObjectName(QString::fromUtf8("cmb_tabellen"));
        cmb_tabellen->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmb_tabellen->sizePolicy().hasHeightForWidth());
        cmb_tabellen->setSizePolicy(sizePolicy1);
        cmb_tabellen->setMinimumSize(QSize(100, 30));

        hbl_selectTable->addWidget(cmb_tabellen);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hbl_selectTable->addItem(horizontalSpacer_2);

        btn_edit = new QPushButton(gb_selectTable);
        btn_edit->setObjectName(QString::fromUtf8("btn_edit"));
        btn_edit->setEnabled(false);
        btn_edit->setAutoDefault(true);

        hbl_selectTable->addWidget(btn_edit);

        btn_save = new QPushButton(gb_selectTable);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setEnabled(false);
        btn_save->setAutoDefault(true);

        hbl_selectTable->addWidget(btn_save);


        verticalLayout_4->addLayout(hbl_selectTable);


        verticalLayout->addWidget(gb_selectTable);

        gb_editTable = new QGroupBox(tab2);
        gb_editTable->setObjectName(QString::fromUtf8("gb_editTable"));
        gb_editTable->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     border: 2px solid darkblue;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	color: darkblue;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" }"));
        verticalLayout_3 = new QVBoxLayout(gb_editTable);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gl_editTable = new QGridLayout();
        gl_editTable->setSpacing(6);
        gl_editTable->setObjectName(QString::fromUtf8("gl_editTable"));
        tblView_tabellen = new QTableView(gb_editTable);
        tblView_tabellen->setObjectName(QString::fromUtf8("tblView_tabellen"));
        tblView_tabellen->setEditTriggers(QAbstractItemView::EditKeyPressed);
        tblView_tabellen->setSelectionMode(QAbstractItemView::SingleSelection);
        tblView_tabellen->setSelectionBehavior(QAbstractItemView::SelectRows);

        gl_editTable->addWidget(tblView_tabellen, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gl_editTable);

        hbl_editTable = new QHBoxLayout();
        hbl_editTable->setSpacing(6);
        hbl_editTable->setObjectName(QString::fromUtf8("hbl_editTable"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hbl_editTable->addItem(horizontalSpacer_3);

        btn_add = new QPushButton(gb_editTable);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setEnabled(false);
        btn_add->setAutoDefault(true);

        hbl_editTable->addWidget(btn_add);

        btn_delete = new QPushButton(gb_editTable);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setEnabled(false);
        btn_delete->setAutoDefault(true);

        hbl_editTable->addWidget(btn_delete);


        verticalLayout_3->addLayout(hbl_editTable);


        verticalLayout->addWidget(gb_editTable);

        tabWidget->addTab(tab2, QString());
        tab3 = new QWidget();
        tab3->setObjectName(QString::fromUtf8("tab3"));
        verticalLayout_8 = new QVBoxLayout(tab3);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gb_ftpConnection = new QGroupBox(tab3);
        gb_ftpConnection->setObjectName(QString::fromUtf8("gb_ftpConnection"));
        gb_ftpConnection->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     border: 2px solid darkblue;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	color: darkblue;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" }"));
        verticalLayout_9 = new QVBoxLayout(gb_ftpConnection);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        fl_ftpConnection = new QFormLayout();
        fl_ftpConnection->setSpacing(6);
        fl_ftpConnection->setObjectName(QString::fromUtf8("fl_ftpConnection"));
        fl_ftpConnection->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lbl_ftpUrl = new QLabel(gb_ftpConnection);
        lbl_ftpUrl->setObjectName(QString::fromUtf8("lbl_ftpUrl"));

        fl_ftpConnection->setWidget(0, QFormLayout::LabelRole, lbl_ftpUrl);

        hbl_ftpConnection1 = new QHBoxLayout();
        hbl_ftpConnection1->setSpacing(6);
        hbl_ftpConnection1->setObjectName(QString::fromUtf8("hbl_ftpConnection1"));
        txt_ftpUrl = new QLineEdit(gb_ftpConnection);
        txt_ftpUrl->setObjectName(QString::fromUtf8("txt_ftpUrl"));

        hbl_ftpConnection1->addWidget(txt_ftpUrl);

        lbl_ftpPort = new QLabel(gb_ftpConnection);
        lbl_ftpPort->setObjectName(QString::fromUtf8("lbl_ftpPort"));

        hbl_ftpConnection1->addWidget(lbl_ftpPort);

        spinBox_ftpPort = new QSpinBox(gb_ftpConnection);
        spinBox_ftpPort->setObjectName(QString::fromUtf8("spinBox_ftpPort"));
        spinBox_ftpPort->setMaximum(65535);
        spinBox_ftpPort->setValue(21);

        hbl_ftpConnection1->addWidget(spinBox_ftpPort);


        fl_ftpConnection->setLayout(0, QFormLayout::FieldRole, hbl_ftpConnection1);

        lbl_ftpUser = new QLabel(gb_ftpConnection);
        lbl_ftpUser->setObjectName(QString::fromUtf8("lbl_ftpUser"));

        fl_ftpConnection->setWidget(2, QFormLayout::LabelRole, lbl_ftpUser);

        hbl_ftpConnection2 = new QHBoxLayout();
        hbl_ftpConnection2->setSpacing(6);
        hbl_ftpConnection2->setObjectName(QString::fromUtf8("hbl_ftpConnection2"));
        txt_ftpUser = new QLineEdit(gb_ftpConnection);
        txt_ftpUser->setObjectName(QString::fromUtf8("txt_ftpUser"));

        hbl_ftpConnection2->addWidget(txt_ftpUser);

        lbl_ftpPasswd = new QLabel(gb_ftpConnection);
        lbl_ftpPasswd->setObjectName(QString::fromUtf8("lbl_ftpPasswd"));

        hbl_ftpConnection2->addWidget(lbl_ftpPasswd);

        txt_ftpPasswd = new QLineEdit(gb_ftpConnection);
        txt_ftpPasswd->setObjectName(QString::fromUtf8("txt_ftpPasswd"));
        txt_ftpPasswd->setEchoMode(QLineEdit::Password);

        hbl_ftpConnection2->addWidget(txt_ftpPasswd);


        fl_ftpConnection->setLayout(2, QFormLayout::FieldRole, hbl_ftpConnection2);


        verticalLayout_9->addLayout(fl_ftpConnection);

        hbl_ftpButtons = new QHBoxLayout();
        hbl_ftpButtons->setSpacing(6);
        hbl_ftpButtons->setObjectName(QString::fromUtf8("hbl_ftpButtons"));
        hSpacer_ftpButtons = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hbl_ftpButtons->addItem(hSpacer_ftpButtons);

        btn_loadSettings = new QPushButton(gb_ftpConnection);
        btn_loadSettings->setObjectName(QString::fromUtf8("btn_loadSettings"));
        btn_loadSettings->setAutoDefault(true);

        hbl_ftpButtons->addWidget(btn_loadSettings);

        btn_ftpDisconnect = new QPushButton(gb_ftpConnection);
        btn_ftpDisconnect->setObjectName(QString::fromUtf8("btn_ftpDisconnect"));
        btn_ftpDisconnect->setEnabled(false);

        hbl_ftpButtons->addWidget(btn_ftpDisconnect);


        verticalLayout_9->addLayout(hbl_ftpButtons);


        verticalLayout_8->addWidget(gb_ftpConnection);

        gb_settings = new QGroupBox(tab3);
        gb_settings->setObjectName(QString::fromUtf8("gb_settings"));
        gb_settings->setStyleSheet(QString::fromUtf8(" QGroupBox {\n"
"     border: 2px solid darkblue;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
"\n"
" QGroupBox::title {\n"
"	color: darkblue;\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top left; /* position at the top center */\n"
"     padding: 0 3px;\n"
" }"));
        gb_settings->setFlat(false);
        gb_settings->setCheckable(false);
        gb_settings->setChecked(false);
        verticalLayout_11 = new QVBoxLayout(gb_settings);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        scrollArea = new QScrollArea(gb_settings);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setEnabled(false);
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 700, 409));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        vbl_settingsForm = new QVBoxLayout();
        vbl_settingsForm->setSpacing(6);
        vbl_settingsForm->setObjectName(QString::fromUtf8("vbl_settingsForm"));
        fl_databaseSettings = new QFormLayout();
        fl_databaseSettings->setSpacing(6);
        fl_databaseSettings->setObjectName(QString::fromUtf8("fl_databaseSettings"));
        fl_databaseSettings->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lbl_databaseSettings = new QLabel(scrollAreaWidgetContents);
        lbl_databaseSettings->setObjectName(QString::fromUtf8("lbl_databaseSettings"));

        fl_databaseSettings->setWidget(0, QFormLayout::LabelRole, lbl_databaseSettings);

        lbl_databaseSettings_dbHost = new QLabel(scrollAreaWidgetContents);
        lbl_databaseSettings_dbHost->setObjectName(QString::fromUtf8("lbl_databaseSettings_dbHost"));

        fl_databaseSettings->setWidget(1, QFormLayout::LabelRole, lbl_databaseSettings_dbHost);

        txt_databaseSettings_dbHost = new QLineEdit(scrollAreaWidgetContents);
        txt_databaseSettings_dbHost->setObjectName(QString::fromUtf8("txt_databaseSettings_dbHost"));

        fl_databaseSettings->setWidget(1, QFormLayout::FieldRole, txt_databaseSettings_dbHost);

        lbl_databaseSettings_dbName = new QLabel(scrollAreaWidgetContents);
        lbl_databaseSettings_dbName->setObjectName(QString::fromUtf8("lbl_databaseSettings_dbName"));

        fl_databaseSettings->setWidget(2, QFormLayout::LabelRole, lbl_databaseSettings_dbName);

        txt_databaseSettings_dbName = new QLineEdit(scrollAreaWidgetContents);
        txt_databaseSettings_dbName->setObjectName(QString::fromUtf8("txt_databaseSettings_dbName"));

        fl_databaseSettings->setWidget(2, QFormLayout::FieldRole, txt_databaseSettings_dbName);

        lbl_databaseSettings_dbUser = new QLabel(scrollAreaWidgetContents);
        lbl_databaseSettings_dbUser->setObjectName(QString::fromUtf8("lbl_databaseSettings_dbUser"));

        fl_databaseSettings->setWidget(3, QFormLayout::LabelRole, lbl_databaseSettings_dbUser);

        hbl_databaseSettings = new QHBoxLayout();
        hbl_databaseSettings->setSpacing(6);
        hbl_databaseSettings->setObjectName(QString::fromUtf8("hbl_databaseSettings"));
        txt_databaseSettings_dbUser = new QLineEdit(scrollAreaWidgetContents);
        txt_databaseSettings_dbUser->setObjectName(QString::fromUtf8("txt_databaseSettings_dbUser"));

        hbl_databaseSettings->addWidget(txt_databaseSettings_dbUser);

        lbl_databaseSettings_dbPasswd = new QLabel(scrollAreaWidgetContents);
        lbl_databaseSettings_dbPasswd->setObjectName(QString::fromUtf8("lbl_databaseSettings_dbPasswd"));

        hbl_databaseSettings->addWidget(lbl_databaseSettings_dbPasswd);

        txt_databaseSettings_dbPasswd = new QLineEdit(scrollAreaWidgetContents);
        txt_databaseSettings_dbPasswd->setObjectName(QString::fromUtf8("txt_databaseSettings_dbPasswd"));

        hbl_databaseSettings->addWidget(txt_databaseSettings_dbPasswd);


        fl_databaseSettings->setLayout(3, QFormLayout::FieldRole, hbl_databaseSettings);


        vbl_settingsForm->addLayout(fl_databaseSettings);

        hline_settingsForm_1 = new QFrame(scrollAreaWidgetContents);
        hline_settingsForm_1->setObjectName(QString::fromUtf8("hline_settingsForm_1"));
        hline_settingsForm_1->setLineWidth(1);
        hline_settingsForm_1->setFrameShape(QFrame::HLine);
        hline_settingsForm_1->setFrameShadow(QFrame::Sunken);

        vbl_settingsForm->addWidget(hline_settingsForm_1);

        gl_gameSettings1 = new QGridLayout();
        gl_gameSettings1->setSpacing(6);
        gl_gameSettings1->setObjectName(QString::fromUtf8("gl_gameSettings1"));
        lbl_gameSettings_GetNextAfterAnswer = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_GetNextAfterAnswer->setObjectName(QString::fromUtf8("lbl_gameSettings_GetNextAfterAnswer"));

        gl_gameSettings1->addWidget(lbl_gameSettings_GetNextAfterAnswer, 3, 3, 1, 1);

        chk_gameSettings_GetNextAfterAnswer = new QCheckBox(scrollAreaWidgetContents);
        chk_gameSettings_GetNextAfterAnswer->setObjectName(QString::fromUtf8("chk_gameSettings_GetNextAfterAnswer"));
        chk_gameSettings_GetNextAfterAnswer->setTristate(false);

        gl_gameSettings1->addWidget(chk_gameSettings_GetNextAfterAnswer, 3, 4, 1, 1);

        lbl_gameSettings_TimePerQ = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_TimePerQ->setObjectName(QString::fromUtf8("lbl_gameSettings_TimePerQ"));

        gl_gameSettings1->addWidget(lbl_gameSettings_TimePerQ, 1, 3, 1, 1);

        lbl_gameSettings_TimeWhenNailed = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_TimeWhenNailed->setObjectName(QString::fromUtf8("lbl_gameSettings_TimeWhenNailed"));

        gl_gameSettings1->addWidget(lbl_gameSettings_TimeWhenNailed, 2, 0, 1, 1);

        lbl_gameSettings_DelayQ_A = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_DelayQ_A->setObjectName(QString::fromUtf8("lbl_gameSettings_DelayQ_A"));

        gl_gameSettings1->addWidget(lbl_gameSettings_DelayQ_A, 3, 0, 1, 1);

        spinBox_gameSettings_TimesPerC = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_TimesPerC->setObjectName(QString::fromUtf8("spinBox_gameSettings_TimesPerC"));

        gl_gameSettings1->addWidget(spinBox_gameSettings_TimesPerC, 2, 4, 1, 1);

        lbl_gameSettings_Rounds = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_Rounds->setObjectName(QString::fromUtf8("lbl_gameSettings_Rounds"));

        gl_gameSettings1->addWidget(lbl_gameSettings_Rounds, 1, 0, 1, 1);

        spinBox_gameSettings_Rounds = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_Rounds->setObjectName(QString::fromUtf8("spinBox_gameSettings_Rounds"));

        gl_gameSettings1->addWidget(spinBox_gameSettings_Rounds, 1, 1, 1, 1);

        lbl_gameSettings_TimesPerC = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_TimesPerC->setObjectName(QString::fromUtf8("lbl_gameSettings_TimesPerC"));

        gl_gameSettings1->addWidget(lbl_gameSettings_TimesPerC, 2, 3, 1, 1);

        spinBox_gameSettings_TimeWhenNailed = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_TimeWhenNailed->setObjectName(QString::fromUtf8("spinBox_gameSettings_TimeWhenNailed"));

        gl_gameSettings1->addWidget(spinBox_gameSettings_TimeWhenNailed, 2, 1, 1, 1);

        hSpacer_gameSettings2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_gameSettings1->addItem(hSpacer_gameSettings2, 1, 7, 1, 1);

        spinBox_gameSettings_TimePerQ = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_TimePerQ->setObjectName(QString::fromUtf8("spinBox_gameSettings_TimePerQ"));

        gl_gameSettings1->addWidget(spinBox_gameSettings_TimePerQ, 1, 4, 1, 1);

        lbl_gameSettings = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings->setObjectName(QString::fromUtf8("lbl_gameSettings"));

        gl_gameSettings1->addWidget(lbl_gameSettings, 0, 0, 1, 1);

        spinBox_gameSettings_DelayQ_A = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_DelayQ_A->setObjectName(QString::fromUtf8("spinBox_gameSettings_DelayQ_A"));

        gl_gameSettings1->addWidget(spinBox_gameSettings_DelayQ_A, 3, 1, 1, 1);

        lbl_gameSettings_HSCount = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_HSCount->setObjectName(QString::fromUtf8("lbl_gameSettings_HSCount"));

        gl_gameSettings1->addWidget(lbl_gameSettings_HSCount, 4, 0, 1, 1);

        spinBox_gameSettings_HSCount = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_HSCount->setObjectName(QString::fromUtf8("spinBox_gameSettings_HSCount"));

        gl_gameSettings1->addWidget(spinBox_gameSettings_HSCount, 4, 1, 1, 1);

        hSpacer_gameSettings1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_gameSettings1->addItem(hSpacer_gameSettings1, 1, 2, 1, 1);


        vbl_settingsForm->addLayout(gl_gameSettings1);

        hline_settingsForm_2 = new QFrame(scrollAreaWidgetContents);
        hline_settingsForm_2->setObjectName(QString::fromUtf8("hline_settingsForm_2"));
        hline_settingsForm_2->setFrameShape(QFrame::HLine);
        hline_settingsForm_2->setFrameShadow(QFrame::Sunken);

        vbl_settingsForm->addWidget(hline_settingsForm_2);

        gl_gameSettings2 = new QGridLayout();
        gl_gameSettings2->setSpacing(6);
        gl_gameSettings2->setObjectName(QString::fromUtf8("gl_gameSettings2"));
        lbl_gameSettings_NailCount = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_NailCount->setObjectName(QString::fromUtf8("lbl_gameSettings_NailCount"));

        gl_gameSettings2->addWidget(lbl_gameSettings_NailCount, 2, 0, 1, 1);

        lbl_gameSettings_ignored = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_ignored->setObjectName(QString::fromUtf8("lbl_gameSettings_ignored"));

        gl_gameSettings2->addWidget(lbl_gameSettings_ignored, 0, 0, 1, 1);

        lbl_gameSettings_ReNail = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_ReNail->setObjectName(QString::fromUtf8("lbl_gameSettings_ReNail"));

        gl_gameSettings2->addWidget(lbl_gameSettings_ReNail, 1, 0, 1, 1);

        lbl_gameSettings_Points = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_Points->setObjectName(QString::fromUtf8("lbl_gameSettings_Points"));

        gl_gameSettings2->addWidget(lbl_gameSettings_Points, 1, 3, 1, 1);

        spinBox_gameSettings_NailCount = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_NailCount->setObjectName(QString::fromUtf8("spinBox_gameSettings_NailCount"));
        spinBox_gameSettings_NailCount->setEnabled(false);

        gl_gameSettings2->addWidget(spinBox_gameSettings_NailCount, 2, 1, 1, 1);

        cmb_gameSettings_Points = new QComboBox(scrollAreaWidgetContents);
        cmb_gameSettings_Points->setObjectName(QString::fromUtf8("cmb_gameSettings_Points"));
        cmb_gameSettings_Points->setEnabled(false);

        gl_gameSettings2->addWidget(cmb_gameSettings_Points, 1, 4, 1, 1);

        spinBox_gameSettings_MinUserCount = new QSpinBox(scrollAreaWidgetContents);
        spinBox_gameSettings_MinUserCount->setObjectName(QString::fromUtf8("spinBox_gameSettings_MinUserCount"));
        spinBox_gameSettings_MinUserCount->setEnabled(false);

        gl_gameSettings2->addWidget(spinBox_gameSettings_MinUserCount, 2, 4, 1, 1);

        lbl_gameSettings_MinUserCount = new QLabel(scrollAreaWidgetContents);
        lbl_gameSettings_MinUserCount->setObjectName(QString::fromUtf8("lbl_gameSettings_MinUserCount"));

        gl_gameSettings2->addWidget(lbl_gameSettings_MinUserCount, 2, 3, 1, 1);

        hSpacer_gameSettings3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_gameSettings2->addItem(hSpacer_gameSettings3, 0, 2, 1, 1);

        hSpacer_gameSettings4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gl_gameSettings2->addItem(hSpacer_gameSettings4, 0, 5, 1, 1);

        chk_gameSettings_ReNail = new QCheckBox(scrollAreaWidgetContents);
        chk_gameSettings_ReNail->setObjectName(QString::fromUtf8("chk_gameSettings_ReNail"));
        chk_gameSettings_ReNail->setEnabled(false);

        gl_gameSettings2->addWidget(chk_gameSettings_ReNail, 1, 1, 1, 1);


        vbl_settingsForm->addLayout(gl_gameSettings2);


        gridLayout_3->addLayout(vbl_settingsForm, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_11->addWidget(scrollArea);

        hbl_settingButtons = new QHBoxLayout();
        hbl_settingButtons->setSpacing(6);
        hbl_settingButtons->setObjectName(QString::fromUtf8("hbl_settingButtons"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hbl_settingButtons->addItem(horizontalSpacer);

        btn_sendSettings = new QPushButton(gb_settings);
        btn_sendSettings->setObjectName(QString::fromUtf8("btn_sendSettings"));
        btn_sendSettings->setEnabled(false);
        btn_sendSettings->setAutoDefault(true);

        hbl_settingButtons->addWidget(btn_sendSettings);

        btn_discardChanges = new QPushButton(gb_settings);
        btn_discardChanges->setObjectName(QString::fromUtf8("btn_discardChanges"));
        btn_discardChanges->setEnabled(false);
        btn_discardChanges->setAutoDefault(true);

        hbl_settingButtons->addWidget(btn_discardChanges);


        verticalLayout_11->addLayout(hbl_settingButtons);


        verticalLayout_8->addWidget(gb_settings);

        tabWidget->addTab(tab3, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 780, 25));
        menuDatei = new QMenu(menuBar);
        menuDatei->setObjectName(QString::fromUtf8("menuDatei"));
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        menuEinstellungen = new QMenu(menuBar);
        menuEinstellungen->setObjectName(QString::fromUtf8("menuEinstellungen"));
        menuSprache = new QMenu(menuEinstellungen);
        menuSprache->setObjectName(QString::fromUtf8("menuSprache"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, txt_dbHost);
        QWidget::setTabOrder(txt_dbHost, txt_dbName);
        QWidget::setTabOrder(txt_dbName, txt_dbUser);
        QWidget::setTabOrder(txt_dbUser, txt_dbPasswd);
        QWidget::setTabOrder(txt_dbPasswd, btn_dbConnect);
        QWidget::setTabOrder(btn_dbConnect, btn_dbDisconnect);
        QWidget::setTabOrder(btn_dbDisconnect, txt_debug);
        QWidget::setTabOrder(txt_debug, cmb_tabellen);
        QWidget::setTabOrder(cmb_tabellen, btn_edit);
        QWidget::setTabOrder(btn_edit, btn_save);
        QWidget::setTabOrder(btn_save, tblView_tabellen);
        QWidget::setTabOrder(tblView_tabellen, btn_add);
        QWidget::setTabOrder(btn_add, btn_delete);
        QWidget::setTabOrder(btn_delete, txt_ftpUrl);
        QWidget::setTabOrder(txt_ftpUrl, spinBox_ftpPort);
        QWidget::setTabOrder(spinBox_ftpPort, txt_ftpUser);
        QWidget::setTabOrder(txt_ftpUser, txt_ftpPasswd);
        QWidget::setTabOrder(txt_ftpPasswd, btn_loadSettings);
        QWidget::setTabOrder(btn_loadSettings, scrollArea);
        QWidget::setTabOrder(scrollArea, txt_databaseSettings_dbHost);
        QWidget::setTabOrder(txt_databaseSettings_dbHost, txt_databaseSettings_dbName);
        QWidget::setTabOrder(txt_databaseSettings_dbName, txt_databaseSettings_dbUser);
        QWidget::setTabOrder(txt_databaseSettings_dbUser, txt_databaseSettings_dbPasswd);
        QWidget::setTabOrder(txt_databaseSettings_dbPasswd, spinBox_gameSettings_Rounds);
        QWidget::setTabOrder(spinBox_gameSettings_Rounds, spinBox_gameSettings_TimePerQ);
        QWidget::setTabOrder(spinBox_gameSettings_TimePerQ, spinBox_gameSettings_TimeWhenNailed);
        QWidget::setTabOrder(spinBox_gameSettings_TimeWhenNailed, spinBox_gameSettings_TimesPerC);
        QWidget::setTabOrder(spinBox_gameSettings_TimesPerC, spinBox_gameSettings_DelayQ_A);
        QWidget::setTabOrder(spinBox_gameSettings_DelayQ_A, chk_gameSettings_GetNextAfterAnswer);
        QWidget::setTabOrder(chk_gameSettings_GetNextAfterAnswer, spinBox_gameSettings_HSCount);
        QWidget::setTabOrder(spinBox_gameSettings_HSCount, chk_gameSettings_ReNail);
        QWidget::setTabOrder(chk_gameSettings_ReNail, cmb_gameSettings_Points);
        QWidget::setTabOrder(cmb_gameSettings_Points, spinBox_gameSettings_NailCount);
        QWidget::setTabOrder(spinBox_gameSettings_NailCount, spinBox_gameSettings_MinUserCount);
        QWidget::setTabOrder(spinBox_gameSettings_MinUserCount, btn_sendSettings);
        QWidget::setTabOrder(btn_sendSettings, btn_discardChanges);

        menuBar->addAction(menuDatei->menuAction());
        menuBar->addAction(menuEinstellungen->menuAction());
        menuBar->addAction(menuInfo->menuAction());
        menuDatei->addAction(actionExit);
        menuInfo->addAction(actionInfo);
        menuEinstellungen->addAction(menuSprache->menuAction());
        menuSprache->addAction(actionDeutsch);
        menuSprache->addAction(actionEnglisch);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Beenden", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionDeutsch->setText(QApplication::translate("MainWindow", "Deutsch", 0, QApplication::UnicodeUTF8));
        actionDeutsch->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionEnglisch->setText(QApplication::translate("MainWindow", "Englisch", 0, QApplication::UnicodeUTF8));
        actionEnglisch->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", 0, QApplication::UnicodeUTF8));
        actionInfo->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        gb_dbConnect->setTitle(QApplication::translate("MainWindow", "Datenbank", 0, QApplication::UnicodeUTF8));
        lbl_dbHost->setText(QApplication::translate("MainWindow", "DB-Host:", 0, QApplication::UnicodeUTF8));
        txt_dbHost->setText(QString());
        lbl_dbName->setText(QApplication::translate("MainWindow", "Datenbank:", 0, QApplication::UnicodeUTF8));
        txt_dbName->setText(QString());
        lbl_dbUser->setText(QApplication::translate("MainWindow", "Benutzer:", 0, QApplication::UnicodeUTF8));
        txt_dbUser->setText(QString());
        lbl_dbUserPasswd->setText(QApplication::translate("MainWindow", "Passwort:", 0, QApplication::UnicodeUTF8));
        txt_dbPasswd->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_dbConnect->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btn_dbConnect->setText(QApplication::translate("MainWindow", "Verbinden", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_dbDisconnect->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btn_dbDisconnect->setText(QApplication::translate("MainWindow", "Trennen", 0, QApplication::UnicodeUTF8));
        gb_dbConnectionInfo->setTitle(QApplication::translate("MainWindow", "Verbindungsinformationen", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("MainWindow", "Datenbankverbindung", 0, QApplication::UnicodeUTF8));
        gb_selectTable->setTitle(QApplication::translate("MainWindow", "Tabelle ausw\303\244hlen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmb_tabellen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Tabelle aus Datenbank zur Bearbeitung auswaehlen.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btn_edit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Tabelle zur Bearbeitung freischalten.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_edit->setText(QApplication::translate("MainWindow", "Bearbeiten", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_save->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btn_save->setText(QApplication::translate("MainWindow", "Speichern", 0, QApplication::UnicodeUTF8));
        gb_editTable->setTitle(QApplication::translate("MainWindow", "Tabelle bearbeiten", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_add->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btn_add->setText(QApplication::translate("MainWindow", "Datensatz hinzufuegen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_delete->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btn_delete->setText(QApplication::translate("MainWindow", "Datensatz loeschen", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("MainWindow", "Datenbank", 0, QApplication::UnicodeUTF8));
        gb_ftpConnection->setTitle(QApplication::translate("MainWindow", "FTP-Zugang", 0, QApplication::UnicodeUTF8));
        lbl_ftpUrl->setText(QApplication::translate("MainWindow", "FTP-Adresse:", 0, QApplication::UnicodeUTF8));
        txt_ftpUrl->setText(QApplication::translate("MainWindow", "ftp://178.25.75.91/config.ini", 0, QApplication::UnicodeUTF8));
        lbl_ftpPort->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        lbl_ftpUser->setText(QApplication::translate("MainWindow", "Benutzername:", 0, QApplication::UnicodeUTF8));
        txt_ftpUser->setText(QApplication::translate("MainWindow", "ftpuser", 0, QApplication::UnicodeUTF8));
        lbl_ftpPasswd->setText(QApplication::translate("MainWindow", "Passwort:", 0, QApplication::UnicodeUTF8));
        txt_ftpPasswd->setText(QApplication::translate("MainWindow", "login", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_loadSettings->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Einstellungsdatei per FTP herunterladen.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_loadSettings->setText(QApplication::translate("MainWindow", "Verbinden", 0, QApplication::UnicodeUTF8));
        btn_ftpDisconnect->setText(QApplication::translate("MainWindow", "Trennen", 0, QApplication::UnicodeUTF8));
        gb_settings->setTitle(QApplication::translate("MainWindow", "Einstellungen bearbeiten", 0, QApplication::UnicodeUTF8));
        lbl_databaseSettings->setText(QApplication::translate("MainWindow", "[DataBase]- Settings", 0, QApplication::UnicodeUTF8));
        lbl_databaseSettings_dbHost->setText(QApplication::translate("MainWindow", "DBHost:", 0, QApplication::UnicodeUTF8));
        lbl_databaseSettings_dbName->setText(QApplication::translate("MainWindow", "DBName:", 0, QApplication::UnicodeUTF8));
        lbl_databaseSettings_dbUser->setText(QApplication::translate("MainWindow", "DBUser:", 0, QApplication::UnicodeUTF8));
        lbl_databaseSettings_dbPasswd->setText(QApplication::translate("MainWindow", "DBPassword", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_GetNextAfterAnswer->setText(QApplication::translate("MainWindow", "GetNextAfterAnswer:", 0, QApplication::UnicodeUTF8));
        chk_gameSettings_GetNextAfterAnswer->setText(QString());
        lbl_gameSettings_TimePerQ->setText(QApplication::translate("MainWindow", "TimePerQ:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_TimeWhenNailed->setText(QApplication::translate("MainWindow", "TimeWhenNailed:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_DelayQ_A->setText(QApplication::translate("MainWindow", "DelayQ_A:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_Rounds->setText(QApplication::translate("MainWindow", "Rounds:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_TimesPerC->setText(QApplication::translate("MainWindow", "TimesPerC:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings->setText(QApplication::translate("MainWindow", "[Game]-Settings", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_HSCount->setText(QApplication::translate("MainWindow", "HSCount:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_NailCount->setText(QApplication::translate("MainWindow", "NailCount:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_ignored->setText(QApplication::translate("MainWindow", "In der Demo nicht verf\303\274gbar:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_ReNail->setText(QApplication::translate("MainWindow", "ReNail:", 0, QApplication::UnicodeUTF8));
        lbl_gameSettings_Points->setText(QApplication::translate("MainWindow", "Points:", 0, QApplication::UnicodeUTF8));
        cmb_gameSettings_Points->clear();
        cmb_gameSettings_Points->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "default", 0, QApplication::UnicodeUTF8)
        );
        lbl_gameSettings_MinUserCount->setText(QApplication::translate("MainWindow", "MinUserCount:", 0, QApplication::UnicodeUTF8));
        chk_gameSettings_ReNail->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_sendSettings->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Aenderungen per FTP zum Server senden.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_sendSettings->setText(QApplication::translate("MainWindow", "Senden", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_discardChanges->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Einstellungen erneut laden.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_discardChanges->setText(QApplication::translate("MainWindow", "Neu laden", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab3), QApplication::translate("MainWindow", "Einstellungen", 0, QApplication::UnicodeUTF8));
        menuDatei->setTitle(QApplication::translate("MainWindow", "Datei", 0, QApplication::UnicodeUTF8));
        menuInfo->setTitle(QApplication::translate("MainWindow", "Hilfe", 0, QApplication::UnicodeUTF8));
        menuEinstellungen->setTitle(QApplication::translate("MainWindow", "Einstellungen", 0, QApplication::UnicodeUTF8));
        menuSprache->setTitle(QApplication::translate("MainWindow", "Sprache", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
