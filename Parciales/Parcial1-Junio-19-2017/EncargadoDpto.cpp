#include "EncargadoDpto.h"

EncargadoDpto::EncargadoDpto()
{

}

void EncargadoDpto::setObjetivoLogrado(int a)
{
    this->objetivoLogrado = a;
}

int EncargadoDpto::getObjetivoLogrado()
{
    return this->objetivoLogrado;
}

int EncargadoDpto::calcularSueldo()
{
    int total=0;
    int aux=1000+getObjetivoLogrado();

    return total = getSueldoFijo()+aux;
}
