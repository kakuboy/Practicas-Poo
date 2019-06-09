#include "Provincia.h"

int Provincia::calcularHabitantes()
{
    int total = 0;
    for (int i=0;i<cant;i++) {
        total += departamentos[i]->calcularHabitantes();
    }
    return total;
}

void Provincia::agregar(Departamento *a)
{
    this->departamentos[this->cant] = a;
    cant++;
}

void Provincia::mostrar()
{
    cout<<"Nombre de la Provincia: "<<this->nombre<<endl;
    for (int i=0;i<this->cant;i++) {
        cout<<"Departamento: "<<this->departamentos[i]->getNombreDepartamento()<<" , Habitantes: "<<this->departamentos[i]->calcularHabitantes()<<endl;
    }
    cout<<"Total habitantes de la Provincia: "<<calcularHabitantes()<<endl;
}
