//---------- Interface de la classe <Automate> (fichier Automate.h) ----------------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

#include <iostream>
#include <stack>

#include "etat.h"
#include "lexer.h"
#include "symbole.h"

using namespace std;

class Automate 
{
protected:
	stack<Etat *> pileEtat;
	
	stack<Symbole *> pileSymbole;
	
	Lexer lexer;

public:

    Automate (const Lexer & unLexer):lexer(unLexer){}
    virtual ~Automate (){}
	
	void decalage(Symbole *s, Etat * e);
	
	void execute();

	void reduction(int n, Symbole *s);
	void popState();
	Symbole* popSymbol();
	void popAndDestroySymbol();
};

#endif // AUTOMATE_H