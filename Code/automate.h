//---------- Interface de la classe <Automate> (fichier Automate.h) ----------------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

#include <iostream>
#include <stack>

using namespace std;

class Automate 
{
protected:
	stack<Etat> pileEtat;
	
	stack<Symbole> pileSymbole;

public:

    Automate ( );

    virtual ~Automate ( );
	
	void decalage(Symbole *s, Etat * e);
	
	void reduction(Symbole *s, Etat *e);

};

#endif // AUTOMATE_H