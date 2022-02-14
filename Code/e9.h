#if ! defined ( E9_H )
#define E9_H
#include "etat.h"

class E9 : public Etat{
	public:
		E9 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

