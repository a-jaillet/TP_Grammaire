#include <iostream>
#include "lexer.h"
#include "automate.h"

int main(int argc, char **argv)
{
   if (argc != 2)
   {
      cout << "Usage: /main <formula>" << endl;
      return 2;
   }
   string chaine(argv[1]);

   Lexer *l = new Lexer(chaine);
   Automate *automate = new Automate(*l);
   int returnValue;
   try
   {
      int res = automate->execute();
      cout << chaine << " = " << res << endl;
      returnValue = 0;
   }
   catch (int ex)
   {
      cout << chaine << " n'est pas une formule valide" << endl;
      returnValue = ex;
   }
   
   delete(automate);
   delete(l);
   return returnValue;
}
