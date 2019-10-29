#ifndef EMPRESA_H
#define EMPRESA_H
#include "Empleado.h"
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;

struct Datos{
    char *dni = new char[8];
    char *nom = new char[200];
    char *ape = new char[200];
};

struct Hora{
    char *dni = new char[8];
    int horas;
    char *fechas = new char[8];
};


class Empresa
{
public:
    Empresa();
    void ArchEmp();
    void CuantoLabura(char* dni);
    vector <Empleado*> emp;
    void EscArch();
    void OrdMayYMenor();
    int find(char* dni){
        for(int i=0;i<emp.size();i++){
            //NO SABEMOS PORQUE TIRA ERROR ACA
            if(strcmp(dni, emp[i]->getDni())==0){
                return i;
            }
        }
        return -1;

    }

};


#endif // EMPRESA_H
