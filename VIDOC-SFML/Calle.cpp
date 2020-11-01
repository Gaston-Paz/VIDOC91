#include <SFML/Graphics.hpp>
#include "Calle.h"
using namespace sf;

void Calle::setcallesita(){
calle1 = new Texture;
carretera = new Sprite;
calle1->loadFromFile("CALLE1.png");
carretera->setTexture(*calle1);
carretera->setPosition(1000,150);

}

Sprite &Calle::getcallesita(){
return *carretera;
}

