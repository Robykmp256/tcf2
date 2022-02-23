#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"



Categorie::Categorie (){
    cat.push_back(new Maglie);
    cat.push_back(new Pantaloni);
}

void Categorie::Elenco() const{     //Ti stampa l'elenco delle maglie

    for (int i=0; i<cat.size(); i++) {
        cat[i]->Elenco();
    }
}

bool Categorie::Selezione( int s) const{     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristiche
    double i = s/2.0; 		//dice a quale categoria fa riferimento
    cout<<i;
    if (i<=1){

        return cat[0]->Selezione(s);   //qua è troppo specifico ma non so come farlo generico
    }
    if(i>1 && i<=2){
        return cat[1]->Selezione(s-2);
    }
    return true;

}

string Categorie::Nome () const{

    for (int i=0; i<cat.size(); i++) {
        cout<< i-1 <<" - ";
        cat[i]->Nome();
        cout<<endl;
    }
}


