#include "Oracion.h"
#include <cstring>
#include <iostream>

using namespace std;

int Oracion::getCantPalabras()
{
    return cant;
}

int Oracion::getCantLetras()
{
    int cantL = 0;
    for (int i=0;i<cant;i++) {
        //cout << "[" << strlen(vector[i]) << "]" << endl;
        cantL += strlen(vector[i]);
    }
    return cantL;
}

void Oracion::agregarPalabra(char *a)
{
    char **vecAux;

    vecAux = new char*[cant+1];

    for (int i=0;i<cant;i++) {
        vecAux[i] = new char[strlen(vector[i])];
        strcpy(vecAux[i], vector[i]);
    }

    vecAux[cant] = new char[strlen(a)];
    strcpy(vecAux[cant], a);
    delete [] vector;
    vector = vecAux;
    cant++;
}

void Oracion::inicializar(char *texto)
{
    char *p1=texto;
    char *p2=p1;
    int len = strlen(texto);
    for (int i=0;i<len;i++) {
        if (*p2 == ' ' || i+1 == len)
        {
            if (i+1 == len)
                p2++;

            char aux[100];
            strncpy(aux, p1, p2-p1);
            aux[p2-p1]=0;

            //cout << "[" << aux << "]" << endl;
            agregarPalabra(aux);

            p2++;
            p1 = p2;
        }
        else {
            p2++;
        }
    }
}
