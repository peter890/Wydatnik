#ifndef USTAWIENIA_H
#define USTAWIENIA_H

#include <QWidget>

namespace Ui {
    class Ustawienia;
}

class Ustawienia : public QWidget
{
    Q_OBJECT

public:
    explicit Ustawienia(QWidget *parent = 0);
    ~Ustawienia();

private:
    Ui::Ustawienia *ui;
};

#endif // USTAWIENIA_H
