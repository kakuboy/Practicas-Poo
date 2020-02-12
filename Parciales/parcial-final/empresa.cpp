#include "empresa.h"
#include <vector>
#include <fstream>
#include "p_nacional.h"
#include "p_importado.h"
#include "p_jardin.h"
#include <iostream>
#include <string.h>


using namespace std;

struct registro{
    int cod;
    char *nomb=new char[20];
    char *marca=new char[50];
    double precio;
    char *tipo=new char[1];
};

struct cantXmarca{
    char* marca=new char[30];
    int cantidad;
    cantXmarca *link;
};

struct registroVisita{
    char* url=new char[30];
    int tiempoPerm;
    char* origen=new char[1];
};

class visita{
    char* url=new char[30];
    int tiempoPerm;
    char* origen=new char[1];
    int puntaje;

public:
    visita(char* url, int tiempoPerm, char* origen){
        strcpy(this->url, url);
        this->tiempoPerm = tiempoPerm;
        strcpy(this->origen, origen);

        switch(*origen){
        case 'B':
            puntaje=10*tiempoPerm;
            break;
        case 'D':
            puntaje=15*tiempoPerm;
            break;
        case 'O':
            puntaje=1*tiempoPerm;
            break;
        }
    }
};

typedef struct cantXmarca cantXmarca;
typedef struct registro registro;

empresa::empresa(){
    cant_productos=0;
}

void empresa:: incrementar_precio(double porcentajeDolar){
    for(auto i=this->productos.begin() ; i!=this->productos.end() ; ++i){
        (*i)->setPorcentajeDolar(porcentajeDolar);
        (*i)->actualizar();
    }
}

void empresa:: agregar_producto(producto* prod){
    this->productos.push_back(prod);
}

void empresa:: mostrar(){
    for(auto i=this->productos.begin() ; i!=this->productos.end() ; ++i){
        cout<<*(*i);
    }
}

void empresa:: productosXmarca(){
    bool d=false;
    cantXmarca * STRU = new cantXmarca;
    cantXmarca * aux = STRU;
    cantXmarca * auxi = NULL;
    for(size_t i=0 ; i<sizeof (productos) ; ++i){
        if(i==0){
           aux->marca=productos[i]->getMarca();
           aux->cantidad=0;
           aux->link=NULL;
        }

        while(aux!=NULL){
            if(aux->marca==productos[i]->getMarca()){
                d=true;
                aux->cantidad++;
            }
            auxi=aux;
            aux=aux->link;
        }
        aux=auxi;
        if(d == false && i != 0){
            cantXmarca * aux2 = new cantXmarca;
            aux2->marca=productos[i]->getMarca();
            aux2->cantidad=1;
            aux2->link=NULL;
            aux->link=aux2;
        }
        d=false;
        auxi=NULL;
        aux=STRU;
    }

    while (STRU->link!=NULL){
        cout<<"Marca: "<<STRU->marca<<"    Cantidad: "<<STRU->marca<<endl;
        STRU=STRU->link;
    }
}

void empresa::mostrarProductosPorMarca()
{
    std::map<char*, int> prodXMarca;
    double precioMasCaro = -1;
    double precioMasBarato = 100000000;
    producto* prodMasCaro = nullptr;
    producto* prodMasBarato = nullptr;

    for(size_t i = 0 ; i < productos.size() ; i++){
        // Contabilizar contidad de productos por marca
        auto it = prodXMarca.begin();
        bool existe = false;
        for(it=prodXMarca.begin() ; it!=prodXMarca.end() ; it++){
            if (strcmp(it->first, productos[i]->getMarca()) == 0)
            {
                existe = true;
                break;
            }
        }

        if (!existe)
            prodXMarca.insert({productos[i]->getMarca(), 1});
        else
            it->second = it->second + 1;

        // Obtener el producto más caro y el más barato
        if (productos[i]->getPrecio() > precioMasCaro)
        {
            precioMasCaro = productos[i]->getPrecio();
            prodMasCaro = productos[i];
        }

        if (productos[i]->getPrecio() < precioMasBarato)
        {
            precioMasBarato = productos[i]->getPrecio();
            prodMasBarato = productos[i];
        }
    }

    cout << "Productos por marca: " << endl;
    for(auto i=prodXMarca.begin() ; i!=prodXMarca.end() ; ++i){
        cout<<"Marca: "<<i->first<<"    Cantidad: "<<i->second<<endl;
    }

    cout << "Producto mas barato: " << endl << (*prodMasBarato) << endl;
    cout << "Producto mas caro: " << endl << (*prodMasCaro) << endl;
}

/*void empresa:: mostrar_cant_marcas(){
    cantXmarca *aux = productosXmarca();
    while (aux->link!=NULL){
        cout<<"Marca: "<<aux->marca<<"    Cantidad: "<<aux->marca<<endl;
        aux=aux->link;
    }
}*/

void empresa :: leer_archi(){
    ifstream file("C://Users//Castolo//Desktop//parcial//archivo.dat", ios::binary);
    if(file.is_open()){
        registro r;
        producto* p;
        file.seekg(0, ios::beg);
        int cant_registro=file.tellg()/sizeof(registro);
        int n=0;
        file.seekg(0, ios::end);
        while(cant_registro>n){
            file.read((char*)&r, sizeof (registro));
            //p=new visita(r.cod, r.precio, r.tipo);
            switch(*(r.tipo)){
            case 'N':
                p=new p_nacional(r.cod, r.nomb, r.marca, r.precio, r.tipo);
                break;
            case 'I':
                p=new p_importado(r.cod, r.nomb, r.marca, r.precio, r.tipo);
                break;
            case 'J':
                p=new p_jardin(r.cod, r.nomb, r.marca, r.precio, r.tipo);
                break;
            }
        this->productos.push_back(p);
        ++n;
        }
    file.close();
    }
}

void empresa:: escribir_archi(){
    registro r;
    ofstream archi("C://Users//Castolo//Desktop//parcial//archivo.dat", ios::binary);
    if(archi.is_open()){
        for(auto i=this->productos.begin() ; i!=this->productos.end() ; ++i){
            r.cod=(*i)->getCod();
            r.nomb=(*i)->getNomb();
            r.tipo=(*i)->getTipo();
            r.marca=(*i)->getMarca();
            r.precio=(*i)->getPrecio();
            archi.write((char*)&r, sizeof (registro));
        }
    }
}
