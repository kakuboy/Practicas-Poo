#ifndef EMPLEADO_H
#define EMPLEADO_H


class Empleado
{
    char *nom = new char[200];
    char *ape = new char[200];
    char *dni = new char[8];
    float horasTot;
public:
    Empleado();
    void AcumHoras();
    char *getNom() const;
    char *getApe() const;
    char *getDni() const;
    float getHorasTot() const;
    void setHorasTot(float value);
};

#endif // EMPLEADO_H
