#ifndef EMPLEADO_H
#define EMPLEADO_H


class Empleado
{

public:
    Empleado(){

    }

    char* dni = new char[8];
    char* nombre = new char[200];
    char* apellido = new char[200];
    int horas;
    char* fecha = new char[8];

    char *getDni() const;
    void setDni(char *value);
    char *getNombre() const;
    void setNombre(char *value);
    char *getApellido() const;
    void setApellido(char *value);
    int getHoras() const;
    char *getFecha() const;
    void setFecha(char *value);
    void setHoras(int value);
};

#endif // EMPLEADO_H
