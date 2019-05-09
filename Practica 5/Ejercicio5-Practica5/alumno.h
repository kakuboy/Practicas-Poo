#ifndef ALUMNO_H
#define ALUMNO_H

class Alumno
{
    int dni;
    char *nombre;
    int notas[4];
public:
    Alumno(){

    }
    Alumno(int dni){
        this->dni = dni;
    }

    //Setters y Getters
    float getNota1();
    float getNota2();
    float getNota3();
    float getNota4();
    float getDni();
    char *getNombre();
    void setNota1(int nota);
    void setNota2(int nota);
    void setNota3(int nota);
    void setNota4(int nota);
    void setNombre(char *nombre);
    //FIN Setters y Getters

    float promedio(); //Calcular el Promedio

    //void seInscribe(Curso c);
};

#endif // ALUMNO_H
