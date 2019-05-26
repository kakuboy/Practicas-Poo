/*Realice una clase Cadena que permita representar una cadena cstring. La cadena debe
permitir:
a) Saber cuantos caracteres tiene la cadena
b) Agregar un carácter al final
c) Agregar un carácter al principio
d) Remover la primera ocurrencia de un carácter pasado por parámetro.
e) Retornar una cadena en mayúscula.
*/

#include <iostream>
#include "cadena.h"

using namespace std;

int main()
{
    Cadena unaCadena("Hola que tal");

    cout<<"Longitud de la cadena: "<<unaCadena.getCant()<<endl;

    cout<<"Convirtiendo a mayuscula: "<<unaCadena.convertirMayuscula().getCadena()<<endl;

    unaCadena.agregarAlFinal('?');
    cout<<"Agregando un caracter: "<<unaCadena.getCadena()<<endl;

    return 0;
}
