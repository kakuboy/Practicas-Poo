#include "AlumnoLibre.h"



void AlumnoLibre::setPregunta(bool a)
{
    this->pregunta = a;
}

void AlumnoLibre::setNombre(char *a)
{
    Alumno::nombre = a;
}

void AlumnoLibre::setApellido(char *a)
{
    Alumno::ape = a;
}

void AlumnoLibre::setNotaFinal(int nFinal)
{
    Alumno::notaFinal = nFinal;
}

bool AlumnoLibre::aprueba()
{
    if(notaFinal >= 70 && preguntas()){
        return true;
    }
    else {
        return false;
    }
}

bool AlumnoLibre::preguntas()
{
    if(pregunta){
        return true;
    }
    else {
        return false;
    }
}
