#ifndef PAMIATKA_H
#define PAMIATKA_H
#include <QString>

class Pamiatka
{
public:

    Pamiatka(QString daneDoZapisu);
    QString OdtworzStan();
private:
    QString stan;
};

#endif // PAMIATKA_H
