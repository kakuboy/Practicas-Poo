#ifndef EMPRESA_H
#define EMPRESA_H
#include <vector>
#include <algorithm>
#include <iostream>
#include "Empleado.h"
#include <fstream>
#include <cstring>

using namespace std;

struct EmpleadoE{
    char* dni = new char[8];
    char* nombre = new char[200];
    char* apellido = new char[200];
};

struct EmpleadoHora{
    char* dni = new char[8];
    int horas;
    char* fecha = new char[8];
};

class Empresa
{
    vector<Empleado*> empleados;
public:
    Empresa(){

    }

    void leerArchivo();
    void escribirArchivo();
    void mostrarEmpleadoMasYMenos();
};

#endif // EMPRESA_H
