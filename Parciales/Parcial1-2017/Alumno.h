#ifndef ALUMNO_H
#define ALUMNO_H
#include <cstring>
#include <iostream>

using namespace std;


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

    char *getNombre() const;
    char *getApellido() const;
    void setNombre(char *nom);
    void setApellido(char *apellido);
    void setNotaFinal(int nota);

    virtual ~Alumno()=0;
    virtual bool aprueba()=0;

    friend ostream& operator << (ostream& o, const Alumno* a){
        o<<a->getNombre()<<" "<<a->getApellido()<<endl;
        return o;
    }
};

#endif // ALUMNO_H
