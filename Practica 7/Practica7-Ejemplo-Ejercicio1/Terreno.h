#ifndef TERRENO_H
#define TERRENO_H
#include <iostream>
#include "Bien.h"

using namespace std;

class Terreno:public Bien
{
public:
    Terreno();
    double amortizar();
    friend ostream& operator<<(ostream& o,const Terreno& obj);
};

#endif // TERRENO_H
