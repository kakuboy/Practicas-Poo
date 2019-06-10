#ifndef ORACION_H
#define ORACION_H
#include <iostream>
#include <cstring>

using namespace std;

class Oracion
{
    int cant;
    char ** vector;
public:
    Oracion(){
        cant = 0;
        vector = new char*[cant];
    }

    int getCantPalabras();
    int getCantLetras();
    char **getVector();
    void agregarPalabra(char *a);
    void inicializar(char *texto);

    friend ostream& operator <<(ostream& o, Oracion orac){
        o<<"Oracion: "<<orac.getVector()<<endl;
        return o;
    }
};

#endif // ORACION_H
