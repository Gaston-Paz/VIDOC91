#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "limite.h"

class Mapa{
private:
    sf::Sprite Map;
    sf::Texture Archivo;
    limite limit[30];
    sf::Music musica;

public:
    Mapa();
    void setmapa();
    sf::Sprite &getmapa();
    void dibujar_limites(sf::RenderWindow *window,int x, int y, int a, int b, int p);
    sf::RectangleShape getlimite(int x);
    int globalBound(int x);
    sf::Music& getMusica();
};

#endif // MAPA_H_INCLUDED
