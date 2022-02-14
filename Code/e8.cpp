#include "e8.h"
#include <string>

bool E8::transition(Automate * a, Symbole * s){
	
	switch(*s){
		case MULT:
			a->decalage(s, new E5("etat5"));
        case PLUS:
            a->decalage(s, new E4("etat4"));

        default:
            Expr * s1 = (Expr *) a->popSymbol();
            a->popAndDestroySymbol();
            Expr * s2 = (Expr *) a->popSymbol();
            Expr * s3 = new Expr(s1->getValeur() * s2->getValeur());
            a->reduction(3, s3);
	}
	return false;
}