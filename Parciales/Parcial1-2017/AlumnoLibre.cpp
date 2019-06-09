#include "AlumnoLibre.h"

void AlumnoLibre::setPregunta(bool a)
{
    this->pregunta = a;
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
