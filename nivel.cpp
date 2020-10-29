#include <SFML/Graphics.hpp>
#include "juego.h"
#include "nivel.h"
using namespace sf;

nivel::nivel(int difi, int vida){
cargar_imagenes(difi, vida);
imprimir_imagenes();

}
void nivel::cargar_imagenes(int difi, int vida){
setEscenografia();
setSalud(vida);
setDificultad(difi);
}
void nivel::imprimir_imagenes(){

}
void nivel::setEscenografia(){
switch(dificultad){
case 1:
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("mapa.png");
escenografia->setTexture(*escena);
break;

case 2:
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("mapa.png");
escenografia->setTexture(*escena);
break;

case 3:
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("mapa.png");
escenografia->setTexture(*escena);
break;

case 4:
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("mapa.png");
escenografia->setTexture(*escena);
break;
}

}
void nivel::setSalud(int vida){
switch(vida/10){
case 0:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 1:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 2:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 3:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 4:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 5:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 6:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 7:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 8:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 9:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 10:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

}


}
void nivel::setDificultad(int difi){
dificultad = difi;
}
