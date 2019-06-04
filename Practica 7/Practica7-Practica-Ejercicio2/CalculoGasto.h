#ifndef CALCULOGASTO_H
#define CALCULOGASTO_H
#include <iostream>
#include <cstring>
#include "gasto.h"

using namespace std;

class CalculoGasto
{
public:
    CalculoGasto();

    void imprimir(Gasto *unGasto);
};

#endif // CALCULOGASTO_H
