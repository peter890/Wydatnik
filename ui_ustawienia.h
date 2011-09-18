/********************************************************************************
** Form generated from reading UI file 'ustawienia.ui'
**
** Created: Sun Sep 18 19:10:09 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USTAWIENIA_H
#define UI_USTAWIENIA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ustawienia
{
public:

    void setupUi(QWidget *Ustawienia)
    {
        if (Ustawienia->objectName().isEmpty())
            Ustawienia->setObjectName(QString::fromUtf8("Ustawienia"));
        Ustawienia->resize(400, 300);

        retranslateUi(Ustawienia);

        QMetaObject::connectSlotsByName(Ustawienia);
    } // setupUi

    void retranslateUi(QWidget *Ustawienia)
    {
        Ustawienia->setWindowTitle(QApplication::translate("Ustawienia", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ustawienia: public Ui_Ustawienia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USTAWIENIA_H
