#include "Figure.h"

int Figure::nFigures = 0;

Figure::Figure(string couleur) : Coloriable(couleur){
    nFigures++;
}
