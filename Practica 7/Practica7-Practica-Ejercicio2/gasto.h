#ifndef GASTO_H
#define GASTO_H
#include <iostream>
#include <cstring>

using namespace std;

class Gasto
{
protected:
    int gasto;
    char *descripcion;
    char *empresa;
public:
    Gasto(char *empresa){
        strcpy(empresa,this->empresa);
    }

    void setDescripcion(char *desc);
    char *getDescripcion();
    void setGasto(int a);
    int getGasto();

};

#endif // GASTO_H
