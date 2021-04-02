#include <iostream>
#include "Cercle.h"
using namespace std;

#define PI 3.14159

Cercle::Cercle(float radius, string couleur) : Figure(couleur) {
    this->radius = radius;
}

void Cercle::afficherCaracteristiques(){  
    cout << "Figure - Cercle : " << endl;
    cout << "Radius : " << this->radius << endl;
    cout << "Couleur : " << this->getCouleur() << endl;
}

float Cercle::getRadius(){
    return this->radius;
}

int Cercle::perimetre(){
    return 2*PI*getRadius();
}

