#include <iostream>
#include "Alumno.h"
#include "Curso.h"
#include "AlumnoNormal.h"
#include "AlumnoLibre.h"
#include "AlumnoVocacional.h"
#include "AlumnoEspecial.h"


using namespace std;

/*ostream& operator << (ostream& o, Alumno* a){
    o<<a->getNombre()<<" "<<a->getApellido()<<endl;
    return o;
}*/

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

    AlumnoLibre *flor = new AlumnoLibre(404040402);
    flor->setPregunta(0);
    flor->setNombre("Florencia");
    flor->setApellido("Rios");
    flor->setNotaFinal(70);

    unCurso->agregarAlumno(juan);
    unCurso->agregarAlumno(pedro);
    unCurso->agregarAlumno(mariano);
    unCurso->agregarAlumno(flor);

    unCurso->mostrarCondiciones();
    unCurso->mostrarMails();

    cout<<"---------------------------------------------"<<endl;
     for (int i=0;i<unCurso->cantAlumnos;i++)
         cout << unCurso->alumnos[i] << endl;

    cout<<"---------------------------------------------"<<endl;

    AlumnoEspecial martin;
    martin.agregarNotas(60);
    martin.agregarNotas(70);
    martin.agregarNotas(70);
    martin.agregarNotas(50);
    martin.agregarNotas(70);
    martin.agregarNotas(50);

    martin.mostrarNotas();
    martin.eliminarNota(3);
    martin.mostrarNotas();
    martin.eliminarNota(0);
    martin.mostrarNotas();

    return 0;
}
