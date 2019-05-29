#ifndef ALUMNOLIBRE_H
#define ALUMNOLIBRE_H
#include "Alumno.h"


class AlumnoLibre:public Alumno
{
private:
    bool pregunta = true;
public:
    AlumnoLibre(int dni):Alumno(dni){}

    void setPregunta(bool a);
    void setNombre(char *a);
    void setApellido(char *a);
    void setNotaFinal(int nFinal);

    bool aprueba();
    bool preguntas();

};

#endif // ALUMNOLIBRE_H
