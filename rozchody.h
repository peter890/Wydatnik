#ifndef ROZCHODY_H
#define ROZCHODY_H

#include <QMainWindow>
#include "wydatnik.h"
#include <QDate>
#include <QCalendarWidget>
#include <QSignalMapper>
#include <QDateEdit>
#include "obserwowany.h"

namespace Ui {
    class Rozchody;
}

class Rozchody : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rozchody(QWidget *parent = 0);
    ~Rozchody();

private:
    Ui::Rozchody *ui;
private slots:
    void dodaj();
    void ustawDate(QWidget*);
};

#endif // ROZCHODY_H
