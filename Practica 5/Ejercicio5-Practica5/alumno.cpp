#include "alumno.h"
#include "curso.h"

float Alumno::getNota1()
{
    return this->notas[0];
}

float Alumno::getNota2()
{
    return this->notas[1];
}

float Alumno::getNota3()
{
    return this->notas[2];
}

float Alumno::getNota4()
{
    return this->notas[3];
}

float Alumno::getDni()
{
    return this->dni;
}

char *Alumno::getNombre()
{
    return this->nombre;
}

void Alumno::setNota1(int nota)
{
    this->notas[0] = nota;
}

void Alumno::setNota2(int nota)
{
    this->notas[1] = nota;
}

void Alumno::setNota3(int nota)
{
    this->notas[2] = nota;
}

void Alumno::setNota4(int nota)
{
    this->notas[3] = nota;
}

void Alumno::setNombre(char *nombre)
{
    this->nombre = nombre;
}

float Alumno::promedio()
{
    float acu = 0;
    for (int i=0;i<4;i++) {
        acu += this->notas[i];
    }

    return acu/4;
}

/*void Alumno::seInscribe(Curso c)
{
    c.agregarAlumno(*this);
}*/
