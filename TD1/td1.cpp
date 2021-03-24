#include <iostream>
using namespace std;

class Vecteur {
	// Mettre en private, et ajouter getters and setters !
	private:
		int dim;
		
	public:	
		float* elements;
		// Constructeur vide
		Vecteur(void){
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
};

int main() {
	// Creation des objets de classe Vecteur
	//Vecteur v1 = Vecteur();
	Vecteur v2 = Vecteur(4);
	Vecteur v3 = Vecteur(4, 1.4);
	Vecteur v4 = Vecteur(v3);

	// Afficher la dimension de v2
	cout << "v2.dim = " << v2.get_dim() << "\n" ;

	// Afficher les elements du vecteur initialise
	for(int i=0; i<v3.get_dim(); i++) {
		cout << "v3[" << i << "] = " << v3.get_elements(i) << "\n" ;
	}
	// Afficher les elements du vecteur copie
	for(int i=0; i<v4.get_dim(); i++) {
		cout << "v4[" << i << "] = " << v4.get_elements(i) << "\n" ;
	}

	// On modifie la dimension de v3
	v3.set_dim(6);
	cout << "nouvelle v3.dim = " << v3.get_dim() << "\n" ;

	// On modifie les deux derniers elements de v3
	v3.set_element(4, 1.7);
	v3.set_element(5, 1.8);
	cout << "v3[" << 4 << "] = " << v3.get_elements(4) << "\n" ;
	cout << "v3[" << 5 << "] = " << v3.get_elements(5) << "\n" ;

}