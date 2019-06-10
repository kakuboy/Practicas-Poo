#ifndef ENCARGADODPTO_H
#define ENCARGADODPTO_H
#include <iostream>
#include "Empleado.h"
#include <cstring>

using namespace std;

class EncargadoDpto:public Empleado
{
    int objetivoLogrado;
public:
    EncargadoDpto();


    void setObjetivoLogrado(int a);
    int getObjetivoLogrado();
    int calcularSueldo();
};

#endif // ENCARGADODPTO_H
