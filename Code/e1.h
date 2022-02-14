#ifndef E_1
#define E_1

#include "etat.h"
#include "e4.h"
#include "e5.h"

class E1 : public Etat {
    public:
    E1 (const string& name):Etat(name){}
    bool transition(Automate * unAutomate, Symbole * s);
};

#endif