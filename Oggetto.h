#ifndef OGGETTO_H
#define OGGETTO_H

#include <string>
using namespace std;


class Oggetto{

public:
    Oggetto(string,int);
private:
    string nome;
    string prezzo;
    string taglia;
    string colore;


};



#endif