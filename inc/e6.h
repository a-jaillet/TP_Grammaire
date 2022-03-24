#if ! defined ( E6_H )
#define E6_H
#include "etat.h"
#include "e4.h"
#include "e5.h"
#include "e9.h"

class E6 : public Etat{
	public:
		E6 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif