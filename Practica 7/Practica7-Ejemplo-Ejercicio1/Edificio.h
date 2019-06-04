#ifndef EDIFICIO_H
#define EDIFICIO_H
#include <iostream>
#include "Bien.h"

using namespace std;

class Edificio:public Bien
{
protected:
    int anioCreacion = 1900;
public:
    Edificio(int anioCreacion){
        this->anioCreacion = anioCreacion;
    }

    double amortizar();
    void setAnioCreacion(int a);
    friend ostream& operator<<(ostream& o, const Edificio& obj);

};

#endif // EDIFICIO_H
