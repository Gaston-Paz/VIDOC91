#include <SFML/Graphics.hpp>
#include "Presentacion.h"

void Presentacion::setpresentacion(){
Fondo = new Texture;
Logo = new Sprite;
Fondo->loadFromFile("Logo.png");
Logo->setTexture(*Fondo);
Logo->setPosition(0,0);
}

Sprite Presentacion::getpresentacion(){
return * Logo;
}


