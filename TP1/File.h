#ifndef FILE_H
#define FILE_H

#include "Cellule.h"

template <typename T> class File {

protected:
	Cellule <T>* first_cell; //pointeur sur le premier
	Cellule <T>* last_cell;	//pointeur sur le dernier
	Cellule <T>* index_cell;  //pointeur sur position actuelle
	int nb_cell; //nombre de cellules dans la file

public:
	File();
	void add_cell(T data);
	void display();
};

template <typename T>
File<T>::File() {
	this->nb_cell = 0;
    this->first_cell = NULL;
}

template <typename T>
void File<T>::add_cell(T data) {
	Cellule<T>* cell = new Cellule<T>(data, NULL);
	if (this->first_cell == NULL) {
		this->last_cell = cell;
		this->first_cell = cell;
		this->index_cell = this->first_cell;
	} else {
		this->last_cell->next_cell = cell;
		this->last_cell = cell;
	}
}

template <typename T>
void File<T>::display() {
	this->index_cell = this->first_cell;
	while (this->index_cell != NULL) {
		this->index_cell->data->afficherCaracteristiques();
        cout << "----------" << endl;
		this->index_cell = this->index_cell->next_cell;
	}
	cout << endl;
}
#endif