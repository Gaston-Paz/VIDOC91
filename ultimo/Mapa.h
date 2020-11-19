#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include <SFML/Graphics.hpp>
#include "limite.h"

class Mapa{
private:
sf::Sprite Map;
sf::Texture Archivo;
limite limit[30];

public:
Mapa();
void setmapa();
sf::Sprite &getmapa();
void dibujar_limites(sf::RenderWindow *window,int x, int y, int a, int b, int p);
sf::RectangleShape getlimite(int x);
void cargar_limites();
int globalBound(int x);
};

#endif // MAPA_H_INCLUDED
