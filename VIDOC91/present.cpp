#include <SFML/Graphics.hpp>
#include "present.h"


void presentacion::setlogo(){
presenta.loadFromFile("Logo.png");
logo.setTexture(presenta);
logo.setPosition(0,0);
}

sf::Sprite& presentacion::getlogo(){
return logo;
}
