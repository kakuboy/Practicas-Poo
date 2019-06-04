#include "gasto.h"

void Gasto::setDescripcion(char *desc){
    strcpy(desc,this->descripcion);
}

char *Gasto::getDescripcion(){
    return this->descripcion;
}

void Gasto::setGasto(int a){
    this->gasto = a;
}

int Gasto::getGasto(){
    return this->gasto;
}
