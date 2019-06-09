#ifndef CURSO_H
#define CURSO_H
#include "Alumno.h"
#include <cstring>
#include <iostream>

using namespace std;


class Curso
{
public:
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

    //No estoy seguro de que anda
 //   friend ostream& operator << (ostream& o, Alumno* a){
   //     o<<a->getNombre()<<" "<<a->getApellido()<<endl;
     //   return o;
   // }
};

#endif // CURSO_H
