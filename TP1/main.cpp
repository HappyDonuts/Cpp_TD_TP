#include <iostream>
#include "Rectangle.h"
#include "Carre.h"
using namespace std;

int main(){
    Rectangle rectangle_1(2, 4);
    Carre carre_1(3);

    rectangle_1.afficherCaracteristiques();
    cout << "Perimetre de rectangle_1 : " << rectangle_1.perimetre() << endl;

    carre_1.afficherCaracteristiques();
    cout << "Perimetre de carre_1 : " << carre_1.perimetre() << endl;
}
