#include "TriangleEquilateral.h"
#include <iostream>
using namespace std;

TriangleEquilateral::TriangleEquilateral(int longueur, string couleur) : Polygone(3, couleur){ 
    this->longueur = longueur;
}

int TriangleEquilateral::perimetre() {
   return 3*(this->longueur);
}

int TriangleEquilateral::getLongueur(){
    return this->longueur;
}

void TriangleEquilateral::afficherCaracteristiques(){
    cout << "Polygone - Triangle Equilateral" << endl;
    cout << "Longueur : " << getLongueur() << endl;
    cout << "Couleur : " << this->getCouleur() << endl;
}
