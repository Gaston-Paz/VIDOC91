#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
private:
    int dia, mes, anio;
public:
    void setFechaMadre(int ,int ,int );
    int getDia();
    int getMes();
    int getAnio();
    void mostrarFecha();

};

#endif // FECHA_H_INCLUDED
