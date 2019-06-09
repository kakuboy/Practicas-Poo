#include "Curso.h"
#include <cstring>
#include <ctype.h>
#include <string.h>


/*Funcion para poder pasar a minuscula los char*/
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

        cout<<this->alumnos[i]->getNombre()<<" "<<this->alumnos[i]->getApellido()<<" "<<this->alumnos[i]->aprueba()<<endl;
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


        name=alumnos[i]->getNombre();/*Asignando a name los nombres de los Alumnos*/
        int n1 = strlen(name);/*Asignando a n1 la longitud de name*/
        //name_1 = new char[n1];/*Asignando a name_1 un new vector de char de cantidad n1*/
        //strcpy(name_1,name);/*Copiando lo que hay en name a name_1*/


        ape=alumnos[i]->getApellido();/*Asignando a ape los apellidos de los Alumnos*/
        int n2 = strlen(ape);/*Asignando a n2 la longitud de ape*/
        //ape_1 = new char[n2];/*Asignando a ape_1 un new vector de char de cantidad n2*/
        //strcpy(ape_1,ape);/*Copiando lo que hay en ape a ape_1*/


        int n3 = strlen(arroba);/*Asignando a n3 la longitud de arroba*/
        int nt = 1 + n2 + n3;/*Asignando a nt la suma de las 3 longitudes*/
        total = new char[nt];/*Asignando a total un new vector char de cantidad nt*/



        //strncat(total,name_1,1);/*Concatenando name_1(posicion 1) a total*/
        //strcat(total,ape_1);/*Concatenando ape_1 a total*/
        //strcat(total,arroba);/*Concatenando arroba a total*/
        strncat(total,name,1);
        strcat(total,ape);
        strcat(total,arroba);

        strlwr(total);/*Pasando a minuscula todos los caracteres*/

        cout<<total<<endl;
    }
}

void Curso::agregarAlumno(Alumno *a)
{
    this->alumnos[this->cantAlumnos] = a;
    this->cantAlumnos++;
}
