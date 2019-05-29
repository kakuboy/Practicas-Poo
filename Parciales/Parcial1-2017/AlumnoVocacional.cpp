#include "AlumnoVocacional.h"



void AlumnoVocacional::setNombre(char *nom)
{
    Alumno::nombre = nom;
}

void AlumnoVocacional::setApellido(char *apellido)
{
    Alumno::ape = apellido;
}

void AlumnoVocacional::setNotaFinal(int nFinal)
{
    Alumno::notaFinal = nFinal;
}

bool AlumnoVocacional::aprueba()
{
    if(notaFinal >= 70){
        return true;
    }
    else {
        return false;
    }
}
