#include "e3.h"

bool E3::transition(Automate * a, Symbole * s){
	
    Entier * e = (Entier *) a->popSymbol();
    Expr * exp  = new Expr(e->getValeur());
	a->reduction(1,exp);	
	return true;
}