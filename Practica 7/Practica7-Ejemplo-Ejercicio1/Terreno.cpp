#include "Terreno.h"

Terreno::Terreno()
{

}

double Terreno::amortizar()
{
    return 0.0;
}

ostream& operator<<(ostream &o, const Terreno &obj)
{
    return o<<"Terreno: "<<obj.valor;
}
