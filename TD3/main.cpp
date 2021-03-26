#include <iostream>
#include "Vecteur_intel.h"
using namespace std;

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