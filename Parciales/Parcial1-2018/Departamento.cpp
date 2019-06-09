#include "Departamento.h"

int Departamento::calcularHabitantes()
{
    int total = 0;

    for (int i=0;i<cant;i++) {
        total += this->ciudades[i]->getCantHabitantes();

    }
    return total;
}

void Departamento::agregar(Ciudad *a)
{
    this->ciudades[this->cant] = a;
    this->cant++;
}

void Departamento::mostrar()
{
    cout<<"Nombre del departamento: "<<this->nombre<<endl;
    for (int i=0;i<this->cant;i++) {
        cout<<"Ciudad: "<<this->ciudades[i]->getNombreCiudad()<<" , Habitantes: "<<this->ciudades[i]->getCantHabitantes()<<endl;
    }
    cout<<"Total habitantes del departamento: "<<calcularHabitantes()<<endl;
}

char *Departamento::getNombreDepartamento()
{
    return this->nombre;
}
