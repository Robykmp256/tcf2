#ifndef MENU_H
#define MENU_H

#include <string>
#include "Catalogo.h"
#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
using namespace std;


class Menu{

public:
    Menu();
    void No() const;
    void Si() const;
private:
    Catalogo *ma;
    Catalogo *pa;
    Catalogo *lista;

};



#endif