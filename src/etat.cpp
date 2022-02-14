#include "etat.h"

#include <iostream>
#include <string>

using namespace std;

Etat::Etat (const string & Name):name(Name){}

void Etat::print() const{
	cout<<name<<endl;
}