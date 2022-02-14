#ifndef ETAT_1
#define ETAT_1

#include "etat.h"

class Etat1 : public Etat {
    virtual bool transition(Automate * unAutomate, Symbole * s);
};

#endif