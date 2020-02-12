#ifndef P_IMPORTADO_H
#define P_IMPORTADO_H
#include "producto.h"

class p_importado : public producto
{
public:
    p_importado(int c, char *n, char *m, double p, char *t);
    virtual void setPorcentajeDolar(double valor);
    virtual void actualizar();
private:
    double dolar_porcentaje;
};

#endif // P_IMPORTADO_H
