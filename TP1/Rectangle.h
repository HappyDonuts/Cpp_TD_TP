#ifndef POLYGONE_H
#define POLYGONE_H
#include "Polygone.h"

class Rectangle : public Polygone {
    private :
        int longueur;
        int largeur;

    public :
        Rectangle(int longueur, int largeur);
        int perimetre();
        void afficherCaracteristiques();
        int getLargeur();
        int getLongueur();
};
#endif
