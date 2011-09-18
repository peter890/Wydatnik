#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QCryptographicHash>
#include "wydatnik.h"

namespace Ui {
    class Login;
}
class Wydatnik;

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private:
    //Wydatnik* wydatnik;
    Ui::Login *ui;

private slots:
    void zaloguj();
    void anuluj();
};

#endif // LOGIN_H
