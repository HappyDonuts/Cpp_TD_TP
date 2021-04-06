#ifndef CELLULE_H
#define CELLULE_H

#include <list>

template <typename T> class Cellule{
public:
	T data;
	Cellule* next_cell;

public:
	Cellule(T data, Cellule* next_cell);
};

//#include "Cellule.cpp"
template <typename T>
Cellule<T>::Cellule(T data, Cellule* next_cell) {
	this->data = data;
	this->next_cell = next_cell;
}

#endif