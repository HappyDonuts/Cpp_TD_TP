#include <string>
using namespace std;

class Coloriable {
    protected :
        string couleur;
    public :
        Coloriable(string coul){
            couleur=coul;
        }
        string getCouleur(){
            return couleur;
        }
        void setCouleur(string coul){
            couleur=coul;
        }
};
