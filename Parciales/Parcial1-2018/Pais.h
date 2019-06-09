#ifndef PAIS_H
#define PAIS_H
#include "Provincia.h"
#include <iostream>
#include <cstring>

using namespace std;

class Pais
{
    Provincia *provincias[23];
public:
    Pais();

    int calcularHabitantes();
    void mostrarDatos();
};

#endif // PAIS_H
