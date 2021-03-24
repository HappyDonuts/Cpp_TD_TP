#include <iostream>
using namespace std;

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

		float & operator [] (int indice){
			return elements[indice];
		}
		float operator [] (int indice)const {
			return elements[indice];	
		}
		Vecteur & operator = (const Vecteur & vec) {
			for (int i = 0; i<dim; i++){
				elements[i] = vec.elements[i];
			}
			return (*this);	
		}
		/*
		// A revoir !!	
		Vecteur operator + (const Vecteur& un, const Vecteur& autre) {
			Vecteur somme(get_dim(un));
			for (int i = 0; i<dim; i++){
				somme[i] = un[i] + autre[i];
			}
			return somme;
		}
		*/
};

class Vecteur_intel : public Vecteur {
	public:
		Vecteur_intel(int dim1):Vecteur(dim1) {}
		Vecteur_intel(int dim1, float val_init):Vecteur(dim1, val_init) {}
		Vecteur_intel(const Vecteur_intel &v):Vecteur(v) {}
	
		Vecteur_intel & operator = (const Vecteur_intel & vec) {
			if (dim > vec.dim){
				
			} 
			for (int i = 0; i<dim; i++){
				elements[i] = vec.elements[i];
			}
			return (*this);	
		}
};

int main() {
	Vecteur_intel v1 = Vecteur_intel(4, 1.4);
	v1[0] = 10;	
	v1[1] = 20;
	v1[2] = 30;
	v1[3] = 40;
	float valeur = v1[3];

	for(int i=0; i<v1.get_dim(); i++) {
		cout << "v1[" << i << "] = " << v1.get_elements(i) << "\n" ;
	}
	cout << "valeur = " << valeur << "\n";

	Vecteur_intel v2(4);
	v2 = v1;

	// On modifie v1 et on regarde les elements de v2
	v1[0] = 100;	
	v1[1] = 200;
	v1[2] = 200;
	v1[3] = 300;

	for(int i=0; i<v2.get_dim(); i++) {
		cout << "v2[" << i << "] = " << v2.get_elements(i) << "\n" ;

	}

}