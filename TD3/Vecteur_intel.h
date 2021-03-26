#include "Vecteur.h"

class Vecteur_intel : public Vecteur {
	public:
        // Constructors
		Vecteur_intel(int dim1):Vecteur(dim1) {}
		Vecteur_intel(int dim1, float val_init):Vecteur(dim1, val_init) {}
		Vecteur_intel(const Vecteur_intel &v):Vecteur(v) {}
	
        // Operators
		Vecteur_intel & operator = (const Vecteur_intel & vec);
};