#include "AlumnoVocacional.h"

bool AlumnoVocacional::aprueba()
{
    if(notaFinal >= 70){
        return true;
    }
    else {
        return false;
    }
}
