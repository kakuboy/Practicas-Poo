#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H
#include <iostream>

using namespace std;


class VectorDinamico
{
protected:
    int *numero;
    int cant = 0;
public:
    VectorDinamico(){
        this->numero = new int[cant];
    }
    ~VectorDinamico(){
        delete [] numero;
    }
    void agregarUnElemento(int a);
    void eliminarUnElemento(int a);
    double calcularPromedio();
    int cuantosElementosHayEnElVector();
    void mostrarElementos();
    int calcularMayor();
    int calcularMenor();

};

#endif // VECTORDINAMICO_H
