#include "e2.h"

bool E2::transition(Automate * a, Symbole * s){
	
	switch(*s){
        case OPENPAR:
            a -> decalage(s, new E2("etat2"));
        case INT:
            a -> decalage(s, new E3("etat3"));
        case EXPR:
            a -> decalage(s, new E6("etat6"));
	}

	return false;
}