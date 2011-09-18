/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created: Sun Sep 18 19:10:09 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

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

class Ui_Registration
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_login;
    QLineEdit *edit_login;
    QLabel *label_haslo;
    QLineEdit *edit_haslo;
    QLabel *label_haslo2;
    QLineEdit *edit_haslo2;
    QLabel *label_email;
    QLineEdit *edit_email;
    QPushButton *button_register;
    QPushButton *button_cancel;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(406, 219);
        centralwidget = new QWidget(Registration);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 100, 16, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 361, 181));
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

        label_haslo2 = new QLabel(layoutWidget);
        label_haslo2->setObjectName(QString::fromUtf8("label_haslo2"));

        gridLayout->addWidget(label_haslo2, 2, 0, 1, 1);

        edit_haslo2 = new QLineEdit(layoutWidget);
        edit_haslo2->setObjectName(QString::fromUtf8("edit_haslo2"));

        gridLayout->addWidget(edit_haslo2, 2, 1, 1, 2);

        label_email = new QLabel(layoutWidget);
        label_email->setObjectName(QString::fromUtf8("label_email"));

        gridLayout->addWidget(label_email, 3, 0, 1, 1);

        edit_email = new QLineEdit(layoutWidget);
        edit_email->setObjectName(QString::fromUtf8("edit_email"));

        gridLayout->addWidget(edit_email, 3, 1, 1, 2);

        button_register = new QPushButton(layoutWidget);
        button_register->setObjectName(QString::fromUtf8("button_register"));
        button_register->setEnabled(true);

        gridLayout->addWidget(button_register, 4, 1, 1, 1);

        button_cancel = new QPushButton(layoutWidget);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));

        gridLayout->addWidget(button_cancel, 4, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 130, 16, 16));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 30, 16, 16));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        Registration->setCentralWidget(centralwidget);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QMainWindow *Registration)
    {
        Registration->setWindowTitle(QApplication::translate("Registration", "Wydatnik - rejestracja", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_login->setText(QApplication::translate("Registration", "login:", 0, QApplication::UnicodeUTF8));
        label_haslo->setText(QApplication::translate("Registration", "has\305\202o:", 0, QApplication::UnicodeUTF8));
        label_haslo2->setText(QApplication::translate("Registration", "powt\303\263rz has\305\202o:", 0, QApplication::UnicodeUTF8));
        label_email->setText(QApplication::translate("Registration", "email:", 0, QApplication::UnicodeUTF8));
        button_register->setText(QApplication::translate("Registration", "Zarejestruj", 0, QApplication::UnicodeUTF8));
        button_cancel->setText(QApplication::translate("Registration", "Anuluj", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
