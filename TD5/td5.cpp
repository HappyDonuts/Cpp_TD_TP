#include <iostream>
using namespace std;

#define ERREUR_DIM 1
#define ERREUR_INDICE 2

class Vecteur {
	protected:
		int dim;
		
	public:	
		float* elements;
		// Constructeur vide
		Vecteur(void){
			dim = 0;
		}

		// Constructeur a dimension
		Vecteur(int dim1){
			dim = dim1;
			elements = new float[dim];
		}

		// Constructeur a dimension initialise
		Vecteur(int dim1, float val_init){
			dim = dim1;
			elements = new float[dim];
			for (int i = 0; i<dim; i++){
				elements[i] = val_init;
			}
		}
		// Constructeur copie de vecteur
		Vecteur(const Vecteur &vec){
			dim = vec.dim;
			elements = new float[dim];
			for (int i = 0; i<dim; i++){
				elements[i] = vec.elements[i];
			}
		}

		// Getter - retourne la dimension
		int get_dim(void){
			return dim;		
		}

		// Getter - retourne un element
		float get_elements(int i){
			return elements[i];		
		}

		// Setter - fixe la dimension
		void set_dim(int dim1){
			dim = dim1;
					
		}

		// Setter - fixe un element dans le vecteur
		void set_element(int index, float valeur){
			elements[index] = valeur;		
		}	

        Vecteur & operator= ( const Vecteur & operande1);  
        Vecteur & operator+= (const Vecteur & operande);  
        float & operator[] (const int i);
		
};

Vecteur  operator + (const Vecteur & operande1,const Vecteur & operande2);

Vecteur& Vecteur::operator = (const Vecteur & operande1){  
    if(dim != operande1.dim){    
        throw ERREUR_DIM;  
    }
    else {  
        memcpy(elements,operande1.elements,dim*sizeof(float));  
        return(*this);
    }
}

Vecteur & Vecteur::operator+= (const Vecteur & operande){  
    int i;  
    if (dim != operande.dim){    
        throw ERREUR_DIM;  
    } else {
        for (i=0;i<dim;i++) elements[i]+=operande.elements[i];  
        return (*this);
    }
}

float& Vecteur::operator[] (const int i){  
    if (i>(dim-1) || i<0){    
        throw ERREUR_INDICE;
    } else {
        return(elements[i]);
    }
}
 
int main()
{
    Vecteur v1(3);
    Vecteur v2(4);

    try {
        v1 = v2;
    } catch(int e) {
        if (e == ERREUR_DIM) {
            cerr << "Erreur : Dimension incompatible";
        } else if (e == ERREUR_INDICE) {
            cerr << "Erreur : INDICE incompatible";
        }
    }
}

