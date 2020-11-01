#include <SFML/Graphics.hpp>
#include "Casa.h"
using namespace sf;

void Casa::setcasita(){
home = new Texture;
casita = new Sprite;
home->loadFromFile("puerta1.png");
casita->setTexture(*home);
casita->setPosition(55,329);

home1 = new Texture;
casita1 = new Sprite;
home1->loadFromFile("puerta2.jpg");
casita1->setTexture(*home1);
casita1->setPosition(361,145);

home2 = new Texture;
casita2 = new Sprite;
home2->loadFromFile("puerta3.jpg");
casita2->setTexture(*home2);
casita2->setPosition(708,250);

home3 = new Texture;
casita3 = new Sprite;
home3->loadFromFile("puerta4.jpg");
casita3->setTexture(*home3);
casita3->setPosition(195,616);

home4 = new Texture;
casita4 = new Sprite;
home4->loadFromFile("puerta5.jpg");
casita4->setTexture(*home4);
casita4->setPosition(1080,600);

}
Sprite &Casa::getcasita(){
return *casita;
}

Sprite &Casa::getcasita1(){
return *casita1;
}

Sprite &Casa::getcasita2(){
return *casita2;
}

Sprite &Casa::getcasita3(){
return *casita3;
}

Sprite &Casa::getcasita4(){
return *casita4;
}
