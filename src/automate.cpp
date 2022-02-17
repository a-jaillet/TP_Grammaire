#include "automate.h"
#include "e0.h"
#include "etat.h"

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

void Automate::popState() {
	pileEtat.pop();
}

Symbole* Automate::popSymbol() {
	Symbole* s = pileSymbole.top();
	pileSymbole.pop();
	return s;
}

void Automate::popAndDestroySymbol() {
	delete(pileSymbole.top());
	pileSymbole.pop();
}

void Automate::execute() {
	Symbole * s;
	E0 * etatInitial = new E0("etat0");

	pileEtat.push(etatInitial);

    while(*(s=lexer.Consulter())!=FIN) {
       Etat * etatCourant = pileEtat.top();
	   etatCourant->print();
	   etatCourant->transition(this, s);
	   lexer.Avancer();
   	}
}