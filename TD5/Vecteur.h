#define ERREUR_DIM 1
#define ERREUR_INDICE 2

class Vecteur {
	protected:
		int dim;
		float* elements;
		
	public:	
		
		// Constructeur vide
		Vecteur(void);
		// Constructeur a dimension
		Vecteur(int dim1);
		// Constructeur a dimension initialise
		Vecteur(int dim1, float val_init);
		// Constructeur copie de vecteur
		Vecteur(const Vecteur &vec);
		
		// Destructeur
		virtual  ~Vecteur();

		// Getter - retourne la dimension
		int get_dim(void);
		// Getter - retourne un element
		float get_elements(int i);
		// Setter - fixe la dimension
		void set_dim(int dim1);
		// Setter - fixe un element dans le vecteur
		void set_element(int index, float valeur);

		// Operators
        Vecteur & operator= ( const Vecteur & operande1);  
        Vecteur & operator+= (const Vecteur & operande);  
        float & operator[] (const int i);
		
};

Vecteur  operator + (const Vecteur & operande1,const Vecteur & operande2);