#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>

#include "Maglie.h"
#include "Pantaloni.h"
#include "Categorie.h"
#include "Menu.h"
#include <cstdlib>
#include<Windows.h>
#include"Oggetto.h"
#include "carrello.h"

using namespace std;




int main() {
    int risposta;  //variabile usata per salvare le risposte dell'utente

    cout << "Benvenuto!";
    cout << " Vuole vedere l'intero catalogo o sfogliarlo per categoria?" << endl << "1 - Intero catalogo" << endl
         << "2 - per categoria" << endl;

    cin >> risposta;
    system("cls");

    while ((risposta != 1) && (risposta != 2)) {

        cout << "risposta non valida, inserire nuovamente!!" << endl;  //problema, se metti una lettera impazzisce
        cin >> risposta;
    }
    int rispo = 1;
    Menu m;

    while (rispo == 1) {
        if (risposta == 1) {
            m.No();
        }else{
            m.Si();
            Oggetto o(string,int);
            carrello c(o);

            c.aggiungi();
            cout << "1-Torna al catalogo" << endl;
            cout << "2-Termina" << endl;
            cin >> rispo;
            while ((rispo != 1) && (rispo != 2)) {

                cout << "risposta non valida, inserire nuovamente!!"
                     << endl;  //problema, se metti una lettera impazzisce
                cin >> rispo;
                risposta=1;

            }
        }
    }
c.stampa();
    while(rispo==2){
    cout << "1 conferma ordine" << endl;
    cout << "2 elimina un elemento dal carrello" << endl;
    cin>>rispo;
    if(rispo==2) {
        c.rimuovi();
        c.stampa();
    }
    }
    return 0;
}