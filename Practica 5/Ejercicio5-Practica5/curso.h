#ifndef CURSO_H
#define CURSO_H

#include "alumno.h"
#include <iostream>

using namespace std;

class Curso
{
    char *nombre;
    Alumno alumnos[20];
    int nroAlumnosCargados = 0;
public:
    Curso(char *nombre){
    this->nombre = nombre;
    }

    char *getNombre(); //Getter del nombre
    void agregarAlumno(Alumno a); //Agrega Alumnos
    void mostrarAlumnos(); //Muestra Alumnos
};

#endif // CURSO_H
