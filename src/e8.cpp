#include "e8.h"

bool E8::transition(Automate * a, Symbole * s){
	
	switch(*s){
		case MULT:
			a->decalage(s, new E5("etat5"));
			break;
			
        case PLUS:
            a->decalage(s, new E4("etat4"));
			break;
			
        default:
            Expr * s1 = (Expr *) a->popSymbol();
            a->popAndDestroySymbol();
            Expr * s2 = (Expr *) a->popSymbol();
            Expr * s3 = new Expr(s1->getValeur() * s2->getValeur());
            cout << s1->getValeur() << "*" << s2->getValeur() << "=" << s3->getValeur() << endl;
            a->reduction(3, s3);
            return true;
			break;
	}
	return false;
}