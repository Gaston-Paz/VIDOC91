#include <SFML/Graphics.hpp>
#include "Raviolete.h"
#include "Personaje.h"
using namespace sf;


void Raviolete::setimagen(){
imagen.loadFromFile("archivo");
raviol.setTexture(imagen);
}
Sprite &Raviolete::raviolImagen(){
return raviol;
}
void Raviolete::setataque(){
Tipo_ataque = rand()%4+1;
srand(time(NULL));
}
int Raviolete::getataque(){
setataque();
switch(Tipo_ataque){
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 7;
break;
case 4:
return 10;
break;
}
}

Raviolete::Raviolete(){
setsalud(100);
}
