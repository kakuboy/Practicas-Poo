#include "curso.h"

char *Curso::getNombre()
{
    return this->nombre;
}

void Curso::agregarAlumno(Alumno a)
{
    this->alumnos[this->nroAlumnosCargados] = a;
    this->nroAlumnosCargados++;
}

void Curso::mostrarAlumnos()
{
    for (int i=0;i<this->nroAlumnosCargados;i++) {
        cout<<this->alumnos[i].getNombre()<<" "<<this->alumnos[i].promedio()<<endl;
    }
}
