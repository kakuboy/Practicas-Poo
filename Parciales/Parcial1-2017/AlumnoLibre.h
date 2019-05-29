#ifndef ALUMNOLIBRE_H
#define ALUMNOLIBRE_H
#include "Alumno.h"


class AlumnoLibre:public Alumno
{
public:
    AlumnoLibre();

    bool aprueba();
    bool preguntas();

};

#endif // ALUMNOLIBRE_H
