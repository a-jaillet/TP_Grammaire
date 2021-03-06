//---------- Interface de la classe <Automate> (fichier Automate.h) ----------------
#if !defined(AUTOMATE_H)
#define AUTOMATE_H

#include <iostream>
#include <stack>

#include "etat.h"
#include "e0.h"
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
	Automate(const Lexer &unLexer) : lexer(unLexer) {}
	virtual ~Automate() {}
	
	void decalage(Symbole *s, Etat *e);

	int execute();
	void reduction(int n, Symbole *s);
	Etat *popState();
	Symbole *popSymbol();
	void popAndDestroySymbol();
};

#endif // AUTOMATE_H