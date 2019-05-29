#include "Curso.h"


void Curso::mostrarCondiciones()
{
    for (int i=0;i<this->cantAlumnos;i++) {
        if(this->alumnos[i]->aprueba()){
            cout<<this->alumnos[i]->getNombre()<<" "<<this->alumnos[i]->getApellido()<<" "<<this->alumnos[i]->aprueba()<<endl;
        }
        else {
            cout<<this->alumnos[i]->getNombre()<<" "<<this->alumnos[i]->getApellido()<<" "<<this->alumnos[i]->aprueba()<<endl;
        }
    }
}

void Curso::agregarAlumno(Alumno *a)
{
    this->alumnos[this->cantAlumnos] = a;
    this->cantAlumnos++;
}
