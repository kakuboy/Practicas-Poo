#include "Empresa.h"

Empresa::Empresa()
{

}

void Empresa::ArchEmp()
{
    ifstream file("employes.bin", ios::binary);
    if(file.is_open()){
        Datos d;
        Empleado *e = nullptr;
        while (file.eof()) {
          file.read((char*)&d, sizeof (Datos));
          strcpy(e->getDni(), d.dni);
          strcpy(e->getNom(), d.nom);
          strcpy(e->getApe(), d.ape);

          emp.push_back(e);
        }
    }
    file.close();

    ifstream file2("employes.bin", ios::binary);
    if(file2.is_open()){
        Hora t;
        while (file2.eof()){
            file2.read((char*)&t, sizeof (Hora));
            emp[find(t.dni)]->setHorasTot(t.horas);
        }
    }
    file2.close();
}

void Empresa::CuantoLabura()
{
    for(int i=0;i<emp.size();i++){
        cout<<emp[i]->getDni()<<emp[i]->getNom()<<emp[i]->getApe()<<emp[i]->getHorasTot();
    }
}

void Empresa::EscArch()
{
    ofstream file3("emp.txt");

    if(file3.is_open()){

        for(int i=0;i<emp.size();i++){

            Empleado e;

            file3<<e.getNom()<<e.getApe()<<e.getHorasTot();
        }
    }
    file3.close();
}
