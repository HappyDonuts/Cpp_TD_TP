#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int longueur, int largeur, string couleur) : Polygone(4, couleur){ 
    this->longueur = longueur;
    this->largeur = largeur;
}

int Rectangle::perimetre() {
   return 2*(this->largeur + this->longueur);
}

int Rectangle::getLargeur(){
    return this->largeur;
}

int Rectangle::getLongueur(){
    return this->longueur;
}

void Rectangle::afficherCaracteristiques(){
    cout << "Polygone - Rectangle" << endl;
    cout << "Largeur : " << getLargeur() << endl;
    cout << "Longueur : " << getLongueur() << endl;
    cout << "Couleur : " << this->getCouleur() << endl;
}
