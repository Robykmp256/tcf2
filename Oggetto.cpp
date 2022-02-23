#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#include "Oggetto.h"
#include "carrello.h"

Oggetto::Oggetto( string titolo, int s){
    fstream file;                     //come prendere le righe da un file

    file.open(titolo.c_str(), ios::in);
    string riga;
    int i=0;
    int j=0;
    string risp;

    if(file.is_open()){
        while(file){
            getline(file,riga);
            if(j>=(s-1)*6 && j<=(s-1)*6+5){   //incrementa la i solo nel momento che mi trovo in corrispondenza del prodotto selezionato
                i++;

            }
            if(i==1){
                nome=riga;
            }
            if(i==3){
                cout<<" Selezionare un colore "<<endl;
                istringstream ss1(riga);  // ss e token sono nomi generici che posso scegliere io
                string token1;

                while(getline(ss1, token1, ' ')){
                    cout<<token1<<endl;   //qua posso caricarlo su un array
                }
                cin>>risp;
                colore=risp;
            }
            if(i==4){
                cout<<" Selezionare una taglia "<<endl;
                istringstream ss2(riga);  // ss e token sono nomi generici che posso scegliere io
                string token2;

                while(getline(ss2, token2, ' ')){
                    cout<<token2<<endl;   //qua posso caricarlo su un array
                }
                cin>>risp;
                taglia=risp;
            }
            if(i==5){
                prezzo=riga;
            }

            j++;
        }
        file.close();
    }
}