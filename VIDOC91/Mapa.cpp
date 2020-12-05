#include <SFML/Graphics.hpp>
#include "Mapa.h"

Mapa::Mapa(){
setmapa();
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
