#include "e9.h"
#include <string>

bool E9::transition(Automate * a, Symbole * s){
	
	switch(*s){
		case FIN:
			a->reduction(3,s);
			break;
	}
	return true;
}