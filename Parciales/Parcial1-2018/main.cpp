#include <iostream>
#include <Ciudad.h>
#include <Departamento.h>
#include <Provincia.h>
#include <Pais.h>
#include <cstring>

using namespace std;

int main()
{
    Ciudad *unaCiudad;
    Ciudad *unaCiudad2;
    Ciudad *unaCiudad3;
    Ciudad *unaCiudad4;
    Ciudad *unaCiudad5;

    unaCiudad = new Ciudad("Parana");
    unaCiudad2 = new Ciudad("Oro Verde");
    unaCiudad3 = new Ciudad("Diamante");

    unaCiudad->setCantHabitantes(1000);
    unaCiudad2->setCantHabitantes(2000);
    unaCiudad3->setCantHabitantes(500);

    Departamento *unDepartamento;
    Departamento *unDepartamento2;

    unDepartamento = new Departamento("Paranaa");

    unDepartamento->agregar(unaCiudad);
    unDepartamento->agregar(unaCiudad2);
    unDepartamento->agregar(unaCiudad3);

    unaCiudad4 = new Ciudad("Gualeguay");
    unaCiudad5 = new Ciudad("General Galarza");

    unaCiudad4->setCantHabitantes(2000);
    unaCiudad5->setCantHabitantes(1000);

    unDepartamento2 = new Departamento("Gualeguay");

    unDepartamento2->agregar(unaCiudad4);
    unDepartamento2->agregar(unaCiudad5);

    unDepartamento->mostrar();
    cout<<endl;
    unDepartamento2->mostrar();

    cout<<"------------------------------------------------------"<<endl;
    cout<<"Ciudad con las 3 primeras letras en mayuscula."<<endl;
    cout<<"Ciudad: "<<unaCiudad<<endl;
    cout<<"Ciudad: "<<unaCiudad2<<endl;
    cout<<"Ciudad: "<<unaCiudad3<<endl;
    cout<<"------------------------------------------------------"<<endl;

    Provincia *unaProvincia = new Provincia("Entre Rios");

    unaProvincia->agregar(unDepartamento);
    unaProvincia->agregar(unDepartamento2);

    unaProvincia->mostrar();

    Pais *unPais = new Pais("Argentina");

    unPais->agregar(unaProvincia);

    unPais->mostrarDatos();

    return 0;
}
