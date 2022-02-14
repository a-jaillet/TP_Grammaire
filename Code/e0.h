#if ! defined ( E0_H )
#define E0_H
#include "etat.h"

class E0 : public Etat{
	public:
		E0 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

