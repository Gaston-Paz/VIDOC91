#ifndef PUNTUACION_H_INCLUDED
#define PUNTUACION_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "fecha.h"


class puntos{
private:
    int punto;
    Fecha fechaJuego;

public:
    puntos();
    void setpuntos(int points);
    int getpuntos();
    void guardarEnDisco();
    bool leerDeDisco(int );
    void mostrar();

};


#endif // PUNTUACION_H_INCLUDED
