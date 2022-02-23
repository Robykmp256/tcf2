#ifndef CATEGORIE_H
#define CATEGORIE_H


#include <string>
#include <vector>
using namespace std;

#include "Catalogo.h"

class Categorie : public Catalogo{
public:
    Categorie();
    virtual void Elenco() const;
    virtual bool Selezione(int) const;
    virtual string Nome () const;
private:
    vector <Catalogo *> cat;  //prendere magari in input il numero di prodotti?

};
#endif