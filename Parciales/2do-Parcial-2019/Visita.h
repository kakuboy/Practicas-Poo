#ifndef VISITA_H
#define VISITA_H
#include <cstring>
#include <iostream>
#include <string.h>

using namespace std;

class Visita
{
    char *url = new char[20];
    int tdp;
    char *origen = new char[1];
    int puntaje =0;
public:
    Visita(char *url, int tdp, char *origen){
        strcpy(this->url, url);
        this->tdp = tdp;
        strcpy(this->origen, origen);

        switch(*origen){
        case 'B':
            puntaje +=10*tdp;
            break;
        case 'D':
            puntaje +=15*tdp;
            break;
        case 'O':
            puntaje +=1*tdp;
            break;
        }
    }
    char *getUrl() const;
    int getTdp() const;
    char *getOrigen() const;
    void setPuntaje(int value);
    int getPuntaje() const;
};

#endif // VISITA_H
