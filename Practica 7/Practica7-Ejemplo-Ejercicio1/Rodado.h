#ifndef RODADO_H
#define RODADO_H
#include <iostream>
#include "Bien.h"

using namespace std;

class Rodado:public Bien
{
protected:
    int km=0;
public:
    Rodado(int km){
        this->km = km;
    }
    Rodado(){}

    double amortizar();
    void setKm(int a);
    friend ostream& operator<<(ostream& o, const Rodado& obj);
};

#endif // RODADO_H
