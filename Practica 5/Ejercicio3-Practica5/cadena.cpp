#include "cadena.h"
#include <string.h>



int Cadena::getCant()
{
    return this->cant - 1;
}

char *Cadena::getCadena()
{
    return this->cadena;
}

Cadena Cadena::convertirMayuscula()
{
    char * palabraMayuscula = new char[this->cant];
    for(int i=0; i<this->cant; i++) {
        if(this->cadena[i] >= 'a' && this->cadena[i] <= 'z') {
            palabraMayuscula[i] = this->cadena[i] - 32;
        } else {
            palabraMayuscula[i] = this->cadena[i];
        }

    }

    return Cadena(palabraMayuscula);
}

void Cadena::agregarAlFinal(char otro)
{
    char * palabraAux = new char[this->cant+1];

    for(int i = 0; i < this->cant-1; i++) {
        palabraAux[i] = this->cadena[i];
    }

    palabraAux[this->cant - 1] = otro;
    palabraAux[this->cant] = '\0';
    this->cant++;
    this->cadena = palabraAux;
}
