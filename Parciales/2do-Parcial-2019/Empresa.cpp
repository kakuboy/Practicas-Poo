#include "Empresa.h"

Empresa::Empresa()
{

}

void Empresa::leerArchivo()
{
    ifstream file("C://Users//kakuboy//Documents//GitHub//Practicas-Poo//Parciales//2do-Parcial-2019//archivo.dat", ios::binary);
    if(file.is_open()){
        Registro r;
        Visita *v;
        file.seekg(0, ios::beg);
        int cant_registro = file.tellg()/sizeof(Registro);
        int n=0;
        file.seekg(0, ios::end);
        while (cant_registro<n) {
            file.read((char*)&r, sizeof (Registro));
            v = new Visita(r.url,r.tdp,r.origen);
            this->visitas.push_back(v);
            ++n;
        }
        file.close();
    }

}

void Empresa::escribirArchivo()
{
    Registro r;
    ofstream file("C://Users//kakuboy//Documents//GitHub//Practicas-Poo//Parciales//2do-Parcial-2019//archivo.txt");
    if(file.is_open()){
        file<<"URL----------------Puntaje"<<endl;
        for(auto i=this->visitas.begin(); i!=this->visitas.end(); ++i){
            file<<(*i)->getUrl()<<"---------"<<(*i)->getPuntaje()<<endl;
        }
    }
    file.close();
}

bool ordenar(Visita* a, Visita* b){
    if(a->getPuntaje() < b->getPuntaje()){
       return true;
    }
    return false;
}

void Empresa::cincoSitiosYDirecto()
{
    sort(visitas.begin(),visitas.end(),ordenar);

    for(int i=0; i<5; i++){
        cout<<"URL: "<<visitas[i]->getUrl()<<"  Puntaje: "<<visitas[i]->getPuntaje()<<endl;
    }

    for(size_t i=0; i< visitas.size(); i++){
        if(strcmp(visitas[i]->getOrigen(), "D") < 0){
            cout<<"URL: "<<visitas[i]->getUrl()<<endl;
        }
    }
}
