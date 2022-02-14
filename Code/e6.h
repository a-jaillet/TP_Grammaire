#if ! defined ( E6_H )
#define E6_H
#include <string>
#include "etat.h"

class E6 : public Etat{
	public:
		E6 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif