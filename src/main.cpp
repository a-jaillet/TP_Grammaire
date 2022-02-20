#include <iostream>
#include "lexer.h"
#include "automate.h"
int main(void) {
   //string chaine("(1+34)*123*((2+15)*5)");
   string chaine("3+-");

   Lexer l(chaine);

   Automate * automate = new Automate(l);
   try{
		int res = automate->execute();
		cout << res << endl;
   }catch(int ex){
	   cout<<chaine<<" n'est pas une formule valide"<<endl;
   }
   return 0;
}

