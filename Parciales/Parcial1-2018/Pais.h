#ifndef PAIS_H
#define PAIS_H
#include "Provincia.h"
#include <iostream>
#include <cstring>

using namespace std;

class Pais
{
    Provincia *provincias[23];
    int cant;
    char *nombre;
public:
    Pais(char *nombre){
        this->nombre = new char[strlen(nombre)];
        strcpy(this->nombre,nombre);
    }

    int calcularHabitantes();
    void agregar(Provincia *a);
    void mostrarDatos();
};

#endif // PAIS_H
