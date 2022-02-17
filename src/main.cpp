#include <iostream>
#include "lexer.h"
#include "automate.h"
int main(void) {
   string chaine("(1+34)*123*((2+15)*5)");

   Lexer l(chaine);

   Automate * automate = new Automate(l);
   int res = automate->execute();
   cout << res << endl;
   return 0;
}

