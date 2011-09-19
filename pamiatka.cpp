#include "pamiatka.h"

Pamiatka::Pamiatka(QString daneDoZapisu)
{
    stan = daneDoZapisu;
}

QString Pamiatka::OdtworzStan()
{
    return stan;
}
