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

Etat* Automate::popState() {
	Etat* e = pileEtat.top();
	pileEtat.pop();
	return e;
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

int Automate::execute() {
	Symbole * s;
	E0 * etatInitial = new E0("etat0");

	pileEtat.push(etatInitial);  //On commence à l'état initial e0
	int res = 0;
    while(*(s=lexer.Consulter())!=FIN || pileEtat.size()>1) {
		try{
			Etat * etatCourant = pileEtat.top();
			if (!etatCourant->transition(this, s))  //Si la transition donne lieu à un décalage, on lit le prochain symbole
			{	
				lexer.Avancer();
			}
			if (pileEtat.size() == 2)  //Condition d'arrêt
			{
				Expr* lastSymbole = (Expr *) pileSymbole.top();
				res = lastSymbole->getValeur(); //Récupère le résulta final
			}
		}catch(int ex){
			throw ex;
		}
   	}

	return res;
}