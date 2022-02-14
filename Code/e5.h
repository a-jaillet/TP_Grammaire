#if ! defined ( E5_H )
#define E5_H
#include <string>
#include "etat.h"

class E5 : public Etat{
	public:
		E5 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

