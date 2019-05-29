#ifndef CURSO_H
#define CURSO_H
#include "Alumno.h"
#include <cstring>
#include <iostream>

using namespace std;


class Curso
{
private:
    Alumno *alumnos[30];
    char *nombre;
    int cantAlumnos;
public:
    Curso(char *nombre){
        this->nombre = nombre;
    }

    void mostrarCondiciones();
    void mostrarMails();
    void agregarAlumno(Alumno *a);
};

#endif // CURSO_H
