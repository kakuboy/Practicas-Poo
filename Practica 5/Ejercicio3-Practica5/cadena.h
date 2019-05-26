#ifndef CADENA_H
#define CADENA_H
#include <string.h>

class Cadena
{
private:
    char *cadena;
    int cant = 0;
public:
    Cadena(char * cadena){
        this->cadena = cadena;
        while (this->cadena[this->cant]!= '\0') { this->cant++;  }
        this->cant++;
    }
    int getCant();
    char * getCadena();
    Cadena convertirMayuscula();
    void agregarAlFinal(char otro);
};

#endif // CADENA_H
