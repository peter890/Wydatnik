#include "wykres.h"
#include "wydatnik.h"

Wykres::Wykres(QWidget *parent) :
        QWidget(parent)
{
    PARENT = parent;
    rysuj = false;
    Width = PARENT->width();
    Height = PARENT->height();
    this->resize(Width,Height);
}

void Wykres::paintEvent( QPaintEvent* event )
{
    if(Width != PARENT->width() || Height != PARENT->height())
    {
       this->resize(PARENT->width(),PARENT->height());
       //update();
    }
    if(rysuj)
    {
        x0 = 32;
        y0 = this->height()-x0;
        // Stops compiler from complaining about unused
        // variable
        Q_UNUSED( event );

        QPainter painter(this);
        painter.begin(this);
        QPen pen;

        painter.setPen(pen);
        //painter.setRenderHint (QPainter::Antialiasing);
        // painter.setBrush(QBrush(Qt::red, Qt::SolidPattern));
        QPoint pointStart;
        QPoint pointStop;
        pointStart.setX(x0);
        pointStart.setY(0);
        pointStop.setX(x0);
        pointStop.setY(this->height()-(x0/6));
        painter.drawLine(pointStart, pointStop); //os pionowa
        pointStart.setX(x0/6);
        pointStart.setY(this->height()-x0);
        pointStop.setX(this->width());
        pointStop.setY(this->height()-x0);
        painter.drawLine(pointStart, pointStop);//os pozioma


        int nD = wyniki.size();
        int max = maxValue() + 1;
        QString s;
        int szerokosc = ((this->width()-x0)/nD) - 0.1*((this->width()-x0)/nD);
        int odstep = 0.1 * szerokosc;
        int X = x0+odstep;



        for(int i=0; i<nD; i++)
        {
            double wart = wyniki[i]->getValue();
            int wysokosc = ((this->width() -(this->width()-y0)-15) * wart)/max;
            painter.drawRect(QRect(X,this->height()-x0,szerokosc,-wysokosc));
            painter.drawText(QRectF(X-szerokosc/2,this->height()-x0-wysokosc-15,szerokosc,13),10,s.setNum(wart)); //nad

            X += odstep + szerokosc;
        }
        X = x0+odstep;
        painter.translate(this->width()/2,this->height()/2);
        painter.save();
        painter.rotate(270);
        for(int i=0; i<nD; i++)
        {
            painter.drawText(QRect(-(y0+x0-2)/2,(-width()/2)+ X+szerokosc/2,30,10), Qt::AlignCenter, wyniki[i]->getData()); //pod
            X += odstep + szerokosc;
        }
        painter.restore();

        painter.end();
    }

}

bool Wykres::insertData(vector<Dane *> w)
{
    if(w.size()!=0)
    {
        wyniki.erase(wyniki.begin(), wyniki.begin()+wyniki.size());
        for(int i=0; i<w.size(); i++)
        {
            wyniki.push_back(new Dane(w[i]));
        }
        if(w.size() == wyniki.size())
            return true;
    }
    else
        return false;

}
double Wykres::maxValue()
{
    double max = 0;
    for(int i=0; i<wyniki.size(); i++)
    {
        if(wyniki[i]->getValue() > max)
        {
            max = wyniki[i]->getValue();
        }
    }
    return max;
}


void Wykres::zdarzenie(Obserwowany *o)
{
    //QMessageBox::information(0, "info", "obserwator(WYKRES) powiadomiony");
    if(insertData(Wydatnik::getInstance()->getData()))
    {
        rysuj = true;
    }
    else
    {
        false;
    }
}

Dane::Dane(QString _date, double _value, bool _wydatek)
{
    data = _date;
    wartosc = _value;
    wydatek = _wydatek;

}
Dane::Dane(Dane* a)
{
    this->data = a->data;
    this->wartosc = a->wartosc;
    this->wydatek = a->wydatek;
}
QString Dane::getData()
{
    return data;
}
double Dane::getValue()
{
    return wartosc;
}
bool Dane::getWydatek()
{
    return wydatek;
}



