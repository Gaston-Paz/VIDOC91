#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "Menu.h"
class Partida{
private:
    int nivelAlcanzado;
    int puntosAcumulados;
    unsigned int tics = 0;
    sf::Texture fondo;
    sf::Sprite fon;
    sf::Font fuent;
    sf::Text guardarPartida;
    sf::Text volver;

public:
    Partida();
    void setNivelAlcanzado(int );
    void setPuntosAcumulados(int );
    int getNivelAlcanzado();
    int getPuntosAcumulados();
    bool leerDeDisco();
    void guardarEnDisco();
    sf::Sprite& getSprite();
    void setOpciones(int );
    sf::Text& getVolver();
    sf::Text& getguardarPartida();
    int seccionPartida(sf::RenderWindow *window);
    void seleccionado(int , sf::RenderWindow *window);

};

#endif // PARTIDA_H_INCLUDED
