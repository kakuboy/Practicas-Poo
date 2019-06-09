#ifndef MUEBLE_H
#define MUEBLE_H
#include <iostream>
#include "Bien.h"

using namespace std;

class Mueble:public Bien
{
protected:
    int anioCreacion = 1900;
public:
    Mueble(int anioCreacion){
        this->anioCreacion = anioCreacion;
    }

    double amortizar();
    void setAnioCreacion(int a);
    friend ostream& operator<<(ostream& o, const Mueble& obj);
};

#endif // MUEBLE_H
