#ifndef CATALOGO_H
#define CATALOGO_H

#include <string>


class Catalogo{

public:
    virtual void Elenco() const =0;
    virtual bool Selezione(int) const =0;
    virtual std::string Nome() const =0;

};



#endif