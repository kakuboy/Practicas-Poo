#include "AlumnoNormal.h"

void AlumnoNormal::setNotas(int nota1, int nota2, int nota3)
{
    notas1 = nota1;
    notas2 = nota2;
    notas3 = nota3;
}

double AlumnoNormal::calcularPromedios()
{
    double promedio=0.0;

    return promedio = (notas1+notas2+notas3)/3;
}

bool AlumnoNormal::aprueba()
{
    if(calcularPromedios() >= 60 && notaFinal >= 60){
        return true;
    }
    else {
        return false;
    }
}
