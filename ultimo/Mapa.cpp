#include <SFML/Graphics.hpp>
#include "Mapa.h"

Mapa::Mapa(){
setmapa();
limite limit;
musica.openFromFile("mapa.wav");
setpuntosmapa();
setnivelmapa();
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

void Mapa::setpuntosmapa(){
fuentemapa.loadFromFile("Base05.ttf");
puntosmapa.setFont(fuentemapa);
puntosmapa.setString("PUNTOS: ");
puntosmapa.setColor(sf::Color::Green);
puntosmapa.setPosition(1050,1);
}

sf::Text &Mapa::getpuntosmapa(){
return puntosmapa;
}

void Mapa::setnivelmapa(){
nivelmapa.setFont(fuentemapa);
nivelmapa.setString("AVANCE: NIVEL ");
nivelmapa.setColor(sf::Color::Green);
nivelmapa.setPosition(30,1);
}

sf::Text &Mapa::getnivelmapa(){
return nivelmapa;
}
