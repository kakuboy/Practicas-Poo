#ifndef BIEN_H
#define BIEN_H
#include <iostream>

using namespace std;

class Bien
{
protected:
    double valor;
public:
    Bien();
    virtual ~Bien(){}

    virtual double amortizar()=0;
    void setValor(double a);
    friend ostream& operator<<(ostream& o, const Bien& obj);
};

#endif // BIEN_H
