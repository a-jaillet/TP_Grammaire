#include "e9.h"

bool E9::transition(Automate * a, Symbole * s){
	
	a->popAndDestroySymbol();
	Expr *e1 = (Expr*) a->popSymbol();
	a->popAndDestroySymbol();
	Expr* value = new Expr(e1->getValeur());
	a->reduction(3,value);
	return true;
}