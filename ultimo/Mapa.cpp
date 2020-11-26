#include <SFML/Graphics.hpp>
#include "Mapa.h"

Mapa::Mapa(){
setmapa();
limite limit;

musica.openFromFile("mapa.wav");
;
}

void Mapa::setmapa(){
Archivo.loadFromFile("MAPADEFINITIVO.png");
Map.setTexture(Archivo);
}

sf::Sprite& Mapa::getmapa(){
return Map;
}

void Mapa::dibujar_limites(sf::RenderWindow *window,int x, int y, int a, int b, int p){
window->draw(limit[p].getlimite(x,y,a,b));
}

sf::RectangleShape Mapa::getlimite(int x){
return limit[x].lim;
}

sf::Music& Mapa::getMusica(){
return musica;
}
