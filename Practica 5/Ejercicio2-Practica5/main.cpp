/*Realice una clase que represente una Fracción.
a) Un objeto fracción solo se puede construir a partir de un numerador y denominador.
b) Un objeto fracción debe poder sumar, restar, multiplicar y dividir.
c) Un objeto fracción debe poder simplificarse*/
#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion f1(1,2);
    Fraccion f2(1,2);
    Fraccion f3;

    f3 = f1+f2;

    f3.mostrar();


    return 0;
}
