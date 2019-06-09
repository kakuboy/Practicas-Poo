#ifndef CIUDAD_H
#define CIUDAD_H
#include <iostream>
#include <cstring>

using namespace std;

class Ciudad
{
protected:
    int cantHabitantes;
    char *nombre;

public:
    Ciudad(char *nombre){
        this->nombre = new char[strlen(nombre)];
        strcpy(this->nombre,nombre);
    }
    Ciudad(){}
    ~Ciudad(){}

    int getCantHabitantes();
    void setCantHabitantes(int cantHabitantes);
    char *getNombreCiudad();
};

#endif // CIUDAD_H
