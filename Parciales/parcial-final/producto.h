#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class producto
{
public:
    producto(int c, char *n, char *m, double p, char *t);
    virtual void setPorcentajeDolar(double valor)=0;
    virtual void actualizar()=0;
    void mostrar2();
    int getCod() const;
    char *getNomb() const;
    char *getMarca() const;
    double getPrecio() const;
    char *getTipo() const;
    friend std::ostream& operator<<(std::ostream& os, const producto& p);
protected:
    int cod;
    double precio;
    char *nomb=new char[50];
    char *marca=new char[20];
    char *tipo=new char[1];
};



#endif // PRODUCTO_H

