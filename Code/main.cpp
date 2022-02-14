#include <iostream>
#include "lexer.h"


int main(void) {
	string name = "joris";
	E4 etat(name);
	etat.print();
   /* string chaine("(1+34)*123");

   Lexer l(chaine);

   Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
   } */
   return 0;
}

