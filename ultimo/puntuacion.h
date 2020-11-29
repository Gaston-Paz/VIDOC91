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
    void setPuntos(int points);
    int getpuntos();
    void guardarEnDisco();
    bool leerDeDisco(int );
    void mostrar();
    void setAgregaPuntos(int points);

};


#endif // PUNTUACION_H_INCLUDED
