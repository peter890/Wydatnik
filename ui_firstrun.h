/********************************************************************************
** Form generated from reading UI file 'firstrun.ui'
**
** Created: Sun Sep 18 19:10:09 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTRUN_H
#define UI_FIRSTRUN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstRun
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *lineEdit;
    QWidget *page_2;
    QTextEdit *textEdit;
    QSplitter *splitter;
    QPushButton *Bcancel;
    QPushButton *Bnext;

    void setupUi(QWidget *FirstRun)
    {
        if (FirstRun->objectName().isEmpty())
            FirstRun->setObjectName(QString::fromUtf8("FirstRun"));
        FirstRun->resize(452, 238);
        stackedWidget = new QStackedWidget(FirstRun);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 30, 291, 131));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 50, 113, 20));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 20, 104, 71));
        stackedWidget->addWidget(page_2);
        splitter = new QSplitter(FirstRun);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(290, 210, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        Bcancel = new QPushButton(splitter);
        Bcancel->setObjectName(QString::fromUtf8("Bcancel"));
        splitter->addWidget(Bcancel);
        Bnext = new QPushButton(splitter);
        Bnext->setObjectName(QString::fromUtf8("Bnext"));
        splitter->addWidget(Bnext);

        retranslateUi(FirstRun);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FirstRun);
    } // setupUi

    void retranslateUi(QWidget *FirstRun)
    {
        FirstRun->setWindowTitle(QApplication::translate("FirstRun", "Form", 0, QApplication::UnicodeUTF8));
        Bcancel->setText(QApplication::translate("FirstRun", "Zako\305\204cz", 0, QApplication::UnicodeUTF8));
        Bnext->setText(QApplication::translate("FirstRun", "Dalej", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FirstRun: public Ui_FirstRun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTRUN_H
