#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <cstring>

using namespace std;

class Empleado
{
protected:
    int cuil;
    char *nombre;
    char *apellido;
    int sueldoFijo;
public:
    Empleado(){}
    virtual ~Empleado(){}

    virtual int calcularSueldo()=0;

    int getCuil();
    char *getNombre();
    char *getApellido();
    int getSueldoFijo();
    void setCuil(int a);
    void setNombre(char *a);
    void setApellido(char *a);
    void setSueldoFijo(int a);
};

#endif // EMPLEADO_H
