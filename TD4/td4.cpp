#include <iostream>
#include <new>

class vector {

  private:

  int dim;
  float *element;
  bool vide= true;
 

  public:

  //Création des constructeurs
  vector() {vide=true;}
  vector(int d) {
    vide=false;
    dim=d;
    element=new float[dim];
  }
  vector(int d, float e) {
  vide = false;
  dim=d;
  element=new float(dim);
  for (int i=0; i<dim;i++){
    element[i]=e;
  }
  }

  vector(vector const& autre_vec){
    dim=autre_vec.dim;
    element= new float[dim];
    for (int i=0;i<dim;i++){
      element[i]=autre_vec.element[i];
    }
  }

//retourne la dim
int get_dim(void) {
  return dim;
}

//retourne l'élement à la position i
float get_element(int i){
  return element[i];
}

// ecris la dimension
void set_dim(int d){
  dim=d;
}

//ecris les élements
void set_elem(int i, float elem){
  element[i]=elem;
}


// operateur d'indiçage
  float & operator[](int indice) {
    return element[indice];
  }

//opérateur d'affectation
  float * operator= (const vector& vect) {
    if (dim == vect.dim) {
      for(int i=0; i<dim; i++) {
        element[i] = vect.element[i];
      }
      return element;
    }
    else {
      std::cout << "les vector n'ont pas la meme taille \n";
      exit (EXIT_FAILURE);
    }
  }

	template <typename Y> friend vector<Y> operator + (const vector<Y>& one, const vector<Y>& other);

	template <typename Y> friend ostream& operator << (ostream& os, const vector<Y>& v);

	template <typename Y> friend istream& operator >> (istream& is, vector<Y>& v);
	


template <typename Y> vector<Y> operator + (const vector<Y>& one, vector<Y>& other) {
	vector temp(one);
	for (int i = 0; i < temp.dim; i++) {
		temp.elements[i] += other.elements[i];
	}
	return temp;
};

template <typename Y> ostream& operator << (ostream& os, const vector<Y>& v) {
	return os << "Dim = " << v.dim << " et\nv = \n" << v.tostring() << endl;
}

template <typename Y> istream& operator >> (istream& is, vector<Y>& v) {
	cout << "Le vector est de type " << typeid(Y).name() << "\n" << endl;
	
	if (v.dim == 0) {
		int new_dim;
		cout << "Dimension du vecteur ? \n" << endl;
		is >> new_dim;
		v.dim = new_dim;
		delete[] v.elements;
		v.elements = new Y[v.dim];
		for (int i = 0; i < v.dim; i++) {
			cout << "Numéro de l'élement " << i << " ? \n" << endl;
			is >> v.elements[i];
		}
	}
	else {
		cout << "Le vector contient " << v.dim << " elements. \n" << endl;
		for (int i = 0; i < v.dim; i++) {
			cout << "Quelle est l'element numero " << i << " ? \n" << endl;
			is >> v.elements[i];
		}
	}

	return is;
}

int main() {

	vecteur<float> v1(1, 4.2);
	vecteur<int> v2 = vecteur<int>();

	cin >> v1;
	cout << v1 << endl;

	cin >> v2;
	cout << v2 << endl;




/*
//TD1//
  // Création des objets

  vector v2(6);
  vector v3(6,1.2);
  vector v4(v3);


//Afficher dim de v2
  std::cout <<"v2.dim ="<<v2.get_dim() <<"\n";

//Afficher v3
std::cout<<"\n";
std::cout <<"v3.dim ="<<v3.get_dim() <<"\n";
for (int i=0;i<v3.get_dim();i++){
  std::cout <<"v3["<<i << "]="<<v3.get_element(i)<<"\n";
}  

//Afficher v4 
std::cout<<"\n";
std::cout <<"v4.dim ="<<v4.get_dim() <<"\n";
for (int i=0;i<v4.get_dim();i++){
  std::cout <<"v4["<<i << "]="<<v4.get_element(i)<<"\n";
}  

//Test de la fonction set_element
std::cout<<"\n";
v3.set_elem(2,3.4);
std::cout<<"v3["<<2<<"]="<<v3.get_element(2)<<"\n";


// TD 2//

std::cout << "operateur d'affectation et d'indiçage \n";
vector vector_1(4), vector_2(4);
vector_1[0]=4;
vector_1[1]=7;
vector_1[2]=2;
std::cout << "vector_1[0] =  \n"<< vector_1.get_element(0)<<"\n";
std::cout << "vector_1[1] =  \n"<< vector_1.get_element(1)<<"\n";
std::cout << "vector_1[2] =  \n"<< vector_1.get_element(2)<<"\n";

std::cout<<"\n";
vector_2=vector_1;
std::cout << "vector_2[0] =  \n"<< vector_2.get_element(0)<<"\n";
std::cout << "vector_2[1] =  \n"<< vector_2.get_element(1)<<"\n";
std::cout << "vector_2[2] =  \n"<< vector_2.get_element(2)<<"\n";

std::cout << "Les vectors vector_1 et vector_2 sont bien égales"<<"\n";
//il manque la partie arithmétique

*/

}
