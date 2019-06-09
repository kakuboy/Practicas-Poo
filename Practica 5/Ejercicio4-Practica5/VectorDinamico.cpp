#include "VectorDinamico.h"


void VectorDinamico::agregarUnElemento(int a)
{
    numero[cant++] = a;
}

void VectorDinamico::eliminarUnElemento(int a)
{
    if(a < cant && a >= 0){
        for (int i=a;i<cant - 1;i++) {
            numero[i] = numero[i+1];
        }
        cant--;
    }
}

double VectorDinamico::calcularPromedio()
{
    double promedio = 0.0;

    for (int i=0;i<cant;i++) {
        promedio += numero[i];
    }

    return promedio / cant;
}

int VectorDinamico::cuantosElementosHayEnElVector()
{
    /*int tamanioDelArray = sizeof (numero);
    int tamanioDelTipoDeDato = sizeof (int);
    int cantidadElementos;

    return cantidadElementos = tamanioDelArray / tamanioDelTipoDeDato;*/
    return cant;

}

void VectorDinamico::mostrarElementos()
{
    for (int i=0;i<cant;i++) {
        cout<<"Numero: "<<numero[i]<<endl;
    }
    cout<<"Promedio de los elementos: "<<calcularPromedio()<<endl;
    cout<<"Cantidad de elementos que hay en el vector: "<<cuantosElementosHayEnElVector()<<endl;
    cout<<"Elemento mayor: "<<calcularMayor()<<endl;
    cout<<"Elemento menor: "<<calcularMenor()<<endl;

}

int VectorDinamico::calcularMayor()
{
    int mayor = 0;

    for (int i=0;i<cant;i++) {
        if(numero[i] > mayor){
            mayor = numero[i];
        }
    }

    return mayor;
}

int VectorDinamico::calcularMenor()
{
    int menor = 9999;
    for (int i=0;i<cant;i++) {
        if(numero[i] < menor){
            menor = numero[i];
        }
    }

    return menor;
}
