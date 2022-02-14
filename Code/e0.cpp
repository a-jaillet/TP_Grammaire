#include "e0.h"

bool E0::transition(Automate * a, Symbole * s){
	
	switch(*s){
		case EXPR:
			a->decalage(s, new E1("etat1"));
        case OPENPAR:
            a->decalage(s, new E2("etat2"));
        case INT:
            a->decalage(s, new E3("etat3"));
	}

	return false;
}