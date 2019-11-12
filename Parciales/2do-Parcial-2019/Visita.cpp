#include "Visita.h"

int Visita::getTdp() const
{
    return tdp;
}

char *Visita::getOrigen() const
{
    return origen;
}

void Visita::setPuntaje(int value)
{
    puntaje = value;
}

int Visita::getPuntaje() const
{
    return puntaje;
}

char *Visita::getUrl() const
{
    return url;
}
