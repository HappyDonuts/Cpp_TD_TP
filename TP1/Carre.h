#ifndef CARRE_H
#define CARRE_H
#include "Rectangle.h"

class Carre : public Rectangle {

    public :
        Carre(int longueur, string couleur);
        void afficherCaracteristiques();
};

#endif