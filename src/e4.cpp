#include "e4.h"

bool E4::transition(Automate * a, Symbole * s){
	
	switch(*s){
		case EXPR:
			a->decalage(s, new E7("etat7"));
			break;
			
		case INT:
			a->decalage(s,new E3("etat3"));
			break;
			
		case OPENPAR:
			a->decalage(s,new E2("etat2"));
			break;
	}
	return false;
}