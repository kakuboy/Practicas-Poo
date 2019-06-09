/*Realice un programa que calcule las amortizaciones de diferentes bienes:
• Rodado, amortiza a partir de los kilometros recorridos, un 10% cada 1000 km.
• Mueble, un 5% anual.
• Terreno, no amortiza.
• Edificio, un 4 % anual.
Genere una clase GestorContable que imprima la amortización de los bienes.*/
#include <iostream>
#include "Bien.h"
#include "Edificio.h"
#include "GestorContable.h"
#include "Mueble.h"
#include "Rodado.h"
#include "Terreno.h"

using namespace std;

int main()
{
    GestorContable gestorContable = GestorContable();

    Bien *unTerreno = new Terreno();
    unTerreno->setValor(12000.0);
    gestorContable.imprimir(unTerreno);

    Bien *unMueble = new Mueble(2000);
    unMueble->setValor(47000.0);
    gestorContable.imprimir(unMueble);

    Bien *unRodado = new Rodado();
    Rodado *o = nullptr;
    if(o = reinterpret_cast<Rodado*>(unRodado)){
        o->setKm(2450);
    }
    unRodado->setValor(40000.0);
    gestorContable.imprimir(unRodado);


    return 0;
}
