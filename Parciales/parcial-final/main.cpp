#include <QCoreApplication>
#include <fstream>
#include <p_importado.h>
#include <p_jardin.h>
#include <p_nacional.h>
#include <empresa.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    empresa * musimundo = new empresa;

    char * nombre = new char[50];
    char * marca = new char[20];
    char * tipo = new char[1];

    strcpy(tipo, "I");
    strcpy(nombre, "netbook");
    strcpy(marca, "bhango");
    p_importado * netbhango = new p_importado(0, nombre, marca, 24000, tipo);
    musimundo->agregar_producto(netbhango);

    strcpy(tipo, "I");
    strcpy(nombre, "notbook");
    strcpy(marca, "bhango");
    p_importado * notbhango = new p_importado(1, nombre, marca, 26000, tipo);
    musimundo->agregar_producto(notbhango);

    strcpy(tipo, "J");
    strcpy(nombre, "maseta");
    strcpy(marca, "terranova");
    p_jardin * masetovich = new p_jardin(2, nombre, marca, 300, tipo);
    musimundo->agregar_producto(masetovich);

    strcpy(tipo, "J");
    strcpy(nombre, "ferti...");
    strcpy(marca, "terranova");
    p_jardin * fertilizante = new p_jardin(3, nombre, marca, 350, tipo);
    musimundo->agregar_producto(fertilizante);

    strcpy(tipo, "N");
    strcpy(nombre, "silla");
    strcpy(marca, "don astilla");
    p_nacional * sillovich = new p_nacional(4, nombre, marca, 1200, tipo);
    musimundo->agregar_producto(sillovich);

    musimundo->mostrar();
    musimundo->incrementar_precio(0.03);
    cout<<endl;
    musimundo->mostrar();
    musimundo->incrementar_precio(0.04);
    cout<<endl;
    musimundo->mostrar();

    musimundo->escribir_archi();
    musimundo->leer_archi();
    cout<<endl;
    musimundo->mostrar();

    //musimundo->productosXmarca();
    musimundo->mostrarProductosPorMarca();

    return a.exec();
}
