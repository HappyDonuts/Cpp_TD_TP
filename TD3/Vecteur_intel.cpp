#include "Vecteur_intel.h"


// affectation 
Vecteur_intel & Vecteur_intel::operator= (const Vecteur_intel & operande1){  
    int i;  
    if(dim != operande1.dim){    
        if (dim!=0) delete [] elements;    
        if(!(elements=new float[operande1.dim])){      
            cout << "erreur allocation \n";      
            exit(0);    
        }    
    dim=operande1.dim;  
    }  
    for (i=0;i<dim;i++){    
        elements[i]=operande1.elements[i];  
    }  
    return(*this);
}

// +=
Vecteur_intel & Vecteur_intel::operator+= (Vecteur_intel & operande){  
    int i;
    if (dim < operande.dim){    
        float * tab;    
        if(!(tab=new float[operande.dim])){      
            cout << "erreur allocation \n";      
            exit(0);    
        }    
        for (i=0;i<dim;i++) tab[i]=operande.elements[i]+elements[i];    
        for (i=dim;i<operande.dim;i++) tab[i]=operande.elements[i];    
        delete [] elements;    
        elements=tab;    
        dim=operande.dim;   
    } else { 
        for (i=0;i<operande.dim;i++) elements[i]+=operande.elements[i];  
    }
    return (*this);
}

Vecteur_intel  operator + (Vecteur_intel & operande1, Vecteur_intel & operande2){  
    Vecteur_intel temp_vect(operande1);  
    return(temp_vect += operande2);}