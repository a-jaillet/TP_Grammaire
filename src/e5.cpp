#include "e5.h"
#include <string>

bool E5::transition(Automate * a, Symbole * s){
	
	 switch(*s){
		case EXPR:
			a->decalage(s, new E8("etat8"));
			break;
		case OPENPAR:
			a->decalage(s,new E2("etat2"));
			break;
		case INT:
			a->decalage(s,new E3("etat3"));
			break;
		default:
			throw -1;
	 } 
	return false;
}