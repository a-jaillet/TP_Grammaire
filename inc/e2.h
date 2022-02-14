#if ! defined ( E2_H )
#define E2_H
#include "etat.h"
#include "automate.h"
#include "e6.h"
#include "e3.h"

class E2 : public Etat{
	public:
		E2 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

