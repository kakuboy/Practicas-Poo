#ifndef PROVINCIA_H
#define PROVINCIA_H
#include "Departamento.h"
#include <iostream>
#include <cstring>

using namespace std;

class Provincia
{
    Departamento *departamentos[50];
    int cant;
    char *nombre;
public:
    Provincia(char *nombre){
        this->nombre = new char[strlen(nombre)];
        strcpy(this->nombre,nombre);
    }
    Provincia(){}

    char *getNombreProvincia();
    int calcularHabitantes();
    void agregar(Departamento* a);
    void mostrar();

};

#endif // PROVINCIA_H
