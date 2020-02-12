#ifndef P_NACIONAL_H
#define P_NACIONAL_H
#include "producto.h"

class p_nacional : public producto
{
public:
    p_nacional(int c, char *n, char *m, double p, char *t);
    virtual void setPorcentajeDolar(double valor);
    virtual void actualizar();

};

#endif // P_NACIONAL_H
