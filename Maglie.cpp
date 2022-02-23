#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Maglie.h"
#include "Oggetto.h"



Maglie::Maglie (){
    nome = " Maglie";
    fstream file;
    file.open("Maglie.txt");
    string maglie;
    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, maglie);
            if (i%6==0){
                prodotti.push_back(maglie);
                //cout<<maglie<<" "<<i<<endl;    //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }

        }
        file.close();
    }
}

void Maglie::Elenco() const{     //Ti stampa l'elenco delle maglie
    for( int i=0; i<prodotti.size()-1; i++){
        cout<<i+1<<" - "<<prodotti[i]<<endl;
    }
}

bool Maglie::Selezione( int s) const{     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristiche
    fstream file;
    file.open("Maglie.txt");
    string maglie;

    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, maglie);
            if(i>=(s-1)*6 && i<=(s-1)*6+5){
                cout<<maglie<<endl;     		//STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }
        }
        file.close();
    }
    cout<<" Aggiungere al carrello? No vuol dire tornare indietro"<<endl<<"S/N"<<endl;
    string risp;
    cin>>risp;
    if(risp=="n" || risp=="N"){     //con false torna indietro
        return false;
    }
    if(risp== "s" || risp=="S"){   //con true crea l'oggetto e lo aggiunge al carrello
        Oggetto * og = new Oggetto ("Maglie.txt",s);
        return true;
    }
    return false;
}

string Maglie::Nome () const{
    return nome;
}


