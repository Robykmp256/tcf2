#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Menu.h"

Menu::Menu(){
    ma = new Maglie;
    pa = new Pantaloni;
    lista = new Categorie;
}

void Menu::No()const{
    int risposta;
    bool scelta;
    do{

        cout<<" Selezionare un prodotto tra i seguenti per vedere i dettagli: "<<endl;
        lista->Elenco();   //mostra gli elementi di quella categoria
        cin>>risposta;
        //system ("cls");
        scelta= lista->Selezione(risposta);   //mostra le caratteristiche dell'o	 ggetto scelto e chiede se vuole aggiungerlo al carrello
        //in teoria qua dovrebbe creare l'oggetto e aggiungerlo al carrello
        //system ("cls");
    }while(!scelta);
}




void Menu::Si()const{
    vector <Catalogo *> vet(2); //creo un vettore con le varie categorie
    vet[0]= ma;
    vet[1]= pa;
    bool scelta;

    do{
        cout<<"Le categorie sono le seguenti, selezionarne una: "<<endl; //
        for (int i= 0; i <vet.size(); i++){
            cout<<i+1<<" - "<< vet[i]->Nome()<<endl;

        }
        int a;
        cin>>a;
        //system ("cls");
        cout<<" Selezionare un prodotto tra i seguenti prodotti per vedere i dettagli: "<<endl;

        vet[a-1]->Elenco();   //mostra gli elementi di quella categoria
        int b;
        cin>>b;
        //system ("cls");
        scelta= vet[a-1]->Selezione(b);   //mostra le caratteristiche dell'oggetto scelto e chiede se vuole aggiungerlo al carrello
        //in teoria qua dovrebbe creare l'oggetto e aggiungerlo al carrello
    }while(!scelta);

}