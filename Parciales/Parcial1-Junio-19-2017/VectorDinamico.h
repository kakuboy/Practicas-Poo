#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H


class VectorDinamico
{
    int *vector;
    int cant;
public:
    VectorDinamico(){
        cant = 0;
        vector = new int[cant];
    }

    int *getVector();
    int getCant();
    bool pertenece(int a);

    void mostrar();
    void agregar(int a);
    VectorDinamico* unir(VectorDinamico& a);
    VectorDinamico* intersectar(VectorDinamico& a);
};

#endif // VECTORDINAMICO_H
