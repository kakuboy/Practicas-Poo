#include "Bien.h"

Bien::Bien()
{
    this->valor = 0.0;
}

void Bien::setValor(double a)
{
    this->valor = a;
}

ostream& operator<<(ostream &o, const Bien &obj)
{
    return o<<"Bien: "<<obj.valor;
}
