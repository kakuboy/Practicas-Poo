#ifndef CIUDAD_H
#define CIUDAD_H
#include <iostream>
#include <cstring>
#include <ctype.h>

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

    friend ostream& operator <<(ostream& o, Ciudad *a){
        char *aux = new char[strlen(a->getNombreCiudad())];
        strncpy(aux,a->getNombreCiudad(),3);
        toUpper(aux);
        o<<aux;

        return o;
    }

    static char* toUpper(char* string)
    {
        char* sv = string;
        while(*sv++ != '\0')
        {
            if( int(*sv) >= 97 && int(*sv) <= 122)  //Only if it's a lower letter
                *sv = char( *sv - 32);
        }
        return string;
    }
};

#endif // CIUDAD_H
