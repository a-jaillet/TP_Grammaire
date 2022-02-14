#if ! defined ( E3_H )
#define E3_H
#include "etat.h"

class E3 : public Etat{
	public:
		E3 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

