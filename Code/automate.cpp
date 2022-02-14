#include "automate.h"

void Automate::decalage(Symbole *s, Etat *e){
	pileSymbole.push(s);
	pileEtat.push(e);
}

void Automate::reduction(int n, Symbole *s){
	for(int i=0;i<n;i++){
		delete(pileEtat.top());
		pileEtat.pop();
	}
	pileEtat.top()->transition(this,s);
}