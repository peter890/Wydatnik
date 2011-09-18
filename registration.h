#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>
#include "wydatnik.h"

namespace Ui {
    class Registration;
}

class Registration : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = 0);
    ~Registration();

private:
    Ui::Registration *ui;

private slots:
    void rejestruj();
    void anuluj();
   bool passwdCmp();
   bool checkEmail();
   bool checkLogin();
};

#endif // REGISTRATION_H
