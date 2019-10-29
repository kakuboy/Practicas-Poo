#include "Empleado.h"

Empleado::Empleado()
{

}
char *Empleado::getNom() const
{
    return nom;
}

char *Empleado::getApe() const
{
    return ape;
}

char *Empleado::getDni() const
{
    return dni;
}

float Empleado::getHorasTot() const
{
    return horasTot;
}

void Empleado::setHorasTot(float value)
{
    horasTot = value;
}


