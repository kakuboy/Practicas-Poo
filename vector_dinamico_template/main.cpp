#include <iostream>
#include "vector_t.h"

using namespace std;

int main()
{
    vector_t<int> vec;
    vec.agregar(5);
    vec.agregar(7);
    vec.agregar(41);
    vec.agregar(63);
    vec.agregar(1);
    cout << "Los valores son: " << endl;
    vec.mostrar();

    vec.eliminar(7);
    cout << "Los valores son: " << endl;
    vec.mostrar();

    vec.ordenar();
    cout << "Los valores son: " << endl;
    vec.mostrar();


    return 0;
}
