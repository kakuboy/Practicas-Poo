#include "GestorContable.h"

GestorContable::GestorContable()
{

}

void GestorContable::imprimir(Bien *unBien)
{
    cout<<*unBien<<" -Amortizacion: "<<unBien->amortizar()<<endl;
}
