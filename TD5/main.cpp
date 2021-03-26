#include <iostream>
#include "Vecteur.h"
using namespace std;

int main()
{
    Vecteur v1(3);
    Vecteur v2(4);
    

    try {
        //v1 = v2;
        cout << v1[5];
    } catch(int e) {
        if (e == ERREUR_DIM) {
            cerr << "Erreur : Dimension incompatible";
        } else if (e == ERREUR_INDICE) {
            cerr << "Erreur : Indice incompatible";
        }
    }
}

