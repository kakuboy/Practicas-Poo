#include "Edificio.h"



double Edificio::amortizar()
{
    int diferencia = 2019 - this->anioCreacion;

    return this->valor *(diferencia * 0.04);
}

void Edificio::setAnioCreacion(int a)
{
    this->anioCreacion = a;
}

ostream& operator<<(ostream &o, const Edificio &obj)
{
    return o<<"Edificio: "<<obj.valor;
}
