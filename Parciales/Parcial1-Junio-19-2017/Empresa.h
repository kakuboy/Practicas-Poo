#ifndef EMPRESA_H
#define EMPRESA_H
#include <iostream>
#include "Empleado.h"
#include <cstring>

using namespace std;

class Empresa
{
    Empleado *empleados[50];
    char *nombreEmpresa;
    int cant;
public:
    Empresa();

    void mostrarDatos();
    void setNombreEmpresa(char *a);
    void agregarEmpleado(Empleado *a);
};

#endif // EMPRESA_H
