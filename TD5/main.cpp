#include <iostream>
#include "Vecteur.h"
using namespace std;

int main()
{
    Vecteur v1(3, 2);
    Vecteur v2(4);
    Vecteur v3(3);
    
    v3 = multiplication(3, v1);
    cout << "3*v1 = " << v3[0] << " " << v3[1] << " " << v3[2] << endl;

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

