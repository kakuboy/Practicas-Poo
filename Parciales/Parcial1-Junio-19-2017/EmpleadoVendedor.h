#ifndef EMPLEADOVENDEDOR_H
#define EMPLEADOVENDEDOR_H
#include <iostream>
#include "Empleado.h"
#include <cstring>

using namespace std;

class EmpleadoVendedor:public Empleado
{
    int montoVendido=0;
public:
    EmpleadoVendedor();


    void setMontoVendido(int a);
    int getMontoVendido();
    int calcularSueldo();
};

#endif // EMPLEADOVENDEDOR_H
