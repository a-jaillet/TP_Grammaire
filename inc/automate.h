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
	stack<Etat *> pileEtat;  //pile des états traversés
	
	stack<Symbole *> pileSymbole; //pile des symboles lus
	
	Lexer lexer;  //analyseur lexical pour lire la chaîne de caractère qui représente la formule à calculer

public:
	
	//Constructeur et destructeur
    Automate (const Lexer & unLexer):lexer(unLexer){}
    virtual ~Automate (){}
	
	//Empile le symbole s et l'état e sur les piles
	void decalage(Symbole *s, Etat * e);
	
	//Dépile n états et effectue la transition de l'état courant en prenant le symbole s
	void reduction(int n, Symbole *s);
	
	//Dépile un état
	Etat* popState();
	
	//Dépile un symbole
	Symbole* popSymbol();
	
	//Libère le pointeur situé au sommet de la pile en le dépilant
	void popAndDestroySymbol();
	
	//Fonction principale qui lit la chaîne de l'analyseur lexical et renvoie le bon résultat
	int execute();
};

#endif // AUTOMATE_H