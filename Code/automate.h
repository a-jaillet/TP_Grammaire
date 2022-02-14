//---------- Interface de la classe <Automate> (fichier Automate.h) ----------------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

#include <iostream>
#include <stack>

#include "etat.h"
#include "symbole.h"

using namespace std;

class Automate 
{
protected:
	stack<Etat *> pileEtat;
	
	stack<Symbole *> pileSymbole;

public:

    Automate ();
    virtual ~Automate ();
	
	void decalage(Symbole *s, Etat * e);
	
	void reduction(int n, Symbole *s);
	void popState();
	Symbole* popSymbol();
	void popAndDestroySymbol();
};

#endif // AUTOMATE_H