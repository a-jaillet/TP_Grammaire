#if ! defined ( E8_H )
#define E8_H
#include "etat.h"
#include "e4.h"
#include "e5.h"

class E8 : public Etat{
	public:
		E8 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif

