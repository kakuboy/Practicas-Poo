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
    juan->setApellido("Iudica");
    juan->setNotas(60,60,60);
    juan->setNotaFinal(70);
    AlumnoNormal *pedro = new AlumnoNormal(7373733);
    pedro->setNombre("Pedro");
    pedro->setApellido("Garcia");
    pedro->setNotas(20,40,30);
    pedro->setNotaFinal(50);
    AlumnoVocacional *mariano = new AlumnoVocacional(40404033);
    mariano->setNombre("Mariano");
    mariano->setApellido("Udin");
    mariano->setNotaFinal(80);


    unCurso->agregarAlumno(juan);
    unCurso->agregarAlumno(pedro);
    unCurso->agregarAlumno(mariano);


    unCurso->mostrarCondiciones();


    return 0;
}
