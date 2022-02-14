#include "e8.h"
#include <string>

bool E8::transition(Automate * a, Symbole * s){
	
	switch(*s){
		case MULT:
			a->decalage(s, new E5("etat5"));
        case PLUS:
            a->decalage(s, new E4("etat4"));

        // default:

        //     a->reduction(3, s);
	}
	return false;
}