#include "AlumnoEspecial.h"

void AlumnoEspecial::agregarNotas(int nota)
{
    //notas[cant++] = nota;

    int *notasAux = new int[cant+1];

    for (int i=0;i<cant;i++) {
        notasAux[i] = notas[i];
    }

    notasAux[cant] = nota;
    delete []notas;
    notas=notasAux;
    cant++;
    //size++;

}

void AlumnoEspecial::eliminarNota(int notaAEliminar)
{
    if(notaAEliminar < cant && notaAEliminar >= 0){
        for (int i=notaAEliminar;i<cant - 1;i++) {
            notas[i] = notas[i+1];
        }
        cant--;
    }
}

void AlumnoEspecial::mostrarNotas()
{
    for(int i=0;i<cant;++i){
            cout<<"Nota["<<i<<"]: "<<notas[i]<<endl;
        }
    cout<<"Promedio de las notas: "<<calcularPromedios()<<endl;
    cout<<endl;
}

double AlumnoEspecial::calcularPromedios()
{
    double promedio = 0.0;
    for (int i=0;i<cant;i++) {
        promedio += notas[i];
    }
    return promedio / cant;
}
