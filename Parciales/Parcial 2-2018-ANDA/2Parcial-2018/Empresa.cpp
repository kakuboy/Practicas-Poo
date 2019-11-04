#include "Empresa.h"


void Empresa::leerArchivo()
{
    ifstream file("archivo.bin", ios::in|ios::binary);

    if(file.is_open()){
        Empleado *empAux;
        EmpleadoE empStruct;
        char *aux;

        while (!file.eof()) {
            file.read((char *)& empStruct, sizeof (EmpleadoE));

            aux = nullptr;

            strcpy(aux,empStruct.dni);
            empAux->setDni(aux);

            strcpy(aux,empStruct.nombre);
            empAux->setNombre(aux);

            strcpy(aux,empStruct.apellido);
            empAux->setApellido(aux);

            empleados.push_back(empAux);
        }
        file.close();
    }

    ifstream file2("archivo.bin", ios::in|ios::binary);

    if(file2.is_open()){
        EmpleadoHora eHora;

        while (!file2.eof()) {
            file2.read((char *)& eHora, sizeof (EmpleadoE));

            for(int i=0;i < empleados.size(); i++){
                if((strcmp(eHora.dni,empleados[i]->dni)) < 0){
                    empleados[i]->setHoras(eHora.horas);
                    i = empleados.size();
            }
                else {
                    cout<<"Empleado no encontrado"<<endl;
                }
            }
        }
        file2.close();
    }
}

void Empresa::escribirArchivo()
{
    ofstream file("/archivos.txt");

    for(int i=0; i<empleados.size();i++){
        file<<empleados[i]->getNombre()<<"  "<<empleados[i]->getApellido()<<"  :  "<<empleados[i]->getHoras()<<endl;
    }

    file.close();
}

bool mashoras(Empleado* A, Empleado* B){
    if(A->getHoras() < B->getHoras()){             // Si (las horas de A son menores o iguales a las de B)
    return true;
}
    else{
        return false;
    }
}

void Empresa::mostrarEmpleadoMasYMenos()
{
    sort(empleados.begin(), empleados.end(), mashoras);


        int c=1;
        for (int i=1; i<empleados.size();i++)
        {
            if (empleados.front()->getHoras() == empleados[i]->getHoras())
            {
                c++;
            }
        }


        for (int i=0; i<c; i++)
        {
        cout<<empleados[i]->getNombre()<<" "<<empleados[i]->getApellido()<<" "<<empleados[i]->getDni()<<" con "<<empleados[i]->getHoras()<<" trabajadas"<<endl;
        }

        c=1;
        reverse(empleados.begin(), empleados.end());

        for (int i=1; i<empleados.size();i++){
            if (empleados.front()->getHoras()==empleados[i]->getHoras())
            {
                c++;
            }
        }

        for (int i=0; i<c; i++)
        {
            cout<<empleados[i]->getNombre()<<" "<<empleados[i]->getApellido()<<" "<<empleados[i]->getDni()<<" con "<<empleados[i]->getHoras()<<" trabajadas"<<endl;
        }
}
