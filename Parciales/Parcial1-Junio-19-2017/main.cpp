#include <iostream>
#include "VectorDinamico.h"
#include "Oracion.h"
#include "Empleado.h"
#include "EmpleadoNormal.h"
#include "EmpleadoVendedor.h"
#include "Empresa.h"
#include "EncargadoDpto.h"

using namespace std;

int main()
{
    /*VectorDinamico vec1;
    vec1.agregar(1);
    vec1.agregar(2);
    vec1.agregar(3);
    vec1.agregar(4);
    vec1.mostrar();

    VectorDinamico vec2;
    vec2.agregar(5);
    vec2.agregar(6);
    vec2.agregar(7);
    vec2.agregar(8);
    vec2.mostrar();

    VectorDinamico* vec3 = vec1.unir(vec2);
    vec3->mostrar();
    delete vec3;

    VectorDinamico* vec4 = vec1.intersectar(vec2);
    vec4->mostrar();
    delete vec4;

    VectorDinamico vec5;
    vec5.agregar(1);
    vec5.agregar(6);
    vec5.agregar(3);
    vec5.agregar(8);
    vec5.mostrar();

    VectorDinamico* vec6 = vec1.intersectar(vec5);
    vec6->mostrar();
    delete vec6;

    Oracion o;
    //char texto[] = "Esto es una prueba";
    char texto[] = "Esto es una prueba con Qt en Linux para un TP de Massi";
    o.inicializar(texto);
    cout << "oracion: " << o << endl;
    cout << "cant palabras: " << o.getCantPalabras() << endl;
    cout << "cant letras: " << o.getCantLetras() << endl;*/

    EmpleadoNormal *eNormal = new EmpleadoNormal();

    eNormal->setCuil(20202020);
    eNormal->setNombre("Massimo");
    eNormal->setApellido("Quirolo");
    eNormal->setSueldoFijo(1000);

    EmpleadoVendedor *eVendedor = new EmpleadoVendedor();

    eVendedor->setMontoVendido(400);
    eVendedor->setCuil(20032300);
    eVendedor->setNombre("Pedro");
    eVendedor->setApellido("Rodriguez");
    eVendedor->setSueldoFijo(2500);

    EncargadoDpto *eDpto = new EncargadoDpto();

    eDpto->setObjetivoLogrado(400);
    eDpto->setCuil(32156777);
    eDpto->setNombre("Ramon");
    eDpto->setApellido("Perez");
    eDpto->setSueldoFijo(3000);

    Empresa *unaEmpresa = new Empresa();

    unaEmpresa->setNombreEmpresa("Asociados");
    unaEmpresa->agregarEmpleado(eNormal);
    unaEmpresa->agregarEmpleado(eVendedor);
    unaEmpresa->agregarEmpleado(eDpto);

    unaEmpresa->mostrarDatos();

    return 0;
}
