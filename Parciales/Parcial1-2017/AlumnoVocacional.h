#ifndef ALUMNOVOCACIONAL_H
#define ALUMNOVOCACIONAL_H
#include "Alumno.h"


class AlumnoVocacional:public Alumno
{
public:
    AlumnoVocacional(int dni):Alumno(dni){

    }

    bool aprueba();
};

#endif // ALUMNOVOCACIONAL_H
