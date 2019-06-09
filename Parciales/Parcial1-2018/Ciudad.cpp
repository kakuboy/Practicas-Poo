#include "Ciudad.h"

int Ciudad::getCantHabitantes()
{
    return this->cantHabitantes;
}

void Ciudad::setCantHabitantes(int cantHabitantes)
{
    this->cantHabitantes = cantHabitantes;
}

char *Ciudad::getNombreCiudad()
{
    return this->nombre;
}
