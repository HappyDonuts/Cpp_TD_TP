#include "Carre.h"
#include <iostream>
using namespace std;
 
Carre::Carre(int longueur) : Rectangle(longueur, longueur){ 
}

void Carre::afficherCaracteristiques(){
    cout << "Polygone - Carre" << endl;
    cout << "Longueur : " << getLongueur() << endl;
}
