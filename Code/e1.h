#ifndef ETAT_1
#define ETAT_1

#include "etat.h"
#include "automate.h"

class E1 : public Etat {
    public:
    E1 (const string& name):Etat(name){}
    virtual bool transition(Automate * unAutomate, Symbole * s);
};

#endif