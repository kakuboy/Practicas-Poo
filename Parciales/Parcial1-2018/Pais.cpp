#include "Pais.h"

int Pais::calcularHabitantes()
{
    int total = 0;
    for (int i=0;i<this->cant;i++) {
        total += provincias[i]->calcularHabitantes();
    }

    return total;
}

void Pais::agregar(Provincia *a)
{
    this->provincias[this->cant] = a;
    this->cant++;
}

void Pais::mostrarDatos()
{
    cout<<"Nombre del Pais: "<<this->nombre<<endl;
    for (int i=0;i<this->cant;i++) {
        cout<<"Provincia: "<<provincias[i]->getNombreProvincia()<<" , Habitantes: "<<provincias[i]->calcularHabitantes()<<endl;
    }
    cout<<"Total de habitantes del Pais: "<<calcularHabitantes()<<endl;
}
