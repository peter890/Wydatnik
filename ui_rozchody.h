/********************************************************************************
** Form generated from reading UI file 'rozchody.ui'
**
** Created: Mon Sep 19 11:08:19 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROZCHODY_H
#define UI_ROZCHODY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rozchody
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *edit_nazwa;
    QLabel *label_2;
    QLineEdit *edit_kwota;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *edit_opis;
    QComboBox *comboBox;
    QPushButton *button_dodaj;
    QPushButton *button_anuluj;
    QDateEdit *dateEdit;
    QPushButton *buttonCalendar;
    QLabel *label_5;

    void setupUi(QMainWindow *Rozchody)
    {
        if (Rozchody->objectName().isEmpty())
            Rozchody->setObjectName(QString::fromUtf8("Rozchody"));
        Rozchody->resize(292, 211);
        Rozchody->setStyleSheet(QString::fromUtf8("/*QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"font-size: 10px;\n"
"max-width: 115px;\n"
"max-height: 27px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"   \n"
"    background-color: rgb(255, 255, 241);\n"
"    selection-color: white;                        \n"
"    selection-background-color: rgb(191, 31, 127);\n"
"    border: 2px groove gray;\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"}*/\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
""
                        "padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"\n"
"max-width: 110px;\n"
"\n"
"max-height: 15px;\n"
"}\n"
"\n"
"#Rozchody{\n"
"	background: gray;\n"
"}\n"
"#centralwidget{\n"
"	background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(Rozchody);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        edit_nazwa = new QLineEdit(centralwidget);
        edit_nazwa->setObjectName(QString::fromUtf8("edit_nazwa"));

        gridLayout->addWidget(edit_nazwa, 0, 1, 1, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        edit_kwota = new QLineEdit(centralwidget);
        edit_kwota->setObjectName(QString::fromUtf8("edit_kwota"));

        gridLayout->addWidget(edit_kwota, 1, 1, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        edit_opis = new QLineEdit(centralwidget);
        edit_opis->setObjectName(QString::fromUtf8("edit_opis"));

        gridLayout->addWidget(edit_opis, 4, 1, 1, 2);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFocusPolicy(Qt::WheelFocus);
        comboBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(comboBox, 5, 1, 1, 2);

        button_dodaj = new QPushButton(centralwidget);
        button_dodaj->setObjectName(QString::fromUtf8("button_dodaj"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_dodaj->setIcon(icon);

        gridLayout->addWidget(button_dodaj, 6, 1, 1, 1);

        button_anuluj = new QPushButton(centralwidget);
        button_anuluj->setObjectName(QString::fromUtf8("button_anuluj"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/Cancel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_anuluj->setIcon(icon1);

        gridLayout->addWidget(button_anuluj, 6, 2, 1, 1);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 3, 1, 1, 1);

        buttonCalendar = new QPushButton(centralwidget);
        buttonCalendar->setObjectName(QString::fromUtf8("buttonCalendar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/calendar_icon_mini.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonCalendar->setIcon(icon2);
        buttonCalendar->setDefault(false);
        buttonCalendar->setFlat(false);

        gridLayout->addWidget(buttonCalendar, 3, 2, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(false);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Rozchody->setCentralWidget(centralwidget);

        retranslateUi(Rozchody);

        QMetaObject::connectSlotsByName(Rozchody);
    } // setupUi

    void retranslateUi(QMainWindow *Rozchody)
    {
        Rozchody->setWindowTitle(QApplication::translate("Rozchody", "Wydatnik - rozchody", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Rozchody", "Nazwa:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Rozchody", "Kwota:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Rozchody", "Data:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Rozchody", "Opis:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Rozchody", "Wydatek", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Rozchody", "Doch\303\263d", 0, QApplication::UnicodeUTF8)
        );
        button_dodaj->setText(QApplication::translate("Rozchody", "Dodaj", 0, QApplication::UnicodeUTF8));
        button_anuluj->setText(QApplication::translate("Rozchody", "Anuluj", 0, QApplication::UnicodeUTF8));
        buttonCalendar->setText(QApplication::translate("Rozchody", "Kalendarz", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Rozchody", "kwota", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Rozchody: public Ui_Rozchody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROZCHODY_H
