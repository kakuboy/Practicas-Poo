#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Ciudad.h"
#include <iostream>
#include <cstring>

using namespace std;

class Departamento
{
    Ciudad *ciudades[30];
    int cant;
    char *nombre;
public:
    Departamento(char *nombre){
        this->nombre = new char[strlen(nombre)];
        strcpy(this->nombre,nombre);
    }
    Departamento(){}

    int calcularHabitantes();
    void agregar(Ciudad* a);
    void mostrar();
    char *getNombreDepartamento();
};

#endif // DEPARTAMENTO_H
