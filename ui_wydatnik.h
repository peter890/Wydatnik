/********************************************************************************
** Form generated from reading UI file 'wydatnik.ui'
**
** Created: Sun Sep 18 19:10:09 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYDATNIK_H
#define UI_WYDATNIK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_Wydatnik
{
public:
    QAction *actionZaloguj;
    QAction *actionWyloguj;
    QAction *actionZako_cz;
    QAction *actionDodaj_wydatek;
    QAction *actionZarejestruj;
    QAction *actionO_wydatniku;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *sqledit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *rachunekNr;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *BoxTyp;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *BoxKategoria;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    MyLabel *LabelSrodkiDostepne;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDateEdit *dateEditOd;
    QPushButton *ButtonDataOd;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QDateEdit *dateEditDo;
    QPushButton *ButtonDataDo;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *EditMin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *EditMax;
    QPushButton *ButtonWyszukaj;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QMenu *menuEdycja;
    QMenu *menuPomoc;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Wydatnik)
    {
        if (Wydatnik->objectName().isEmpty())
            Wydatnik->setObjectName(QString::fromUtf8("Wydatnik"));
        Wydatnik->setEnabled(true);
        Wydatnik->resize(800, 600);
        actionZaloguj = new QAction(Wydatnik);
        actionZaloguj->setObjectName(QString::fromUtf8("actionZaloguj"));
        actionWyloguj = new QAction(Wydatnik);
        actionWyloguj->setObjectName(QString::fromUtf8("actionWyloguj"));
        actionZako_cz = new QAction(Wydatnik);
        actionZako_cz->setObjectName(QString::fromUtf8("actionZako_cz"));
        actionDodaj_wydatek = new QAction(Wydatnik);
        actionDodaj_wydatek->setObjectName(QString::fromUtf8("actionDodaj_wydatek"));
        actionZarejestruj = new QAction(Wydatnik);
        actionZarejestruj->setObjectName(QString::fromUtf8("actionZarejestruj"));
        actionO_wydatniku = new QAction(Wydatnik);
        actionO_wydatniku->setObjectName(QString::fromUtf8("actionO_wydatniku"));
        centralWidget = new QWidget(Wydatnik);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sqledit = new QLineEdit(centralWidget);
        sqledit->setObjectName(QString::fromUtf8("sqledit"));

        verticalLayout_2->addWidget(sqledit);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_13->setFont(font);

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        rachunekNr = new QLabel(tab);
        rachunekNr->setObjectName(QString::fromUtf8("rachunekNr"));

        horizontalLayout_2->addWidget(rachunekNr);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        BoxTyp = new QComboBox(tab);
        BoxTyp->setObjectName(QString::fromUtf8("BoxTyp"));

        horizontalLayout->addWidget(BoxTyp);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        BoxKategoria = new QComboBox(tab);
        BoxKategoria->setObjectName(QString::fromUtf8("BoxKategoria"));

        horizontalLayout_4->addWidget(BoxKategoria);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        LabelSrodkiDostepne = new MyLabel(tab);
        LabelSrodkiDostepne->setObjectName(QString::fromUtf8("LabelSrodkiDostepne"));

        horizontalLayout_3->addWidget(LabelSrodkiDostepne);


        gridLayout->addLayout(horizontalLayout_3, 1, 2, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        dateEditOd = new QDateEdit(tab);
        dateEditOd->setObjectName(QString::fromUtf8("dateEditOd"));
        dateEditOd->setMinimumSize(QSize(149, 0));

        horizontalLayout_6->addWidget(dateEditOd);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        ButtonDataOd = new QPushButton(tab);
        ButtonDataOd->setObjectName(QString::fromUtf8("ButtonDataOd"));
        ButtonDataOd->setMaximumSize(QSize(20, 16777215));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        ButtonDataOd->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/calendar_icon_mini.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonDataOd->setIcon(icon);
        ButtonDataOd->setCheckable(false);
        ButtonDataOd->setAutoDefault(false);
        ButtonDataOd->setFlat(true);

        horizontalLayout_9->addWidget(ButtonDataOd);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        dateEditDo = new QDateEdit(tab);
        dateEditDo->setObjectName(QString::fromUtf8("dateEditDo"));
        dateEditDo->setMinimumSize(QSize(149, 0));

        horizontalLayout_5->addWidget(dateEditDo);

        ButtonDataDo = new QPushButton(tab);
        ButtonDataDo->setObjectName(QString::fromUtf8("ButtonDataDo"));
        ButtonDataDo->setMaximumSize(QSize(20, 16777215));
        ButtonDataDo->setFont(font1);
        ButtonDataDo->setStyleSheet(QString::fromUtf8(""));
        ButtonDataDo->setIcon(icon);
        ButtonDataDo->setFlat(true);

        horizontalLayout_5->addWidget(ButtonDataDo);


        horizontalLayout_9->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        EditMin = new QLineEdit(tab);
        EditMin->setObjectName(QString::fromUtf8("EditMin"));

        horizontalLayout_8->addWidget(EditMin);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_7->addWidget(label_12);

        EditMax = new QLineEdit(tab);
        EditMax->setObjectName(QString::fromUtf8("EditMax"));

        horizontalLayout_7->addWidget(EditMax);


        horizontalLayout_10->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout);

        ButtonWyszukaj = new QPushButton(tab);
        ButtonWyszukaj->setObjectName(QString::fromUtf8("ButtonWyszukaj"));
        ButtonWyszukaj->setMinimumSize(QSize(0, 75));

        horizontalLayout_11->addWidget(ButtonWyszukaj);


        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 3, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        Wydatnik->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Wydatnik);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuEdycja = new QMenu(menuBar);
        menuEdycja->setObjectName(QString::fromUtf8("menuEdycja"));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QString::fromUtf8("menuPomoc"));
        Wydatnik->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Wydatnik);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Wydatnik->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Wydatnik);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Wydatnik->setStatusBar(statusBar);

        menuBar->addAction(menuPlik->menuAction());
        menuBar->addAction(menuEdycja->menuAction());
        menuBar->addAction(menuPomoc->menuAction());
        menuPlik->addAction(actionZaloguj);
        menuPlik->addAction(actionWyloguj);
        menuPlik->addSeparator();
        menuPlik->addAction(actionZako_cz);
        menuEdycja->addAction(actionDodaj_wydatek);
        menuEdycja->addSeparator();
        menuEdycja->addAction(actionZarejestruj);
        menuPomoc->addAction(actionO_wydatniku);

        retranslateUi(Wydatnik);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Wydatnik);
    } // setupUi

    void retranslateUi(QMainWindow *Wydatnik)
    {
        Wydatnik->setWindowTitle(QApplication::translate("Wydatnik", "Wydatnik", 0, QApplication::UnicodeUTF8));
        actionZaloguj->setText(QApplication::translate("Wydatnik", "Zaloguj", 0, QApplication::UnicodeUTF8));
        actionWyloguj->setText(QApplication::translate("Wydatnik", "Wyloguj", 0, QApplication::UnicodeUTF8));
        actionZako_cz->setText(QApplication::translate("Wydatnik", "Zako\305\204cz", 0, QApplication::UnicodeUTF8));
        actionDodaj_wydatek->setText(QApplication::translate("Wydatnik", "Dodaj wydatek...", 0, QApplication::UnicodeUTF8));
        actionZarejestruj->setText(QApplication::translate("Wydatnik", "Zarejestruj...", 0, QApplication::UnicodeUTF8));
        actionO_wydatniku->setText(QApplication::translate("Wydatnik", "O wydatniku", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Wydatnik", "Wyszukaj transakcje", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Wydatnik", "Rachunek", 0, QApplication::UnicodeUTF8));
        rachunekNr->setText(QApplication::translate("Wydatnik", "numer itd", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Wydatnik", "Typ:", 0, QApplication::UnicodeUTF8));
        BoxTyp->clear();
        BoxTyp->insertItems(0, QStringList()
         << QApplication::translate("Wydatnik", "Wszystkie", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wydatnik", "Wydatek", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Wydatnik", "Wp\305\202ata", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("Wydatnik", "Kategoria:", 0, QApplication::UnicodeUTF8));
        BoxKategoria->clear();
        BoxKategoria->insertItems(0, QStringList()
         << QApplication::translate("Wydatnik", "Wszystkie", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Wydatnik", "\305\232rodki dost\304\231pne:", 0, QApplication::UnicodeUTF8));
        LabelSrodkiDostepne->setText(QApplication::translate("Wydatnik", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Wydatnik", "Termin:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Wydatnik", "Od", 0, QApplication::UnicodeUTF8));
        ButtonDataOd->setText(QString());
        label_9->setText(QApplication::translate("Wydatnik", "Do", 0, QApplication::UnicodeUTF8));
        ButtonDataDo->setText(QString());
        label_10->setText(QApplication::translate("Wydatnik", "Kwota: ", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Wydatnik", "Min.", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Wydatnik", "Max.", 0, QApplication::UnicodeUTF8));
        ButtonWyszukaj->setText(QApplication::translate("Wydatnik", "Wyszukaj", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Wydatnik", "Historia", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Wydatnik", "Tab 2", 0, QApplication::UnicodeUTF8));
        menuPlik->setTitle(QApplication::translate("Wydatnik", "Plik", 0, QApplication::UnicodeUTF8));
        menuEdycja->setTitle(QApplication::translate("Wydatnik", "Edycja", 0, QApplication::UnicodeUTF8));
        menuPomoc->setTitle(QApplication::translate("Wydatnik", "Pomoc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wydatnik: public Ui_Wydatnik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYDATNIK_H