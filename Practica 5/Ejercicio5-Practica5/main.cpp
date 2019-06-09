/*5. Realice un software que permita mantener las notas de los alumnos del curso y conocer su
promedio. Note que cada alumno va tener 4 notas y un curso contiene 20 alumnos.
*/
#include <iostream>
#include "curso.h"
#include "alumno.h"

using namespace std;

int main()
{
    Alumno pedro(2550722);
    pedro.setNota1(2.20);
    pedro.setNota2(4.3);
    pedro.setNota3(1.50);
    pedro.setNota4(0.80);
    pedro.setNombre("Pedro");

    Alumno juan(43334022);
    juan.setNota1(0.60);
    juan.setNota2(1.60);
    juan.setNota3(2.40);
    juan.setNota4(3.80);
    juan.setNombre("Juan");

    Alumno marcos(595200);
    marcos.setNota1(0.60);
    marcos.setNota2(1.60);
    marcos.setNota3(2.20);
    marcos.setNota4(3.80);
    marcos.setNombre("Marcos");

    Curso curso("POO");
    curso.agregarAlumno(pedro);
    curso.agregarAlumno(juan);
    curso.agregarAlumno(marcos);
    curso.mostrarAlumnos();





    return 0;
}
