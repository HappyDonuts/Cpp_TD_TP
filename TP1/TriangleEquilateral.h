#ifndef TRIANGLEEQUILATERAL_H
#define TRIANGLEEQUILATERAL_H
#include "Polygone.h"

class TriangleEquilateral : public Polygone {
    private :
        int longueur;

    public :
        TriangleEquilateral(int longueur, string couleur);
        int perimetre();
        void afficherCaracteristiques();
        int getLongueur();
};
#endif
