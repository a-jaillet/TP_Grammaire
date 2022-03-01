//---------- Interface de la classe <Etat> (fichier Etat.h) ----------------
#if ! defined ( Etat_H )
#define Etat_H

#include "symbole.h"
#include <iostream>
#include <string>

using namespace std;

class Automate;

class Etat 
//Classe abstraite qui représente un état de l'automate. La méthode transition sera définie pour chacun des états selon le symbole en entrée, les décalages 
//ou les réductions à effectuer
{
protected:

	string name;

public:

    Etat (const string & Name);

    virtual ~Etat (){};
	
	void print() const;
	
	virtual bool transition(Automate * unAutomate, Symbole * s)=0;

};
#endif // Etat_H