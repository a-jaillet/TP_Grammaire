#if ! defined ( E4_H )
#define E4_H
#include <string>
#include "automate.h"
#include "etat.h"

class E4 : public Etat{
	public:
		E4 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

