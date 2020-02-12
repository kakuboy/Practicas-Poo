#ifndef VECTOR_T_H
#define VECTOR_T_H
#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
class vector_t
{
private:
    T* vec;
    int cant;
    int tamanio;
public:
    vector_t(int n = 0){
        this->vec = new T[n];
        cant = 0;
        tamanio = n;
    }
    void ordenar(){
        sort(vec, vec+cant);
    }
    void agregar(T dato){
        if(cant<tamanio){
            vec[cant] = dato;
        }
        else{
            T* aux = new T[cant+1];
            for(auto i = 0; i<cant; i++){
                aux[i] = vec[i];
            }
            aux[cant] = dato;
            cant++;
            tamanio++;
            delete[] vec;
            vec = aux;
        }
}

    void mostrar(){
        for(auto i = 0; i<cant; i++){
            cout<<"pocision ["<<i<<"] ="<<vec[i]<<endl;
        }
    }
    void eliminar(T dato){
        int indice = -1;
        for(auto i = 0; i<cant; i++){
            if(vec[i] == dato)
                indice = i;
        }

        if(indice != -1){
            T* aux = new T[cant-1];
            bool band = false;
            for(auto i = 0; i<cant-1; i++){
                if(i != indice && !band)
                    aux[i] = vec[i];
                if(i == indice){
                    band = true;
                }
                if(band){
                    aux[i] = vec[i+1];
                }
            }
            delete [] vec;
            vec = aux;
            cant--;
            tamanio--;
        }
        else{
            cout<<"el elemento no existe"<<endl;
        }
    }
};

#endif // VECTOR_T_H
