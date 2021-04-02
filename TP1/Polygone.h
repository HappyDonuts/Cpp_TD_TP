#ifndef POLYGONE_H
#define POLYGONE_H
#include "Figure.h"

class Polygone : public Figure {
    private :
        int nbCotes;

    public :
        
        Polygone(int nbCotes, string couleur);
        void afficherCaracteristiques();
        int getCotes();
    
};

#endif
