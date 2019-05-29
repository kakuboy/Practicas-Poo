#include "AlumnoNormal.h"


void AlumnoNormal::setNombre(char *nom)
{
    Alumno::nombre = nom;
}

void AlumnoNormal::setApellido(char *apellido)
{
    Alumno::ape = apellido;
}

void AlumnoNormal::setNotas(int nota1, int nota2, int nota3)
{
    notas1 = nota1;
    notas2 = nota2;
    notas3 = nota3;
}

void AlumnoNormal::setNotaFinal(int nFinal)
{
    Alumno::notaFinal = nFinal;
}

char *AlumnoNormal::getNombre()
{
    return Alumno::nombre;
}

double AlumnoNormal::calcularPromedios()
{
    double promedio=0;

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
