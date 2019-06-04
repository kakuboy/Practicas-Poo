#include "Rodado.h"


double Rodado::amortizar()
{
    int por = this->km / 1000;

    return this->valor * ((0.1) * por);
}

void Rodado::setKm(int a)
{
    this->km = a;
}

ostream& operator<<(ostream &o, const Rodado &obj)
{
    return o<<"Rodado: "<<obj.valor;
}
