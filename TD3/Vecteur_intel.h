#include "Vecteur.h"
#include <iostream>
#include <string>
using namespace std;

class Vecteur_intel : public Vecteur {
	public:
        // Constructors
		Vecteur_intel(int dim_vect): Vecteur(dim_vect){};  
		Vecteur_intel(): Vecteur(0,0){};  
		Vecteur_intel(int dim_vect,float val_init ):Vecteur ( dim_vect, val_init){};  
		Vecteur_intel(const Vecteur_intel & autre):Vecteur (autre){};
	
        // Operators
		Vecteur_intel & operator= ( const Vecteur_intel & operande1);  
		Vecteur_intel & operator+= (Vecteur_intel & operande);  
		
		// fonction  
		virtual inline string getname(){return string("classe vecteur_intel");}
};