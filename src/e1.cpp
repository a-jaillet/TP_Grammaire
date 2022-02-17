#include "e1.h"

bool E1::transition(Automate* unAutomate, Symbole* s) {

        switch(*s) {
            case PLUS:
                unAutomate->decalage(s, new E4("etat4"));
                break;
            case MULT: 
                unAutomate->decalage(s, new E5("etat5"));
                break;
            default: 
                Expr * e = (Expr*) unAutomate->popSymbol();
                unAutomate->reduction(1, s);
                return true;
                break;
        }

        return false;
}