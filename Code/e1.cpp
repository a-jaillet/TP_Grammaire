#include "e1.h"

bool E1::transition(Automate* unAutomate, Symbole* s) {

        switch(*s) {
            case PLUS:
                unAutomate->decalage(s, new E4("etat4"));
                break;
            case MULT: 
                unAutomate->decalage(s, new E5("etat5"));
                break;
            case FIN: 
                unAutomate->reduction(1, s);
                break;
        }

        return false;
}