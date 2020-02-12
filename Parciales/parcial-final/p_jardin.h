#ifndef P_JARDIN_H
#define P_JARDIN_H
#include "producto.h"

class p_jardin : public producto
{
public:
    p_jardin(int c, char *n, char *m, double p, char *t);
    virtual void setPorcentajeDolar(double valor);
    virtual void actualizar();
};

#endif // P_JARDIN_H
