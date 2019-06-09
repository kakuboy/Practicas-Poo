#include "Mueble.h"


double Mueble::amortizar()
{
    int diferencia = 2019 - this->anioCreacion;

    return this->valor * (diferencia * 0.05);
}

void Mueble::setAnioCreacion(int a)
{
    this->anioCreacion = a;
}

ostream& operator<<(ostream &o, const Mueble &obj)
{
    return o<<"Mueble: "<<obj.valor;
}
