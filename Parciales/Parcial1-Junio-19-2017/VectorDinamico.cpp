#include "VectorDinamico.h"
#include <iostream>

using namespace std;

int *VectorDinamico::getVector()
{
    return vector;
}

int VectorDinamico::getCant()
{
    return cant;
}

bool VectorDinamico::pertenece(int a)
{
    for (int i=0;i<cant;i++) {
        if (vector[i] == a) return true;
    }
    return false;
}

void VectorDinamico::mostrar()
{
    cout << "[ ";
    for (int i=0;i<cant;i++) {
        cout << vector[i] << " ";
    }
    cout << "]" << endl;
}

void VectorDinamico::agregar(int a)
{
    int *vecAux;

    vecAux = new int[cant+1];

    for (int i=0;i<cant;i++) {
        vecAux[i] = vector[i];
    }

    vecAux[cant] = a;
    delete [] vector;
    vector = vecAux;
    cant++;
}

VectorDinamico* VectorDinamico::unir(VectorDinamico &a)
{
    VectorDinamico* vec=new VectorDinamico();

    for (int i=0;i<cant;i++) {
        vec->agregar(vector[i]);
    }

    for (int i=0;i<a.getCant();i++) {
        vec->agregar(a.getVector()[i]);
    }

    return vec;
}

VectorDinamico* VectorDinamico::intersectar(VectorDinamico &a)
{
    VectorDinamico* vec=new VectorDinamico();

    for (int i=0;i<cant;i++) {
        if (a.pertenece(vector[i]))
            vec->agregar(vector[i]);
    }

    return vec;
}
