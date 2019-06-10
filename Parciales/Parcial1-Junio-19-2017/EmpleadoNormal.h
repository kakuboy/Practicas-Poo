#ifndef EMPLEADONORMAL_H
#define EMPLEADONORMAL_H
#include <iostream>
#include "Empleado.h"
#include <cstring>

using namespace std;

class EmpleadoNormal:public Empleado
{
public:
    EmpleadoNormal();

    int calcularSueldo();
};

#endif // EMPLEADONORMAL_H
