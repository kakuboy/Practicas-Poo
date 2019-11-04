#include "Empleado.h"

char *Empleado::getNombre() const
{
    return nombre;
}

void Empleado::setNombre(char *value)
{
    nombre = value;
}

char *Empleado::getApellido() const
{
    return apellido;
}

void Empleado::setApellido(char *value)
{
    apellido = value;
}

int Empleado::getHoras() const
{
    return horas;
}

char *Empleado::getFecha() const
{
    return fecha;
}

void Empleado::setFecha(char *value)
{
    fecha = value;
}

void Empleado::setHoras(int value)
{
    horas = value;
}

char *Empleado::getDni() const
{
    return dni;
}

void Empleado::setDni(char *value)
{
    dni = value;
}
