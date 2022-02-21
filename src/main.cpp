#include <iostream>
#include "lexer.h"
#include "automate.h"
int main(int argc, char **argv) {
   //string chaine("(1+34)*123*((2+15)*5)");
   if(argc!=2){
	   cout<<"Usage: /main <formula>"<<endl;
	   return 2;
   }
   string chaine(argv[1]);

   Lexer l(chaine);

   Automate * automate = new Automate(l);
   try{
		int res = automate->execute();
		cout <<chaine<<" = "<< res << endl;
		return 0;
   }catch(int ex){
	   cout<<chaine<<" n'est pas une formule valide"<<endl;
	   return ex;
   }
}

