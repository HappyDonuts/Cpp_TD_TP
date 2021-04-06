#include <iostream>
#include "Rectangle.h"
#include "Carre.h"
#include "TriangleEquilateral.h"
#include "Cercle.h"
#include "File.h"
using namespace std;

int main(){
    Rectangle rectangle_1(2, 4, "red");
    Carre carre_1(3, "blue");
    TriangleEquilateral triangle_eq_1(5, "green");
    Cercle cercle_1(1.6, "yellow");

    Figure *tab [3];
    
    tab[0] = &rectangle_1;
    tab[1] = &carre_1;          // Method 1 : addresse de carre_1
    tab[2] = new Cercle(4.3, "purple");   // Method 2 : nouveau cercle

    for (int i=0; i<3; i++){
        tab[i]->afficherCaracteristiques();
        tab[i]->perimetre();
    }
    cout << "N de figures : " << Figure::nFigures << endl;

    File<Figure*> figure_file;
    figure_file.add_cell(&rectangle_1);
    figure_file.add_cell(&carre_1);
    figure_file.display();
}

