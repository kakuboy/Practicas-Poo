#include "Curso.h"
#include <cstring>
#include <ctype.h>
#include <string.h>

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}

void Curso::mostrarCondiciones()
{
    for (int i=0;i<this->cantAlumnos;i++) {
        if(this->alumnos[i]->aprueba()){
            cout<<this->alumnos[i]->getNombre()<<" "<<this->alumnos[i]->getApellido()<<" "<<this->alumnos[i]->aprueba()<<endl;
        }
        else {
            cout<<this->alumnos[i]->getNombre()<<" "<<this->alumnos[i]->getApellido()<<" "<<this->alumnos[i]->aprueba()<<endl;
        }
    }
}

void Curso::mostrarMails()
{
    char *name, *ape;

    char arroba[] = "@uader.edu.ar";

    char * name_1 = nullptr;
    char * ape_1 = nullptr;
    char * total = nullptr;

    cout<<"\nMails de los Alumnos:"<<endl;
    for (int i=0;i<this->cantAlumnos;i++) {


        name=alumnos[i]->getNombre();
        int n1 = strlen(name);
        name_1 = new char[n1];
        strcpy(name_1,name);


        ape=alumnos[i]->getApellido();
        int n2 = strlen(ape);
        ape_1 = new char[n2];
        strcpy(ape_1,ape);


        int n3 = strlen(arroba);
        int nt = 1 + n2 + n3;
        total = new char[nt];



        strncat(total,name_1,1);
        strcat(total,ape_1);
        strcat(total,arroba);

        strlwr(total);


        cout<<total<<endl;
    }
}

void Curso::agregarAlumno(Alumno *a)
{
    this->alumnos[this->cantAlumnos] = a;
    this->cantAlumnos++;
}
