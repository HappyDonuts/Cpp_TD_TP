#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygone.h"

class Rectangle : public Polygone {
    private :
        int longueur;
        int largeur;

    public :
        Rectangle(int longueur, int largeur, string couleur);
        int perimetre();
        void afficherCaracteristiques();
        int getLargeur();
        int getLongueur();
};
#endif
