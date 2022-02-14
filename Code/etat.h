//---------- Interface de la classe <Etat> (fichier Etat.h) ----------------
#if ! defined ( Etat_H )
#define Etat_H

#include "symbole.h"

#include <iostream>
#include <string>

using namespace std;

class Automate;

class Etat 
{
protected:

	string name;

public:

    Etat (const string & name);

    virtual ~Etat ( );
	
	void print() const;
	
	virtual bool transition(Automate & unAutomate, Symbole * s)=0;

};

#endif // Etat_H