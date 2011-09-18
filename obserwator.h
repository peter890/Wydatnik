#ifndef OBSERWATOR_H
#define OBSERWATOR_H
#include "obserwowany.h"
class Obserwowany;

class Obserwator
{
public:
    virtual void zdarzenie(Obserwowany*)=0;
};

#endif // OBSERWATOR_H
