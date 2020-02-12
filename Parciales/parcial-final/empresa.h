#ifndef EMPRESA_H
#define EMPRESA_H
#include <vector>
#include <algorithm>
#include "producto.h"
#include <list>
#include <map>

class empresa
{
public:
    empresa();
    void incrementar_precio(double porcentajeDolar);
    void agregar_producto(producto* prod);
    void leer_archi();
    void escribir_archi();
    void mostrar();
    void productosXmarca();
    void mostrarProductosPorMarca();
private:
    int cant_productos;
    std::vector <producto*> productos;

};

#endif // EMPRESA_H
