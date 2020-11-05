#include <SFML/Graphics.hpp>
#include "nivel.h"
using namespace sf;

nivel::nivel(int level){
switch(level){
case 1:
setfondos1();

break;
///case 2:
///break;
///case 3:
///break;
///case 4:
///break;
}
}

void nivel::setfondos1(){
fondo.loadFromFile("nivel1.png");
fondi.setTexture(fondo);
}

Sprite &nivel::getfondo1(){
return fondi;
}

