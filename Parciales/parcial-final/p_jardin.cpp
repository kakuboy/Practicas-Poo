#include "p_jardin.h"
#include <string.h>
#include <iostream>

using namespace std;

p_jardin::p_jardin(int c, char *n, char *m, double p, char *t) : producto (c, n, m, p, t){}

void p_jardin :: setPorcentajeDolar(double valor){
    // No lo usa
}

void p_jardin :: actualizar(){
    precio = precio * 0.0083 + precio;
}

/*ostream& operator << (ostream &o,const producto &p){
    o<<"Codigo: "<<p.getCod()<<"     Nombre: "<<p.getNomb()<<"      Marca: "<<p.getMarca()<<"        Precio: "<<p.getPrecio()<<"       Tipo: "<<p.getTipo();
    return o;
}*/
