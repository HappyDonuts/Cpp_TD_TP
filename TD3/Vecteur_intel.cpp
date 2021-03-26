#include "Vecteur_intel.h"

Vecteur_intel & Vecteur_intel::operator = (const Vecteur_intel & vec) {
    if (dim > vec.dim){
        
    } 
    for (int i = 0; i<dim; i++){
        elements[i] = vec.elements[i];
    }
    return (*this);	
}