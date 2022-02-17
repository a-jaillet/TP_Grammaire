#include "e2.h"

bool E2::transition(Automate * a, Symbole * s){
	
	switch(*s){
        case OPENPAR:
            a -> decalage(s, new E2("etat2"));
			break;
        case INT:
            a -> decalage(s, new E3("etat3"));
			break;
        case EXPR:
            a -> decalage(s, new E6("etat6"));
			break;
	}

	return false;
}