#include "EmpleadoVendedor.h"

EmpleadoVendedor::EmpleadoVendedor()
{

}

void EmpleadoVendedor::setMontoVendido(int a)
{
    this->montoVendido = a;
}

int EmpleadoVendedor::getMontoVendido()
{
    return  this->montoVendido;
}

int EmpleadoVendedor::calcularSueldo()
{
    int total=0;
    int aux=(2*getMontoVendido())/100;

    return total = getSueldoFijo()+getMontoVendido()+aux;
}
