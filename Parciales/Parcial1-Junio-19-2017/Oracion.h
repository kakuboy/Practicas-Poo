#ifndef ORACION_H
#define ORACION_H


class Oracion
{
    int cant;
    char ** vector;
public:
    Oracion(){
        cant = 0;
        vector = new char*[cant];
    }

    int getCantPalabras();
    int getCantLetras();
    void agregarPalabra(char *a);
    void inicializar(char *texto);
};

#endif // ORACION_H
