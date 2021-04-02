#include <iostream>
#include "Polygone.h"
using namespace std;

Polygone::Polygone(int nbCotes, string couleur) : Figure(couleur) {
    this->nbCotes = nbCotes;
}

void Polygone::afficherCaracteristiques(){  
    //cout << "Nombre de côtés : " << this->nbCotes;
}

int Polygone::getCotes(){
    return this->nbCotes;
}

