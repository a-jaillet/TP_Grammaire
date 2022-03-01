#include "e5.h"
#include <string>

bool E6::transition(Automate * a, Symbole * s){
	
	 switch(*s){
		case PLUS:
			a->decalage(s, new E4("etat4"));
			break;
		case CLOSEPAR:
			a->decalage(s,new E9("etat9"));
			break;
		case MULT:
			a->decalage(s,new E5("etat5"));
			break;
		default:
			throw -1;
	 } 
	return false;
}