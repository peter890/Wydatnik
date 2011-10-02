/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Fri Sep 23 11:29:04 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label_login;
    QPushButton *button_anuluj;
    QLineEdit *edit_haslo;
    QLineEdit *edit_login;
    QLabel *label_haslo;
    QPushButton *button_zaloguj;
    QCheckBox *checkBox2;
    QLabel *label_register;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(364, 171);
        Login->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
"#centralwidget{\n"
"	border: 3px solid gray;\n"
"	border-radius: 40px;\n"
"	background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"}\n"
"\n"
"QLabel {\n"
"font-weight: bold;\n"
"font-size: 15px;\n"
"}"));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(364, 171));
        centralwidget->setMaximumSize(QSize(364, 171));
        label_login = new QLabel(centralwidget);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(40, 25, 51, 23));
        button_anuluj = new QPushButton(centralwidget);
        button_anuluj->setObjectName(QString::fromUtf8("button_anuluj"));
        button_anuluj->setGeometry(QRect(241, 111, 71, 20));
        button_anuluj->setFocusPolicy(Qt::TabFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Cancel-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_anuluj->setIcon(icon);
        edit_haslo = new QLineEdit(centralwidget);
        edit_haslo->setObjectName(QString::fromUtf8("edit_haslo"));
        edit_haslo->setGeometry(QRect(126, 68, 201, 23));
        edit_login = new QLineEdit(centralwidget);
        edit_login->setObjectName(QString::fromUtf8("edit_login"));
        edit_login->setGeometry(QRect(126, 25, 201, 23));
        label_haslo = new QLabel(centralwidget);
        label_haslo->setObjectName(QString::fromUtf8("label_haslo"));
        label_haslo->setGeometry(QRect(40, 68, 51, 23));
        button_zaloguj = new QPushButton(centralwidget);
        button_zaloguj->setObjectName(QString::fromUtf8("button_zaloguj"));
        button_zaloguj->setGeometry(QRect(126, 111, 71, 20));
        button_zaloguj->setFocusPolicy(Qt::TabFocus);
        button_zaloguj->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/Check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_zaloguj->setIcon(icon1);
        button_zaloguj->setAutoDefault(false);
        checkBox2 = new QCheckBox(centralwidget);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));
        checkBox2->setEnabled(false);
        checkBox2->setGeometry(QRect(30, 140, 95, 16));
        QFont font;
        font.setPointSize(7);
        checkBox2->setFont(font);
        label_register = new QLabel(centralwidget);
        label_register->setObjectName(QString::fromUtf8("label_register"));
        label_register->setGeometry(QRect(260, 150, 71, 16));
        label_register->setStyleSheet(QString::fromUtf8("#label_register{\n"
"	font-size: 10px;\n"
"	font-weight: normal;}\n"
"#label_register:hover{\n"
"color: red;\n"
"}"));
        Login->setCentralWidget(centralwidget);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Wydatnik - logowanie", 0, QApplication::UnicodeUTF8));
        label_login->setText(QApplication::translate("Login", "Login:", 0, QApplication::UnicodeUTF8));
        button_anuluj->setText(QApplication::translate("Login", "Anuluj", 0, QApplication::UnicodeUTF8));
        label_haslo->setText(QApplication::translate("Login", "Has\305\202o", 0, QApplication::UnicodeUTF8));
        button_zaloguj->setText(QApplication::translate("Login", "Zaloguj", 0, QApplication::UnicodeUTF8));
        checkBox2->setText(QApplication::translate("Login", "Zapami\304\231taj mnie", 0, QApplication::UnicodeUTF8));
        label_register->setText(QApplication::translate("Login", "zarejestruj si\304\231...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
