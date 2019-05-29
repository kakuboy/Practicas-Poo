#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
protected:
    int dni;
    char *nombre;
    char *ape;
    int notaFinal;
public:
    Alumno(int dni){
        this->dni = dni;
    }
    Alumno(){}


    virtual ~Alumno()=0;
    virtual bool aprueba()=0;
};

#endif // ALUMNO_H
