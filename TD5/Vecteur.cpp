#include <iostream>
#include "Vecteur.h"
using namespace std;

Vecteur::Vecteur(void){
        this->dim = 0;
}

// Constructeur a dimension
Vecteur::Vecteur(const int dim1){
    this->dim = dim1;
    this->elements = new float[this->dim];
}

// Constructeur a dimension initialise
Vecteur::Vecteur(const int dim1, const float val_init){
    this->dim = dim1;
    this->elements = new float[this->dim];
    for (int i = 0; i<this->dim; i++){
        this->elements[i] = val_init;
    }
}
// Constructeur copie de vecteur
Vecteur::Vecteur(const Vecteur &vec){
    this->dim = vec.dim;
    this->elements = new float[this->dim];
    for (int i = 0; i<this->dim; i++){
        this->elements[i] = vec.elements[i];
    }
}

// Destructeur
Vecteur::~Vecteur(){  
    if(this->dim>0){    
        delete [] this->elements;
    }
}

// Getter - retourne la dimension
int Vecteur::get_dim(void){
    return this->dim;		
}

// Getter - retourne un element
float Vecteur::get_elements(int i){
    return this->elements[i];		
}

// Setter - fixe la dimension
void Vecteur::set_dim(int dim1){
    this->dim = dim1;
            
}

// Setter - fixe un element dans le vecteur
void Vecteur::set_element(int index, float valeur){
    this->elements[index] = valeur;		
}	

// Affectation
Vecteur& Vecteur::operator = (const Vecteur & operande1){  
    if(this->dim != operande1.dim){    
        throw ERREUR_DIM;  
    }
    else {  
        memcpy(elements,operande1.elements,this->dim*sizeof(float));  
        return(*this);
    }
}

// +=
Vecteur & Vecteur::operator+= (const Vecteur & operande){  
    int i;  
    if (this->dim != operande.dim){    
        throw ERREUR_DIM;  
    } else {
        for (i=0;i<dim;i++) this->elements[i]+=operande.elements[i];  
        return (*this);
    }
}

// Indice
float& Vecteur::operator[] (const int i){  
    if (i>(this->dim-1) || i<0){    
        throw ERREUR_INDICE;
    } else {
        return(this->elements[i]);
    }
}

// +
Vecteur  operator + (const Vecteur & operande1,const Vecteur & operande2){  
    Vecteur temp_vect(operande1);  
    temp_vect+=operande2;
    return(temp_vect);
}

Vecteur multiplication(float f, Vecteur &v){
    Vecteur temp_vect(v.get_dim());
    for (int i = 0; i < v.get_dim(); i++){
        temp_vect[i] = f*v[i];
    }
    return temp_vect;
}