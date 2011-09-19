#ifndef WYKRES_H
#define WYKRES_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QtGui/QApplication>
#include <QtGui/QPainter>
#include <QLabel>
#include <vector>
#include <QMessageBox>
#include "obserwator.h"
#include "obserwowany.h"
#include "pamiatka.h"
using namespace std;
class Dane;
class Wykres : public QWidget, public Obserwator
{
    Q_OBJECT
public:
    explicit Wykres(QWidget *parent = 0);
    ~Wykres(){}
    bool insertData(vector<Dane*>);
    virtual void zdarzenie(Obserwowany *);
protected:
    void paintEvent(QPaintEvent *);

private:
    int x0;
    int y0;
    int szerW;
    int wysW;
    vector<Dane*> wyniki;
    double maxValue();
    bool rysuj;
    int Width, Height;
    QWidget *PARENT;

signals:

public slots:

};

class Dane
{
public:
    Dane(QString _date, double _value, bool _wydatek);
    Dane(Dane*);
    Dane(QStringList _lista){lista = new QStringList(_lista);}
    QString getData();
    double getValue();
    bool getWydatek();

protected:
    QString data;
    double wartosc;
    bool wydatek;
    QStringList* lista;


};

#endif // WYKRES_H
