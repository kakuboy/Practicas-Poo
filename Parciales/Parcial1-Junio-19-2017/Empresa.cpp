#include "Empresa.h"

Empresa::Empresa()
{

}

void Empresa::mostrarDatos()
{
    cout<<"Empleados: "<<endl;
    for (int i=0;i<this->cant;i++) {
        cout<<"Cuil: "<<empleados[i]->getCuil()<<", "<<empleados[i]->getNombre()<<" "<<empleados[i]->getApellido()<<", Sueldo: "<<empleados[i]->calcularSueldo()<<endl;
    }
}

void Empresa::setNombreEmpresa(char *a)
{
    this->nombreEmpresa = new char[strlen(a)];
    strcpy(this->nombreEmpresa,a);
}

void Empresa::agregarEmpleado(Empleado *a)
{
    empleados[this->cant] = a;
    this->cant++;
}
