#ifndef ALUMNOESPECIAL_H
#define ALUMNOESPECIAL_H
#include <iostream>

using namespace std;


class AlumnoEspecial
{
private:
    int *notas;
    int cant = 0;
public:
    AlumnoEspecial(){
        this->notas = new int[cant];
    }
    ~AlumnoEspecial(){
        delete [] notas;
    }

    void agregarNotas(int nota);
    void eliminarNota(int notaAEliminar);
    void mostrarNotas();
    double calcularPromedios();
};

#endif // ALUMNOESPECIAL_H
