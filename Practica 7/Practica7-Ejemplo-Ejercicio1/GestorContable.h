#ifndef GESTORCONTABLE_H
#define GESTORCONTABLE_H
#include <iostream>
#include "Bien.h"

using namespace std;

class GestorContable
{
public:
    GestorContable();

    void imprimir(Bien *unBien);
};

#endif // GESTORCONTABLE_H
