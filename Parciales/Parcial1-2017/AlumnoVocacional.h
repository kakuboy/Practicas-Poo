#ifndef ALUMNOVOCACIONAL_H
#define ALUMNOVOCACIONAL_H
#include "Alumno.h"


class AlumnoVocacional:public Alumno
{
public:
    AlumnoVocacional(int dni):Alumno(dni){

    }

    void setNombre(char *nombre);
    void setApellido(char *ape);
    void setNotaFinal(int nFinal);

    bool aprueba();
};

#endif // ALUMNOVOCACIONAL_H
