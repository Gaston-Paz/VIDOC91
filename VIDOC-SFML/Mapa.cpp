#include <SFML/Graphics.hpp>
#include "Mapa.h"
using namespace sf;

void Mapa::setmapa(){
Archivo = new Texture;
Mapa = new Sprite;
Archivo->loadFromFile("mapa.png");
Mapa->setTexture(*Archivo);
}

Sprite Mapa::getmapa(){
return *Mapa;
}





