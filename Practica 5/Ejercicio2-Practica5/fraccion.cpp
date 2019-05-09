#include "fraccion.h"

Fraccion &Fraccion::operator +(const Fraccion &frac)
{
    //(num1*den2+num2*den1)/(den1*den2);
    this->numerador = (this->numerador*frac.denominador)+(frac.numerador*this->denominador);
    this->denominador = (this->denominador*frac.denominador);

    return *this;
}

void Fraccion::mostrar()
{
    cout<<"Total: "<<this->numerador<<"/"<<this->denominador;
}
