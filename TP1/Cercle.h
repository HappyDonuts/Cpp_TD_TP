#ifndef CERCLE_H
#define CERCLE_H
#include "Figure.h"

class Cercle : public Figure {
    private :
        float radius;

    public :
        
        Cercle(float radius, string couleur);
        void afficherCaracteristiques();
        int perimetre();
        float getRadius();
    
};

#endif
