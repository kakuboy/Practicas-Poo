#include "producto.h"
#include <iostream>
#include <string.h>

using namespace std;

producto::producto(int c, char *n, char *m, double p, char *t)
{
    this->cod=c;
    strcpy(this->tipo, t);
    strcpy(this->nomb, n);
    strcpy(this->marca, m);
    this->precio=p;
}

int producto::getCod() const
{
    return cod;
}

char *producto::getNomb() const
{
    return nomb;
}

char *producto::getMarca() const
{
    return marca;
}

double producto::getPrecio() const
{
    return precio;
}

char *producto::getTipo() const
{
    return tipo;
}

std::ostream& operator<<(std::ostream& os, const producto& p) {
    os<<"Codigo: "<<p.cod<<"     Nombre: "<<p.getNomb()<<
    "      Marca: "<<p.getMarca()<<"        Precio: "<<p.getPrecio()<<
    "       Tipo: "<<p.getTipo()<<std::endl;

    return os;
}
