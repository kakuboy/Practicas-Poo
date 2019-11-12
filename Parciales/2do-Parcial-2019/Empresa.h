#ifndef EMPRESA_H
#define EMPRESA_H
#include <vector>
#include <Visita.h>
#include <fstream>
#include <algorithm>

struct Registro{
    char *url = new char[20];
    int tdp;
    char *origen = new char[1];
};

using namespace std;

class Empresa
{
    vector <Visita*> visitas;
public:
    Empresa();

    void leerArchivo();
    void escribirArchivo();
    void cincoSitiosYDirecto();
};

#endif // EMPRESA_H
