#include "e1.h"


bool Etat1::transition(Automate* unAutomate, Symbole* s) {

        switch(*s) {
            case PLUS:
                unAutomate->decalage(s, new E4);
                break;
            case MULT: 
                unAutomate->decalage(s, new E5);
                break;
        }

        return false;
}
