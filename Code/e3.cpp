#include "e3.h"

bool E3::transition(Automate * a, Symbole * s){
	
	switch(*s) {
		case FIN: 
			a->reduction(1,s);
			break;
	}

	return false;
}