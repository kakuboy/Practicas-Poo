#include "p_nacional.h"
#include "string.h"
#include <string.h>
#include "string"
#include <string>
#include <iostream>

using namespace std;

p_nacional::p_nacional(int c, char *n, char *m, double p, char *t) : producto (c, n, m, p, t){}

void p_nacional :: setPorcentajeDolar(double valor){
    // No lo usa
}

void p_nacional :: actualizar(){
    precio = precio * 0.02 + precio;
}

/*ostream& operator << (ostream &o,const p_nacional &p){
    o<<"Codigo: "<<p.getCod()<<"     Nombre: "<<p.getNomb()<<"      Marca: "<<p.getMarca()<<"        Precio: "<<p.getPrecio()<<"       Tipo: "<<p.getTipo();
    return o;
}
*/
