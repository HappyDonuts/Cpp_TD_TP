#include "Carre.h"
#include <iostream>
using namespace std;
 
Carre::Carre(int longueur, string couleur) : Rectangle(longueur, longueur, couleur){ 
}

void Carre::afficherCaracteristiques(){
    cout << "Polygone - Carre" << endl;
    cout << "Longueur : " << getLongueur() << endl;
    cout << "Couleur : " << this->getCouleur() << endl;
}
