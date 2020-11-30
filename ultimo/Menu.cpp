#include <SFML/Graphics.hpp>
#include "Menu.h"

Menu::Menu(){
setfondomenu();
setopcion(300,100,"Base05.ttf","JUEGO NUEVO", true, 0);
setopcion(300,200,"Base05.ttf", "CONTINUAR PARTIDA", false, 1);
setopcion(300,300,"Base05.ttf", "SALIR DEL JUEGO", false, 2);
Tipografia.loadFromFile("Base05.ttf");
}

void Menu::setfondomenu(){
Prese.loadFromFile("fondomenu.png");
Presentacion.setTexture(Prese);

}

sf::Sprite &Menu::getfondomenu(){
return Presentacion;
}

void Menu::setopcion(int x,int y,char *Fuente,char *Titulo, bool Pinta, int i){
Tipografia.loadFromFile(Fuente);
opcion[i].setFont(Tipografia);
opcion[i].setString(Titulo);
opcion[i].setPosition(x,y);
if(Pinta){
opcion[i].setColor(sf::Color(115,47,32,255));
}
else{
opcion[i].setColor(sf::Color::White);
}
}

sf::Text &Menu::getnuevo(){
return opcion[0];
}

sf::Text &Menu::getcontinuar(){
return opcion[1];
}

sf::Text &Menu::getsalir(){
return opcion[2];
}

sf::Font &Menu::getfuente(){
return Tipografia;
}
