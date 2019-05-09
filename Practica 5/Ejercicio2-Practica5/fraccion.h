#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>

using namespace std;

class Fraccion
{
    int numerador;
    int denominador;
public:
    Fraccion(int numerador, int denominador){
        this->numerador = numerador;
        this->denominador = denominador;
    }
    Fraccion(){

    }

    Fraccion &operator +(const Fraccion &frac);
    void mostrar();
};

#endif // FRACCION_H
