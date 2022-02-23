

#ifndef SHOPPING_CARRELLO_H
#define SHOPPING_CARRELLO_H
#include <string>
#include <vector>
#include "Oggetto.h"
using std::vector;
using namespace std;
class carrello {
public:
    carrello(const Oggetto&) ;
    void aggiungi();
    void stampa();
    void rimuovi();
    void somma();

private:
    vector <Oggetto*> car;
     const Oggetto prod;


};


#endif //SHOPPING_CARRELLO_H
