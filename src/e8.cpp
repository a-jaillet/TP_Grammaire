#include "e8.h"

bool E8::transition(Automate *a, Symbole *s){

    Expr *s1 = (Expr *)a->popSymbol();
    a->popAndDestroySymbol();
    Expr *s2 = (Expr *)a->popSymbol();
    Expr *s3 = new Expr(s1->getValeur() * s2->getValeur());
    a->reduction(3, s3);
    return true;
}