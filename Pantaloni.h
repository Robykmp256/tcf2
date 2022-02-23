#ifndef PANTALONI_H
#define PANTALONI_H


#include <string>
#include <vector>
using namespace std;

#include "Catalogo.h"

class Pantaloni: public Catalogo{

public:
    Pantaloni();
    virtual void Elenco() const;
    virtual bool Selezione(int) const;
    virtual string Nome () const;
private:
    vector <string> prodotti;  //prendere magari in input il numero di prodotti?
    string nome ;
};

#endif
