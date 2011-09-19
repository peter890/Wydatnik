#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QCryptographicHash>
#include "wydatnik.h"
#include <QKeyEvent>

namespace Ui {
    class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private:
    Ui::Login *ui;
protected:
    virtual void keyPressEvent(QKeyEvent *);

private slots:
    void zaloguj();
    void anuluj();
};

#endif // LOGIN_H
