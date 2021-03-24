#ifndef FIGURE_H
#define FIGURE_H
#include "Figure.h"

class Polygone : public Figure {
    private :
        int nbCotes;

    public :
        
        Polygone(int nbCotes);
        void afficherCaracteristiques();
        int getCotes();
    
};

#endif
