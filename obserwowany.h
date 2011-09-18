#ifndef OBSERWOWANY_H
#define OBSERWOWANY_H
#include "obserwator.h"
class Obserwator;

class Obserwowany
{
private:
    virtual void dodajObserwatora(Obserwator*)=0;
    virtual void usunObserwatora(Obserwator*)=0;
};

#endif // OBSERWOWANY_H
