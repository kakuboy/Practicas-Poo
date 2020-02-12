#include "p_importado.h"
#include <string.h>
#include <iostream>

using namespace std;

p_importado::p_importado(int c, char *n, char *m, double p, char *t) : producto (c, n, m, p, t)
{
    this->dolar_porcentaje=0.0;
}

void p_importado :: setPorcentajeDolar(double valor){
    this->dolar_porcentaje=valor;
}

void p_importado :: actualizar(){
    precio = precio * this->dolar_porcentaje + precio;
}

/*ostream& operator << (ostream &o,const p_importado &p){
    o<<"Codigo: "<<p.getCod()<<"     Nombre: "<<p.getNomb()<<"      Marca: "<<p.getMarca()<<"        Precio: "<<p.getPrecio()<<"       Tipo: "<<p.getTipo();
    return o;
}*/
