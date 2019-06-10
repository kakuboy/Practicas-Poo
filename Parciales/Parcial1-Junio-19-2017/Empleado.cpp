#include "Empleado.h"

int Empleado::getCuil()
{
    return this->cuil;
}

char *Empleado::getNombre()
{
    return this->nombre;
}

char *Empleado::getApellido()
{
    return this->apellido;
}

int Empleado::getSueldoFijo()
{
    return this->sueldoFijo;
}

void Empleado::setCuil(int a)
{
    this->cuil = a;
}

void Empleado::setNombre(char *a)
{
    this->nombre = new char[strlen(a)];
    strcpy(this->nombre,a);
}

void Empleado::setApellido(char *a)
{
    this->apellido = new char[strlen(a)];
    strcpy(this->apellido,a);
}

void Empleado::setSueldoFijo(int a)
{
    this->sueldoFijo = a;
}
