#ifndef FIGURE_H
#define FIGURE_H

#include "Coloriable.cpp"

class Figure : public Coloriable {
  public :
    static int nFigures;
    Figure(string couleur);
    virtual int perimetre() = 0;
    virtual void afficherCaracteristiques() = 0;

};

#endif