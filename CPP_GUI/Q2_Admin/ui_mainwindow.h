/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 14 15:13:39 2012
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
    QFormLayout *formLayout1;
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
    QLabel *lbl_debug;
    QTextEdit *txt_debug;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout2;
    QLabel *lbl_question;
    QLineEdit *txt_question;
    QLabel *lbl_answer1;
    QLineEdit *txt_answer1;
    QLabel *lbl_answer2;
    QLineEdit *txt_answer2;
    QLabel *lbl_answer3;
    QLineEdit *txt_answer3;
    QLabel *lbl_answer4;
    QLineEdit *txt_answer4;
    QLabel *lbl_category;
    QLabel *lbl_difficulty;
    QComboBox *cmb_difficulty;
    QLabel *lbl_correctAnswerIndex;
    QComboBox *cmb_correctAnswerIndex;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btn_sendQuestion;
    QPushButton *btn_abortQuestion;
    QComboBox *cmb_category;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *lbl_tabelle;
    QComboBox *cmb_tabellen;
    QTableView *tblView_tabellen;
    QPushButton *btn_delete;
    QPushButton *btn_add;
    QPushButton *btn_change;
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
        formLayout1 = new QFormLayout();
        formLayout1->setSpacing(6);
        formLayout1->setObjectName(QString::fromUtf8("formLayout1"));
        formLayout1->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lbl_dbHost = new QLabel(tab);
        lbl_dbHost->setObjectName(QString::fromUtf8("lbl_dbHost"));

        formLayout1->setWidget(0, QFormLayout::LabelRole, lbl_dbHost);

        txt_dbHost = new QLineEdit(tab);
        txt_dbHost->setObjectName(QString::fromUtf8("txt_dbHost"));

        formLayout1->setWidget(0, QFormLayout::FieldRole, txt_dbHost);

        lbl_dbName = new QLabel(tab);
        lbl_dbName->setObjectName(QString::fromUtf8("lbl_dbName"));

        formLayout1->setWidget(1, QFormLayout::LabelRole, lbl_dbName);

        txt_dbName = new QLineEdit(tab);
        txt_dbName->setObjectName(QString::fromUtf8("txt_dbName"));

        formLayout1->setWidget(1, QFormLayout::FieldRole, txt_dbName);

        lbl_dbUser = new QLabel(tab);
        lbl_dbUser->setObjectName(QString::fromUtf8("lbl_dbUser"));

        formLayout1->setWidget(2, QFormLayout::LabelRole, lbl_dbUser);

        txt_dbUser = new QLineEdit(tab);
        txt_dbUser->setObjectName(QString::fromUtf8("txt_dbUser"));

        formLayout1->setWidget(2, QFormLayout::FieldRole, txt_dbUser);

        lbl_dbUserPasswd = new QLabel(tab);
        lbl_dbUserPasswd->setObjectName(QString::fromUtf8("lbl_dbUserPasswd"));

        formLayout1->setWidget(3, QFormLayout::LabelRole, lbl_dbUserPasswd);

        txt_dbPasswd = new QLineEdit(tab);
        txt_dbPasswd->setObjectName(QString::fromUtf8("txt_dbPasswd"));
        txt_dbPasswd->setEchoMode(QLineEdit::Password);

        formLayout1->setWidget(3, QFormLayout::FieldRole, txt_dbPasswd);

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


        formLayout1->setLayout(4, QFormLayout::FieldRole, horizontalLayout1);

        lbl_debug = new QLabel(tab);
        lbl_debug->setObjectName(QString::fromUtf8("lbl_debug"));

        formLayout1->setWidget(5, QFormLayout::LabelRole, lbl_debug);

        txt_debug = new QTextEdit(tab);
        txt_debug->setObjectName(QString::fromUtf8("txt_debug"));

        formLayout1->setWidget(5, QFormLayout::FieldRole, txt_debug);


        horizontalLayout->addLayout(formLayout1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_5 = new QHBoxLayout(tab_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout2 = new QFormLayout();
        formLayout2->setSpacing(6);
        formLayout2->setObjectName(QString::fromUtf8("formLayout2"));
        formLayout2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout2->setVerticalSpacing(6);
        lbl_question = new QLabel(tab_2);
        lbl_question->setObjectName(QString::fromUtf8("lbl_question"));

        formLayout2->setWidget(0, QFormLayout::LabelRole, lbl_question);

        txt_question = new QLineEdit(tab_2);
        txt_question->setObjectName(QString::fromUtf8("txt_question"));

        formLayout2->setWidget(0, QFormLayout::FieldRole, txt_question);

        lbl_answer1 = new QLabel(tab_2);
        lbl_answer1->setObjectName(QString::fromUtf8("lbl_answer1"));

        formLayout2->setWidget(1, QFormLayout::LabelRole, lbl_answer1);

        txt_answer1 = new QLineEdit(tab_2);
        txt_answer1->setObjectName(QString::fromUtf8("txt_answer1"));

        formLayout2->setWidget(1, QFormLayout::FieldRole, txt_answer1);

        lbl_answer2 = new QLabel(tab_2);
        lbl_answer2->setObjectName(QString::fromUtf8("lbl_answer2"));

        formLayout2->setWidget(2, QFormLayout::LabelRole, lbl_answer2);

        txt_answer2 = new QLineEdit(tab_2);
        txt_answer2->setObjectName(QString::fromUtf8("txt_answer2"));

        formLayout2->setWidget(2, QFormLayout::FieldRole, txt_answer2);

        lbl_answer3 = new QLabel(tab_2);
        lbl_answer3->setObjectName(QString::fromUtf8("lbl_answer3"));

        formLayout2->setWidget(3, QFormLayout::LabelRole, lbl_answer3);

        txt_answer3 = new QLineEdit(tab_2);
        txt_answer3->setObjectName(QString::fromUtf8("txt_answer3"));

        formLayout2->setWidget(3, QFormLayout::FieldRole, txt_answer3);

        lbl_answer4 = new QLabel(tab_2);
        lbl_answer4->setObjectName(QString::fromUtf8("lbl_answer4"));

        formLayout2->setWidget(4, QFormLayout::LabelRole, lbl_answer4);

        txt_answer4 = new QLineEdit(tab_2);
        txt_answer4->setObjectName(QString::fromUtf8("txt_answer4"));

        formLayout2->setWidget(4, QFormLayout::FieldRole, txt_answer4);

        lbl_category = new QLabel(tab_2);
        lbl_category->setObjectName(QString::fromUtf8("lbl_category"));

        formLayout2->setWidget(5, QFormLayout::LabelRole, lbl_category);

        lbl_difficulty = new QLabel(tab_2);
        lbl_difficulty->setObjectName(QString::fromUtf8("lbl_difficulty"));

        formLayout2->setWidget(6, QFormLayout::LabelRole, lbl_difficulty);

        cmb_difficulty = new QComboBox(tab_2);
        cmb_difficulty->setObjectName(QString::fromUtf8("cmb_difficulty"));

        formLayout2->setWidget(6, QFormLayout::FieldRole, cmb_difficulty);

        lbl_correctAnswerIndex = new QLabel(tab_2);
        lbl_correctAnswerIndex->setObjectName(QString::fromUtf8("lbl_correctAnswerIndex"));

        formLayout2->setWidget(7, QFormLayout::LabelRole, lbl_correctAnswerIndex);

        cmb_correctAnswerIndex = new QComboBox(tab_2);
        cmb_correctAnswerIndex->setObjectName(QString::fromUtf8("cmb_correctAnswerIndex"));

        formLayout2->setWidget(7, QFormLayout::FieldRole, cmb_correctAnswerIndex);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        btn_sendQuestion = new QPushButton(tab_2);
        btn_sendQuestion->setObjectName(QString::fromUtf8("btn_sendQuestion"));
        btn_sendQuestion->setEnabled(false);

        horizontalLayout_10->addWidget(btn_sendQuestion);

        btn_abortQuestion = new QPushButton(tab_2);
        btn_abortQuestion->setObjectName(QString::fromUtf8("btn_abortQuestion"));

        horizontalLayout_10->addWidget(btn_abortQuestion);


        formLayout2->setLayout(8, QFormLayout::FieldRole, horizontalLayout_10);

        cmb_category = new QComboBox(tab_2);
        cmb_category->setObjectName(QString::fromUtf8("cmb_category"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmb_category->sizePolicy().hasHeightForWidth());
        cmb_category->setSizePolicy(sizePolicy1);
        cmb_category->setInsertPolicy(QComboBox::InsertAlphabetically);

        formLayout2->setWidget(5, QFormLayout::FieldRole, cmb_category);


        horizontalLayout_5->addLayout(formLayout2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_2 = new QHBoxLayout(tab_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        lbl_tabelle = new QLabel(tab_3);
        lbl_tabelle->setObjectName(QString::fromUtf8("lbl_tabelle"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lbl_tabelle);

        cmb_tabellen = new QComboBox(tab_3);
        cmb_tabellen->setObjectName(QString::fromUtf8("cmb_tabellen"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cmb_tabellen);

        tblView_tabellen = new QTableView(tab_3);
        tblView_tabellen->setObjectName(QString::fromUtf8("tblView_tabellen"));
        tblView_tabellen->setSelectionMode(QAbstractItemView::SingleSelection);
        tblView_tabellen->setSelectionBehavior(QAbstractItemView::SelectRows);

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, tblView_tabellen);

        btn_delete = new QPushButton(tab_3);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, btn_delete);

        btn_add = new QPushButton(tab_3);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, btn_add);

        btn_change = new QPushButton(tab_3);
        btn_change->setObjectName(QString::fromUtf8("btn_change"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, btn_change);


        horizontalLayout_2->addLayout(formLayout_2);

        tabWidget->addTab(tab_3, QString());

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

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        lbl_dbHost->setText(QApplication::translate("MainWindow", "DB-Host", 0, QApplication::UnicodeUTF8));
        txt_dbHost->setText(QApplication::translate("MainWindow", "192.168.0.1", 0, QApplication::UnicodeUTF8));
        lbl_dbName->setText(QApplication::translate("MainWindow", "Datenbank", 0, QApplication::UnicodeUTF8));
        txt_dbName->setText(QApplication::translate("MainWindow", "adressbuch", 0, QApplication::UnicodeUTF8));
        lbl_dbUser->setText(QApplication::translate("MainWindow", "Benutzer", 0, QApplication::UnicodeUTF8));
        txt_dbUser->setText(QApplication::translate("MainWindow", "root", 0, QApplication::UnicodeUTF8));
        lbl_dbUserPasswd->setText(QApplication::translate("MainWindow", "Passwort", 0, QApplication::UnicodeUTF8));
        txt_dbPasswd->setText(QApplication::translate("MainWindow", "FGS.209=Wme!", 0, QApplication::UnicodeUTF8));
        btn_dbConnect->setText(QApplication::translate("MainWindow", "Verbinden", 0, QApplication::UnicodeUTF8));
        btn_dbDisconnect->setText(QApplication::translate("MainWindow", "Trennen", 0, QApplication::UnicodeUTF8));
        lbl_debug->setText(QApplication::translate("MainWindow", "Debug-Info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Datenbankverbindung", 0, QApplication::UnicodeUTF8));
        lbl_question->setText(QApplication::translate("MainWindow", "Neue Quizfrage", 0, QApplication::UnicodeUTF8));
        lbl_answer1->setText(QApplication::translate("MainWindow", "Antwort 1", 0, QApplication::UnicodeUTF8));
        lbl_answer2->setText(QApplication::translate("MainWindow", "Antwort 2", 0, QApplication::UnicodeUTF8));
        lbl_answer3->setText(QApplication::translate("MainWindow", "Antwort 3", 0, QApplication::UnicodeUTF8));
        lbl_answer4->setText(QApplication::translate("MainWindow", "Antwort 4", 0, QApplication::UnicodeUTF8));
        lbl_category->setText(QApplication::translate("MainWindow", "Kategorie", 0, QApplication::UnicodeUTF8));
        lbl_difficulty->setText(QApplication::translate("MainWindow", "Schwierigkeitsgrad", 0, QApplication::UnicodeUTF8));
        lbl_correctAnswerIndex->setText(QApplication::translate("MainWindow", "Richtige Antwort", 0, QApplication::UnicodeUTF8));
        btn_sendQuestion->setText(QApplication::translate("MainWindow", "Senden", 0, QApplication::UnicodeUTF8));
        btn_abortQuestion->setText(QApplication::translate("MainWindow", "Abbrechen", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Frage hinzuf\303\274gen", 0, QApplication::UnicodeUTF8));
        lbl_tabelle->setText(QApplication::translate("MainWindow", "Tabelle ausw\303\244hlen", 0, QApplication::UnicodeUTF8));
        btn_delete->setText(QApplication::translate("MainWindow", "Datensatz loeschen", 0, QApplication::UnicodeUTF8));
        btn_add->setText(QApplication::translate("MainWindow", "Datensatz hinzuf\303\274gen", 0, QApplication::UnicodeUTF8));
        btn_change->setText(QApplication::translate("MainWindow", "Speichern", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Datensatz manipulieren", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
