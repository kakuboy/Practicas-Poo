#include "Alumno.h"

Alumno::~Alumno()
{

}

char *Alumno::getNombre() const
{
    return nombre;
}

char *Alumno::getApellido() const
{
    return ape;
}

void Alumno::setNombre(char *nom)
{
    nombre = new char[strlen(nom)];
    strcpy(nombre, nom);
}

void Alumno::setApellido(char *apellido)
{
    ape = new char[strlen(apellido)];
    strcpy(ape, apellido);
}

void Alumno::setNotaFinal(int nota)
{
    notaFinal = nota;
}
