#ifndef ALUMNONORMAL_H
#define ALUMNONORMAL_H
#include "Alumno.h"


class AlumnoNormal:public Alumno
{
private:
    int notas1;
    int notas2;
    int notas3;
public:
    AlumnoNormal(int dni) : Alumno(dni){}

    void setNotas(int nota1,int nota2,int nota3);

    double calcularPromedios();
    bool aprueba();
};

#endif // ALUMNONORMAL_H
