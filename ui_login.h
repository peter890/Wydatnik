/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Sun Sep 18 19:10:09 2011
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
#include <QtGui/QGridLayout>
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_login;
    QLineEdit *edit_login;
    QLabel *label_haslo;
    QLineEdit *edit_haslo;
    QPushButton *button_zaloguj;
    QPushButton *button_anuluj;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(364, 171);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(364, 171));
        centralwidget->setMaximumSize(QSize(364, 171));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 341, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(layoutWidget);
        label_login->setObjectName(QString::fromUtf8("label_login"));

        gridLayout->addWidget(label_login, 0, 0, 1, 1);

        edit_login = new QLineEdit(layoutWidget);
        edit_login->setObjectName(QString::fromUtf8("edit_login"));

        gridLayout->addWidget(edit_login, 0, 1, 1, 2);

        label_haslo = new QLabel(layoutWidget);
        label_haslo->setObjectName(QString::fromUtf8("label_haslo"));

        gridLayout->addWidget(label_haslo, 1, 0, 1, 1);

        edit_haslo = new QLineEdit(layoutWidget);
        edit_haslo->setObjectName(QString::fromUtf8("edit_haslo"));

        gridLayout->addWidget(edit_haslo, 1, 1, 1, 2);

        button_zaloguj = new QPushButton(layoutWidget);
        button_zaloguj->setObjectName(QString::fromUtf8("button_zaloguj"));
        button_zaloguj->setFocusPolicy(Qt::ClickFocus);
        button_zaloguj->setContextMenuPolicy(Qt::NoContextMenu);
        button_zaloguj->setAutoDefault(false);

        gridLayout->addWidget(button_zaloguj, 2, 1, 1, 1);

        button_anuluj = new QPushButton(layoutWidget);
        button_anuluj->setObjectName(QString::fromUtf8("button_anuluj"));

        gridLayout->addWidget(button_anuluj, 2, 2, 1, 1);

        Login->setCentralWidget(centralwidget);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Widatnik - logowanie", 0, QApplication::UnicodeUTF8));
        label_login->setText(QApplication::translate("Login", "Login:", 0, QApplication::UnicodeUTF8));
        label_haslo->setText(QApplication::translate("Login", "Has\305\202o", 0, QApplication::UnicodeUTF8));
        button_zaloguj->setText(QApplication::translate("Login", "Zaloguj", 0, QApplication::UnicodeUTF8));
        button_anuluj->setText(QApplication::translate("Login", "Anuluj", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
