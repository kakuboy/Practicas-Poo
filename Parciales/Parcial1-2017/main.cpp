#include <iostream>
#include "Alumno.h"
#include "Curso.h"
#include "AlumnoNormal.h"
#include "AlumnoLibre.h"
#include "AlumnoVocacional.h"


using namespace std;

int main()
{
    Curso *unCurso = new Curso("POO");

    AlumnoNormal *juan = new AlumnoNormal(40404040);
    juan->setNombre("Juan");
    juan->setNotas(60,60,60);
    juan->setNotaFinal(70);

    unCurso->agregarAlumno(juan);
    unCurso->mostrarCondiciones();


    return 0;
}
