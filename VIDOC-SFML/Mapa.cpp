#include <SFML/Graphics.hpp>
#include "Mapa.h"
using namespace sf;

void Mapa::setmapa(){

Archivo.loadFromFile("MAPADEFINITIVO.png");
Mapa.setTexture(Archivo);
}

Sprite &Mapa::getmapa(){
return Mapa;
}





