#if ! defined ( E7_H )
#define E7_H
#include <string>
#include "etat.h"
#include "e4.h"
#include "e5.h"

class E7 : public Etat{
	public:
		E7 (const string & name):Etat(name){}
		bool transition(Automate * unAutomate, Symbole * s);
};
#endif