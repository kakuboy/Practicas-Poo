#include <iostream>
#include "VectorDinamico.h"

using namespace std;

int main()
{
    VectorDinamico unNumero;

    unNumero.agregarUnElemento(1);
    unNumero.agregarUnElemento(2);
    unNumero.agregarUnElemento(3);
    unNumero.agregarUnElemento(4);
    unNumero.agregarUnElemento(5);

    unNumero.mostrarElementos();
    return 0;
}
