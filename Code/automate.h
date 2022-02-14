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

public:

    Automate ();
    virtual ~Automate ();
	

};

#endif // AUTOMATE_H