#ifndef CELLULE_H
#define CELLULE_H

#include <list>

template <typename T> class Cellule {
    private:
        T cell;
        T *next_cell;
    public:
        Cellule(T cell, T *next_cell);
};

//#include "Cellule.cpp"
template <typename T>
Cellule<T>::Cellule(T cell, T *next_cell){
    this->cell = cell;
    this->next_cell = next_cell;
}
#endif