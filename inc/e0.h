#if ! defined ( E0_H )
#define E0_H
#include "etat.h"
#include "e1.h"
#include "e2.h"
#include "e3.h"

class E0 : public Etat{
	public:
		E0 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

