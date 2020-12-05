#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED
#include <SFML/Graphics.hpp>

class Partida{
private:
    int nivelAlcanzado;
    int puntosAcumulados;


public:
    Partida();
    void setNivelAlcanzado(int );
    void setPuntosAcumulados(int );
    int getNivelAlcanzado();
    int getPuntosAcumulados();
    bool leerDeDisco();
    void guardarEnDisco();






};

#endif // PARTIDA_H_INCLUDED
