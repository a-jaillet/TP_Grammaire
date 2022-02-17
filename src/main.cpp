#include <iostream>
#include "lexer.h"
#include "automate.h"
int main(void) {
   string chaine("10+3");

   Lexer l(chaine);

   // Symbole * s;
   // while(*(s=l.Consulter())!=FIN) {
   //    s->Affiche();
   //    cout<<endl;
   //    l.Avancer();
   // }
   // return 0;

   Automate * automate = new Automate(l);
   automate->execute();
   Expr* lastSymbole = (Expr *) automate->popSymbol();
   cout << lastSymbole->getValeur() << endl;

   // Etat* etat = automate->popState();
   // etat->print();
   // etat = automate->popState();
   // etat->print();
   return 0;
}

