#ifndef MYLABEL_H
#define MYLABEL_H
#include <QLabel>
#include "obserwator.h"
#include "obserwowany.h"
#include "wydatnik.h"
#include "rozchody.h"

class MyLabel: public QLabel, public Obserwator
{
public:
    MyLabel(QWidget * parent):QLabel(parent){}
    virtual void zdarzenie(Obserwowany *o)
    {
          QMessageBox::information(0, "info", "obserwator(Stan Konta) powiadomiony");
          QString login;
          QSqlQuery zapytanie("SELECT saldo FROM users WHERE id='"+login.setNum(Wydatnik::getInstance()->getUserid())+"';");
          while(zapytanie.next())
          {
              this->setText(zapytanie.value(0).toString());
          }
    }
};
#endif // MYLABEL_H
