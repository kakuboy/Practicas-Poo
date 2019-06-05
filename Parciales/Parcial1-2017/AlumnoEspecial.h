#ifndef ALUMNOESPECIAL_H
#define ALUMNOESPECIAL_H
#include <iostream>

using namespace std;


class AlumnoEspecial
{
private:
    int *notas;
    int size;
    int cant;
public:
    AlumnoEspecial(){
        cant = 0;
        size = 0;
    }
    AlumnoEspecial(int n){
        cant = 0;
        notas = new int[n];
        size = n;
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
