#include <SFML/Graphics.hpp>
#include "juego.h"

using namespace sf;


juego::juego(int tamanio_x, int tamanio_y, char *titulo){

pantalla = new RenderWindow(sf::VideoMode(tamanio_x,tamanio_y), titulo);

fondo = new Texture;

mapa = new Sprite;

fondo->loadFromFile("mapa.png");

mapa->setTexture(*fondo);

ciclo();
}
void juego::imprimir_pantalla(){
pantalla->clear();
pantalla->draw(*mapa);
pantalla->display();

}
void juego::ciclo(){
while(pantalla->isOpen()){
    imprimir_pantalla();
}


}
