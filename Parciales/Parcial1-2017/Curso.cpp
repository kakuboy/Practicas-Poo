#include "Curso.h"

void Curso::mostrarCondiciones()
{
    for (int i=0;i<this->cantAlumnos;i++) {
        cout<<this->alumnos[i]->aprueba();
    }
}

void Curso::agregarAlumno(Alumno *a)
{
    this->alumnos[this->cantAlumnos] = a;
    this->cantAlumnos++;
}
