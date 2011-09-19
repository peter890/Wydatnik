/********************************************************************************
** Form generated from reading UI file 'editdata.ui'
**
** Created: Mon Sep 19 11:07:30 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDATA_H
#define UI_EDITDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditData
{
public:
    QLabel *label_nazwa;
    QPushButton *button_kalendarz;
    QLabel *label_data;
    QLabel *label_kwota;
    QLabel *label_opis;
    QLineEdit *edit_data;
    QLineEdit *edit_nazwa;
    QLineEdit *edit_opis;
    QLineEdit *edit_kwota;
    QPushButton *button_anuluj_2;
    QPushButton *button_ok;
    QPushButton *button_anuluj;
    QLabel *label_opis_2;
    QComboBox *comboBox;
    QLabel *id;

    void setupUi(QWidget *EditData)
    {
        if (EditData->objectName().isEmpty())
            EditData->setObjectName(QString::fromUtf8("EditData"));
        EditData->resize(300, 200);
        EditData->setMinimumSize(QSize(300, 200));
        EditData->setMaximumSize(QSize(300, 200));
        EditData->setStyleSheet(QString::fromUtf8("QLineEdit[echoMode=\"2\"] {\n"
"     lineedit-password-character: 9679;\n"
" }\n"
"/*QLineEdit {\n"
"   \n"
"    background-color: rgb(255, 255, 241);\n"
"    selection-color: white;                        \n"
"    selection-background-color: rgb(191, 31, 127);\n"
"    border: 2px groove gray;\n"
"    border-radius: 10px;\n"
"    padding: 2px 4px;\n"
"}\n"
"QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"\n"
"font-size: 10px;\n"
"\n"
"max-width: 115px;\n"
"\n"
"max-height: 27px;\n"
"}*/\n"
"\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c)"
                        ";\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
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
"#Login{\n"
"	background: gray;\n"
"}\n"
"#EditData{\n"
"	background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"}\n"
"\n"
""));
        label_nazwa = new QLabel(EditData);
        label_nazwa->setObjectName(QString::fromUtf8("label_nazwa"));
        label_nazwa->setGeometry(QRect(11, 11, 37, 25));
        button_kalendarz = new QPushButton(EditData);
        button_kalendarz->setObjectName(QString::fromUtf8("button_kalendarz"));
        button_kalendarz->setGeometry(QRect(205, 40, 92, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Calendar-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_kalendarz->setIcon(icon);
        button_kalendarz->setIconSize(QSize(16, 16));
        button_kalendarz->setAutoDefault(false);
        button_kalendarz->setDefault(false);
        button_kalendarz->setFlat(false);
        label_data = new QLabel(EditData);
        label_data->setObjectName(QString::fromUtf8("label_data"));
        label_data->setGeometry(QRect(11, 40, 35, 25));
        label_kwota = new QLabel(EditData);
        label_kwota->setObjectName(QString::fromUtf8("label_kwota"));
        label_kwota->setGeometry(QRect(11, 70, 35, 25));
        label_opis = new QLabel(EditData);
        label_opis->setObjectName(QString::fromUtf8("label_opis"));
        label_opis->setGeometry(QRect(11, 100, 33, 25));
        edit_data = new QLineEdit(EditData);
        edit_data->setObjectName(QString::fromUtf8("edit_data"));
        edit_data->setGeometry(QRect(60, 40, 131, 25));
        edit_nazwa = new QLineEdit(EditData);
        edit_nazwa->setObjectName(QString::fromUtf8("edit_nazwa"));
        edit_nazwa->setGeometry(QRect(60, 11, 231, 25));
        edit_opis = new QLineEdit(EditData);
        edit_opis->setObjectName(QString::fromUtf8("edit_opis"));
        edit_opis->setGeometry(QRect(60, 100, 231, 25));
        edit_kwota = new QLineEdit(EditData);
        edit_kwota->setObjectName(QString::fromUtf8("edit_kwota"));
        edit_kwota->setGeometry(QRect(60, 70, 231, 25));
        button_anuluj_2 = new QPushButton(EditData);
        button_anuluj_2->setObjectName(QString::fromUtf8("button_anuluj_2"));
        button_anuluj_2->setGeometry(QRect(10, 170, 62, 21));
        button_anuluj_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 50px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/Delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_anuluj_2->setIcon(icon1);
        button_ok = new QPushButton(EditData);
        button_ok->setObjectName(QString::fromUtf8("button_ok"));
        button_ok->setGeometry(QRect(205, 170, 62, 21));
        button_ok->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 50px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/Check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_ok->setIcon(icon2);
        button_anuluj = new QPushButton(EditData);
        button_anuluj->setObjectName(QString::fromUtf8("button_anuluj"));
        button_anuluj->setGeometry(QRect(114, 170, 62, 21));
        button_anuluj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 10px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 50px;\n"
"max-width: 50px;\n"
"min-height: 13px;\n"
"max-height: 13px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/Cancel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_anuluj->setIcon(icon3);
        label_opis_2 = new QLabel(EditData);
        label_opis_2->setObjectName(QString::fromUtf8("label_opis_2"));
        label_opis_2->setGeometry(QRect(11, 130, 33, 25));
        comboBox = new QComboBox(EditData);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(60, 130, 232, 25));
        comboBox->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:reflect, x1:0.291, y1:0.056, x2:0.359, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        id = new QLabel(EditData);
        id->setObjectName(QString::fromUtf8("id"));
        id->setEnabled(false);
        id->setGeometry(QRect(30, 150, 21, 16));
        QWidget::setTabOrder(edit_nazwa, button_kalendarz);
        QWidget::setTabOrder(button_kalendarz, button_anuluj_2);
        QWidget::setTabOrder(button_anuluj_2, button_anuluj);
        QWidget::setTabOrder(button_anuluj, button_ok);

        retranslateUi(EditData);

        QMetaObject::connectSlotsByName(EditData);
    } // setupUi

    void retranslateUi(QWidget *EditData)
    {
        EditData->setWindowTitle(QApplication::translate("EditData", "Form", 0, QApplication::UnicodeUTF8));
        label_nazwa->setText(QApplication::translate("EditData", "Nazwa", 0, QApplication::UnicodeUTF8));
        button_kalendarz->setText(QApplication::translate("EditData", "Kalendarz", 0, QApplication::UnicodeUTF8));
        label_data->setText(QApplication::translate("EditData", "Data   ", 0, QApplication::UnicodeUTF8));
        label_kwota->setText(QApplication::translate("EditData", "Kwota", 0, QApplication::UnicodeUTF8));
        label_opis->setText(QApplication::translate("EditData", "Opis   ", 0, QApplication::UnicodeUTF8));
        button_anuluj_2->setText(QApplication::translate("EditData", "Usu\305\204", 0, QApplication::UnicodeUTF8));
        button_ok->setText(QApplication::translate("EditData", "OK", 0, QApplication::UnicodeUTF8));
        button_anuluj->setText(QApplication::translate("EditData", "Anuluj", 0, QApplication::UnicodeUTF8));
        label_opis_2->setText(QApplication::translate("EditData", "Typ", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("EditData", "Wp\305\202ata", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditData", "Wydatek", 0, QApplication::UnicodeUTF8)
        );
        id->setText(QApplication::translate("EditData", "id", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditData: public Ui_EditData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDATA_H
