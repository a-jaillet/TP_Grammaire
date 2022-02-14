bool E7::transition(Automate * a, Symbole * s){
	
	 switch(*s){
		case PLUS:
			a->decalage(s, new E4("etat4"));
			break;
			
		case MULT:
			a->decalage(s,new E5("etat5"));
			break;
			
		default:
			Expr *s1 = (Expr*) a->popSymbol();
			a->popAndDestroySymbol();
			Expr *s2 = (Expr*) a->popSymbol();
			a->reduction(3,s1->getValeur()+s2->getValeur());
	 } 
	return false;
}